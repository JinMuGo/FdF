# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 13:42:33 by jgo               #+#    #+#              #
#    Updated: 2023/05/27 19:20:22 by jgo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifndef TOPDIR
		TOPDIR = $(abspath ..)
endif

include $(TOPDIR)/make_config/src/Rules.mk
include $(TOPDIR)/make_config/com/ColorRules.mk

bonus :
	$(MAKE) TOPDIR=$(TOPDIR) -C src_b $@

all : 
	$(MAKE) TOPDIR=$(TOPDIR) -C src_m $@

clean fclean :
	$(MAKE) TOPDIR=$(TOPDIR) -C src_m $@
	$(MAKE) TOPDIR=$(TOPDIR) -C src_b $@

re : fclean
	$(MAKE) TOPDIR=$(TOPDIR) -C src_m $@

.PHONY: all clean fclean re bonus
