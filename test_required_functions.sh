#!/bin/bash

# For each file, the function signature must coincide with the 
# standard libc function

PROJECT="$1"

source "./constants.sh"

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
	["ft_strlcat.c"]="size_t	ft_strlcat(char *dst, const char *src, size_t siz)"
	["ft_toupper.c"]="int	ft_toupper(int c)"
	["ft_tolower.c"]="int	ft_tolower(int c)"
	["ft_strchr.c"]="char	*ft_strchr(const char *s, int c)"
	["ft_strrchr.c"]="char	*ft_strrchr(const char *s, int c)"
	["ft_strncmp.c"]="int	ft_strncmp(const char *s1, const char *s2, size_t n)"
	["ft_memchr.c"]="void	*ft_memchr(const void *s, int c, size_t n)"
	["ft_memcmp.c"]="int	ft_memcmp(const void *s1, const void *s2, size_t n)"
	["ft_strnstr.c"]="char	*ft_strnstr(const char *big, const char *little, size_t len)"
	["ft_atoi.c"]="int	ft_atoi(const char *nptr)"
	["ft_calloc.c"]="void	*ft_calloc(size_t nmemb, size_t size)"
	["ft_strdup.c"]="char	*ft_strdup(const char *s)"

	# Funciones adicionales
	["ft_substr.c"]="char	*ft_substr(char const *s, unsigned int start, size_t len)"
	["ft_strjoin.c"]="char	*ft_strjoin(char const *s1, char const *s2)"
	["ft_strtrim.c"]="char	*ft_strtrim(char const *s1, char const *set)"
	["ft_split.c"]="char	**ft_split(char const *s, char c)"
	["ft_itoa.c"]="char	*ft_itoa(int n)"
	["ft_strmapi.c"]="char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))"
	["ft_striteri.c"]="char	*ft_striteri(char *s, void (*f)(unsigned int, char*))"
	["ft_putchar_fd.c"]="void	ft_putchar_fd(char c, int fd)"
	["ft_putstr_fd.c"]="void	ft_putstr_fd(char *s, int fd)"
	["ft_putendl_fd.c"]="void	ft_putendl_fd(char *s, int fd)"
	["ft_putnbr_fd.c"]="void	ft_putnbr_fd(int n, int fd)"

	# Funciones de listas enlazadas
	["ft_lstnew.c"]="t_list	*ft_lstnew(void *content)"
	["ft_lstadd_front.c"]="void	ft_lstadd_front(t_list **lst, t_list *new)"
	["ft_lstsize.c"]="unsigned int	ft_lstsize(t_list *lst)"
	["ft_lstlast.c"]="t_list	*ft_lstlast(t_list *lst)"
	# TODO: add the rest...
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
