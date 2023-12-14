#!/bin/sh
cat /etc/passwd | grep -v '\#' | sed -n 'n;p' | cut -d ':' -f1 | rev | sort -r | awk -v x="$FT_LINE1" -v y="$FT_LINE2" 'NR > 1 * x && NR <= 1 * y' | sed ':a;N;$!ba;s/\n/, /g' | sed -e '$s/$/./'
