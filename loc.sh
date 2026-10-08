#!/usr/bin/env bash
find "${1:-.}" -type f \( -name '*.php' -o -name '*.css' \) \
    -not -path '*/vendor/*' -exec awk 'END {print NR}' {} + |
awk '{total += $1} END {print "Nombre total de lignes :", total + 0}'