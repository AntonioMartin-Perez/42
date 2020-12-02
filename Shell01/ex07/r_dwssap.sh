cat /etc/passwd | cut -d: -f1 | sed '/^#/d' | sed -n "p;n" | rev | sort -r | awk "FNR>=$FT_LINE1 && FNR<=$FT_LINE2" | tr "\n" "," | sed 's/,/& /g' | rev | sed 's/,/./' | rev
