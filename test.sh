#!/bin/bash

separator() {
    printf '\n\033[1;36m=== %s ===\033[0m\n\n' "$1"
}

if [ "$#" -ne 1 ]; then
    echo "Usage: $0 <libft-directory>"
    exit 1
fi

PROJECT="$1"

separator "Required files exist"
./test_required_files_exist.sh "$PROJECT"

separator "Required functions are correct"
./test_required_functions.sh "$PROJECT"
