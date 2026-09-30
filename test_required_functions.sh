#!/bin/bash

# For each file, the function signature must coincide with the 
# standard libc function

PROJECT="$1"

GREEN='\033[0;32m'
RED='\033[0;31m'
RESET='\033[0m'

declare -A required_functions=(
    ["ft_isalpha.c"]="int	ft_isalpha(int c)"
    ["ft_isdigit.c"]="int	ft_isdigit(int c)"
    ["ft_isalnum.c"]="int	ft_isalnum(int c)"
    ["ft_isascii.c"]="int	ft_isascii(int c)"
    ["ft_isprint.c"]="int	ft_isprint(int c)"
    ["ft_strlen.c"]="size_t	ft_strlen(const char *s);"
)

failed=0

for file in "${!required_functions[@]}"; do
    prototype="${required_functions[$file]}"

    if grep -qF "$prototype" "$PROJECT/$file"; then
        printf "${GREEN}[PASS]${RESET} %s\n" "$prototype"
    else
        printf "${RED}[FAIL]${RESET} %s\n" "$prototype"
        failed=1
    fi
done


exit "$failed"
