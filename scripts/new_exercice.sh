#!/usr/bin/env bash

set -eu

if [ "$#" -ne 2 ]; then
    printf 'Usage: %s AAAA-MM-JJ_sujet_court nom_exercice\n' "$0" >&2
    exit 1
fi

session_dir="$1"
exercise_name="$2"
target_dir="00_fondations/01_syntaxe_et_compilation/$session_dir"

mkdir -p "$target_dir"
printf '# %s\n\n## Objectif\n\n' "$exercise_name" > "$target_dir/README.md"
printf '%s\n' '# Notes' '' '- Ce qui a bloque :' "- Ce que j'ai compris :" '- Tests realises :' > "$target_dir/notes.md"
printf '#include <stdio.h>\n\nint main(void)\n{\n    return 0;\n}\n' > "$target_dir/$exercise_name.c"

printf 'Exercice cree dans %s\n' "$target_dir"