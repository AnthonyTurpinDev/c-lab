#!/usr/bin/env bash
# init_labc.sh - Cree le squelette minimal de Lab.C.
# Usage : ./scripts/init_labc.sh [chemin_de_destination]

set -eu

DEST="${1:-.}"
DATE_MOIS=$(date +%Y-%m)
DATE_JOUR=$(date +%Y-%m-%d)

printf 'Initialisation de Lab.C dans : %s\n' "$DEST"

mkdir -p \
    "$DEST/docs/journal" \
    "$DEST/docs/cheatsheets" \
    "$DEST/00_fondations/01_syntaxe_et_compilation" \
    "$DEST/05_outils_dev/01_makefile" \
    "$DEST/05_outils_dev/02_debugging" \
    "$DEST/05_outils_dev/03_modularisation" \
    "$DEST/05_outils_dev/04_git" \
    "$DEST/scripts"

if [ ! -f "$DEST/docs/ressources.md" ]; then
    printf '%s\n' '# Ressources' '' 'Liens, documentation officielle et livres utiles.' > "$DEST/docs/ressources.md"
fi

if [ ! -f "$DEST/docs/journal/${DATE_MOIS}.md" ]; then
    printf '%s\n' "# Journal - ${DATE_MOIS}" '' "## ${DATE_JOUR}" '- Mise en place ou verification du squelette de Lab.C.' > "$DEST/docs/journal/${DATE_MOIS}.md"
fi

FIRST="$DEST/00_fondations/01_syntaxe_et_compilation/${DATE_JOUR}_hello_world"
mkdir -p "$FIRST"

if [ ! -f "$FIRST/main.c" ]; then
    printf '%s\n' '#include <stdio.h>' '' 'int main(void)' '{' '    printf("Hello, Lab.C!\\n");' '    return 0;' '}' > "$FIRST/main.c"
fi

if [ ! -f "$FIRST/README.md" ]; then
    printf '%s\n' '# Hello World - premier circuit complet' '' 'Objectif : coder, compiler proprement, noter, puis committer.' > "$FIRST/README.md"
fi

if [ ! -f "$FIRST/notes.md" ]; then
    printf '%s\n' '# Notes' '' '- `-Wall` : active les avertissements courants.' '- `-Wextra` : active des avertissements supplementaires.' '- Score de maitrise : /5' '- A refaire : oui / non' > "$FIRST/notes.md"
fi

printf '%s\n' 'Squelette verifie.' '' 'Prochaine etape :' "  gcc -Wall -Wextra $FIRST/main.c -o $FIRST/hello_world.exe" "  $FIRST/hello_world.exe" '  git add -A && git commit -m "chore: squelette initial de Lab.C"'
