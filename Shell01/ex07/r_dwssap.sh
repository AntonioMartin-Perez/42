cat /etc/passwd | sed '/^#/d' | sed -n "n;p" | sed 's/:\(.*\)//g' | rev | sort -r | awk "FNR>=$FT_LINE1 && FNR<=$FT_LINE2" | tr "\n" " " | sed 's/ /, /g' | sed 's/\(.*\), /\1./' | tr -d "\n"
