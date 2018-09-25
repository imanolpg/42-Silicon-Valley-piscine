cat /etc/passwd | grep -o '^[^#]*' | grep . | sed 's/:.*//' | rev | sort -r | sed -n -e "${FT_LINE1}${FT_LINE2}p" | awk 'NR> 1 { printf(", ") } {printf "%s",$0}' | sed 's/[^.]$/&./'
