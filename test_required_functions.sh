#!/bin/bash

# For each file, the function signature must coincide with the 
# standard libc function

PROJECT="$1"

GREEN='\033[0;32m'
RED='\033[0;31m'
RESET='\033[0m'

declare -A required_functions=(

	# Funciones de libc
    ["ft_isalpha.c"]="int	ft_isalpha(int c)"
    ["ft_isdigit.c"]="int	ft_isdigit(int c)"
    ["ft_isalnum.c"]="int	ft_isalnum(int c)"
    ["ft_isascii.c"]="int	ft_isascii(int c)"
    ["ft_isprint.c"]="int	ft_isprint(int c)"
    ["ft_strlen.c"]="size_t	ft_strlen(const char *s)"
	["ft_memset.c"]="void	*ft_memset(void *s, int c, size_t n)"
	["ft_bzero.c"]="void	ft_bzero(void *s, size_t n)"
	["ft_memcpy.c"]="void	*ft_memcpy(void *dest, const void *src, size_t n)"
	["ft_memmove.c"]="void	*ft_memmove(void *dest, const void *src, size_t n)"
	["ft_strlcpy.c"]="size_t	ft_strlcpy(char *dst, const char *src, size_t siz)"
	# ["ft_strlcat.c"]=""
	["ft_toupper.c"]="int	ft_toupper(int c)"
	["ft_tolower.c"]="int	ft_tolower(int c)"
	# ["ft_strchr.c"]=""
	# ["ft_strrchr.c"]=""
	# ["ft_strncmp.c"]=""
	# ["ft_memchr.c"]=""
	# ["ft_memcmp.c"]=""
	# ["ft_strnstr.c"]=""
	# ["ft_atoi.c"]=""
	# ["ft_calloc.c"]=""
	# ["ft_strdup.c"]=""
	# Funciones adicionales
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
