#!/bin/bash

PROJECT="$1"

GREEN='\033[0;32m'
RED='\033[0;31m'
RESET='\033[0m'

REQUIRED_FILES=(

	"README.md"
    "Makefile"
    "libft.h"

	# Funciones de libc
    "ft_isalpha.c"
    "ft_isdigit.c"
    "ft_isalnum.c"
    "ft_isascii.c"
    "ft_isprint.c"
    "ft_strlen.c"
	"ft_memset.c"
	"ft_bzero.c"
	"ft_memcpy.c"
	"ft_memmove.c"
	"ft_strlcpy.c"
	"ft_strlcat.c"
	"ft_toupper.c"
	"ft_tolower.c"
	"ft_strchr.c"
	"ft_strrchr.c"
	"ft_strncmp.c"
	"ft_memchr.c"
	"ft_memcmp.c"
	"ft_strnstr.c"
	"ft_atoi.c"
	"ft_calloc.c"
	"ft_strdup.c"

	# Funciones adicionales	
	"ft_substr"
	"ft_strjoin"
	"ft_strtrim"
	"ft_split"
)

failed=0

for file in "${REQUIRED_FILES[@]}"; do
    if [[ ! -f "$PROJECT/$file" ]]; then
        printf "${RED}[FAIL]${RESET} %s does not exist\n" "$file"
        failed=1
    else
        printf "${GREEN}[PASS]${RESET} %s exists\n" "$file"
	fi
done

exit "$failed"
