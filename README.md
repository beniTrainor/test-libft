# test-libft

A test suite for the 42 `libft` project written entirely with shell and C for simplicity. No frameworks, no dependencies.

## Getting started

You can run all the tests at once:
```
$ ./test.sh $LIBFT
```

Or you can run scripts individually:
```
$ ./test_required_files_exist.sh $LIBFT
```

To run an individual test, you must compile it first:
```
$ cc -Wall -Wextra -Werror ${file} "test_${file}.c" && ./a.out
```
