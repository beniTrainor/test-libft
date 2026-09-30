#!/bin/bash

if [ "$#" -ne 1 ]; then
    echo "Usage: $0 <libft-directory>"
    exit 1
fi

PROJECT="$1"

./test_required_files_exist.sh "$PROJECT"
./test_required_functions.sh "$PROJECT"

