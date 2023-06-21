#!/bin/sh
cat /etc/passwd | grep \# -v | sed -n 'n;p' | cut -d ':' -f 1 | rev | sort -r | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | tr '\n' ',' | sed 's:,:, :g;s:, $:.:' | tr -d '\n'

