# 
#
# This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
# 
# Copyright 2007-2019 Broadcom Inc. All rights reserved.
#
# bcm2c - compile config.bcm into static code

$|=1;
open (BCMFILE, $ARGV[0]) || die " bcm2c: could not open .bcm file[$ARGV[0]]\n";

print <<'EOT';
/*
 * This file is automatically generated by bcm2c_linux.pl.  DO NOT EDIT!
 */
#include <sal/appl/config.h>
EOT
$n_vars = 0;
printf("void\nsal_config_init_defaults(void)\n{\n");
        printf("\t(void)sal_config_set\(\"os\", \"unix\"\)\;\n");
while (<BCMFILE>) { 
    next if /#/;
    ($attr,$val) = split(/=/);
    chop $val;
    if(($attr ne "") && ($val ne "")){
	printf("\tsal_config_set(\"$attr\",\"$val\");\n");
	$n_vars++;
    }
}
print "}\n";
