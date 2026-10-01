#!/bin/bash

PROJECT="$1"

source "./config.sh"
source "./constants.sh"

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
