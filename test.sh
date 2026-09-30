#!/bin/bash

separator() {
    printf '\n\033[1;36m=== %s ===\033[0m\n\n' "$1"
}

test_function() {
    local function="$1"

    cc -Wall -Wextra -Werror \
        "$PROJECT/${function}.c" \
        "test_${function}.c" \
        -o "/tmp/test_${function}" || return 1

    "/tmp/test_${function}"
}

norminette_test() {
    local file="$1"

    if norminette "$file" > /dev/null 2>&1; then
        printf "\033[0;32m[PASS]\033[0m %s\n" "$file"
        return 0
    else
        printf "\033[0;31m[FAIL]\033[0m %s\n" "$file"
        return 1
    fi
}

source "./config.sh"

if [ "$#" -ne 1 ]; then
    echo "Usage: $0 <libft-directory>"
    exit 1
fi

PROJECT="$1"

separator "Norminette"
norminette_test "$PROJECT/Makefile"
norminette_test "$PROJECT/libft.h"
for f in $PROJECT/*.c; do
	norminette_test "$f"
done

separator "Required files"
./test_required_files_exist.sh "$PROJECT"

separator "Required function definitions"
./test_required_functions.sh "$PROJECT"

separator "Function unit tests"

for f in ${REQUIRED_FILES[@]}; do
	if [[ "$f" == *.c ]]; then
		test_function "${f%.c}"
	fi
done
