# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicolas_bauer.sh                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imgutier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/29 03:28:59 by imgutier          #+#    #+#              #
#    Updated: 2018/06/29 14:03:59 by imgutier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cat $1 | grep -i "nicholas	bauer" | awk '{print $(NF-1)}'