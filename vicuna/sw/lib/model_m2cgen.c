//#include <string.h>
//#include <math.h>
#include "model_m2cgen.h"

double my_exp(double expoente){

    double potencia = 1.0;
    double fatorial = 1.0;
    double result = 0.0;

    for(int i = 0; i < 25; i++){
        if(i == 0){
            potencia = 1.0;
            fatorial = 1.0;
        }
        else{
            potencia = potencia * expoente;
            fatorial = fatorial * i;
        }

        result = result + (potencia / fatorial);
    }
    return result;
   // printf("resultado Taylor: %lf \n\r", result);

}


void softmax(double *x, int size, double *result) {
    double max = x[0];
    for (int i = 1; i < size; ++i) {
        if (x[i] > max)
            max = x[i];
    }
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        result[i] = my_exp(x[i] - max);
        sum += result[i];
    }
    for (int i = 0; i < size; ++i)
        result[i] /= sum;
}

void score(double * input, double * output) {
    double var0[4];
    double var1;
    if (input[2] >= 1.1152632) {
        if (input[17] >= 3.416456) {
            if (input[13] >= -3.359496) {
                var1 = -0.070220165;
            } else {
                var1 = -0.17954737;
            }
        } else {
            if (input[7] >= 0.9546199) {
                var1 = -0.18065935;
            } else {
                var1 = 0.4379562;
            }
        }
    } else {
        if (input[18] >= 0.41300854) {
            if (input[18] >= 0.50815624) {
                var1 = -0.18701299;
            } else {
                var1 = 0.14181818;
            }
        } else {
            if (input[11] >= -4.0759554) {
                var1 = 0.56958526;
            } else {
                var1 = 0.3067332;
            }
        }
    }
    double var2;
    if (input[2] >= 1.3820059) {
        if (input[8] >= 2.7058253) {
            if (input[4] >= -0.0023768484) {
                var2 = -0.15669829;
            } else {
                var2 = 0.051717386;
            }
        } else {
            if (input[7] >= 0.9344455) {
                var2 = -0.104404256;
            } else {
                var2 = 0.34006387;
            }
        }
    } else {
        if (input[4] >= 0.54791254) {
            if (input[3] >= -1.0999506) {
                var2 = 0.024782648;
            } else {
                var2 = -0.18930498;
            }
        } else {
            if (input[6] >= 2.8356068) {
                var2 = -0.015203611;
            } else {
                var2 = 0.3255749;
            }
        }
    }
    double var3;
    if (input[17] >= 3.416456) {
        if (input[2] >= 1.3820059) {
            if (input[0] >= 0.64698887) {
                var3 = -0.14802659;
            } else {
                var3 = 0.081796825;
            }
        } else {
            if (input[4] >= 0.40052038) {
                var3 = -0.12663849;
            } else {
                var3 = 0.16660452;
            }
        }
    } else {
        if (input[4] >= 0.4300341) {
            if (input[19] >= -0.38254043) {
                var3 = -0.14451589;
            } else {
                var3 = 0.26821676;
            }
        } else {
            if (input[6] >= 3.4297752) {
                var3 = 0.010659244;
            } else {
                var3 = 0.2695268;
            }
        }
    }
    double var4;
    if (input[17] >= 3.416456) {
        if (input[2] >= 0.98532176) {
            if (input[18] >= 0.22153042) {
                var4 = -0.1577272;
            } else {
                var4 = -0.062490117;
            }
        } else {
            if (input[4] >= 0.5264638) {
                var4 = -0.16259938;
            } else {
                var4 = 0.14207955;
            }
        }
    } else {
        if (input[4] >= 0.4300341) {
            if (input[14] >= 0.8563378) {
                var4 = 0.11999728;
            } else {
                var4 = -0.15040393;
            }
        } else {
            if (input[6] >= 4.403461) {
                var4 = -0.025203407;
            } else {
                var4 = 0.2209566;
            }
        }
    }
    double var5;
    if (input[17] >= 3.416456) {
        if (input[2] >= 1.9318668) {
            if (input[0] >= 0.6336379) {
                var5 = -0.1348187;
            } else {
                var5 = 0.074074626;
            }
        } else {
            if (input[4] >= 0.40052038) {
                var5 = -0.12362276;
            } else {
                var5 = 0.10454434;
            }
        }
    } else {
        if (input[4] >= 0.4300341) {
            if (input[5] >= 3.9690046) {
                var5 = 0.13838597;
            } else {
                var5 = -0.13734792;
            }
        } else {
            if (input[6] >= 3.4297752) {
                var5 = -0.005156194;
            } else {
                var5 = 0.19355758;
            }
        }
    }
    double var6;
    if (input[11] >= -4.0844374) {
        if (input[18] >= 0.50692296) {
            var6 = -0.16562343;
        } else {
            if (input[6] >= 3.3923998) {
                var6 = -0.027626242;
            } else {
                var6 = 0.17450827;
            }
        }
    } else {
        if (input[2] >= 2.136682) {
            if (input[9] >= 2.4063044) {
                var6 = -0.1310166;
            } else {
                var6 = 0.1102684;
            }
        } else {
            if (input[4] >= 0.54791254) {
                var6 = -0.16721047;
            } else {
                var6 = 0.04551355;
            }
        }
    }
    double var7;
    if (input[11] >= -4.0844374) {
        if (input[18] >= 0.4132033) {
            if (input[18] >= 0.50692296) {
                var7 = -0.16178618;
            } else {
                var7 = -0.01705352;
            }
        } else {
            if (input[6] >= 2.9843755) {
                var7 = -0.0072284495;
            } else {
                var7 = 0.16281867;
            }
        }
    } else {
        if (input[18] >= 0.22153042) {
            if (input[6] >= -0.10803241) {
                var7 = -0.14431839;
            } else {
                var7 = 0.10336435;
            }
        } else {
            if (input[2] >= 3.8420677) {
                var7 = -0.100521445;
            } else {
                var7 = 0.06062386;
            }
        }
    }
    double var8;
    if (input[17] >= 2.658108) {
        if (input[11] >= -5.372525) {
            if (input[19] >= 5.615099) {
                var8 = 0.17439596;
            } else {
                var8 = -0.039884638;
            }
        } else {
            if (input[18] >= 0.22827667) {
                var8 = -0.15688083;
            } else {
                var8 = -0.050085843;
            }
        }
    } else {
        if (input[4] >= 0.47460878) {
            if (input[14] >= 0.9019118) {
                var8 = 0.1015713;
            } else {
                var8 = -0.14243808;
            }
        } else {
            if (input[6] >= 4.403461) {
                var8 = -0.030394329;
            } else {
                var8 = 0.17318715;
            }
        }
    }
    double var9;
    if (input[17] >= 2.658108) {
        if (input[18] >= 0.48722172) {
            var9 = -0.15942818;
        } else {
            if (input[11] >= -5.372525) {
                var9 = 0.04517803;
            } else {
                var9 = -0.08446148;
            }
        }
    } else {
        if (input[4] >= 0.47460878) {
            if (input[14] >= 0.89421) {
                var9 = 0.07769094;
            } else {
                var9 = -0.1332014;
            }
        } else {
            if (input[6] >= 4.403461) {
                var9 = -0.0337074;
            } else {
                var9 = 0.16421238;
            }
        }
    }
    double var10;
    if (input[13] >= -2.5663667) {
        if (input[6] >= 2.94671) {
            if (input[7] >= 0.8118124) {
                var10 = -0.12934749;
            } else {
                var10 = 0.18860424;
            }
        } else {
            if (input[9] >= 6.096298) {
                var10 = -0.09244953;
            } else {
                var10 = 0.14353088;
            }
        }
    } else {
        if (input[4] >= 0.5496956) {
            if (input[6] >= 0.0048219636) {
                var10 = -0.15777753;
            } else {
                var10 = 0.060979437;
            }
        } else {
            if (input[2] >= 3.8742898) {
                var10 = -0.09286133;
            } else {
                var10 = 0.033741325;
            }
        }
    }
    double var11;
    if (input[17] >= 2.658108) {
        if (input[18] >= 0.48722172) {
            var11 = -0.15656917;
        } else {
            if (input[11] >= -5.372525) {
                var11 = 0.033648085;
            } else {
                var11 = -0.070054226;
            }
        }
    } else {
        if (input[4] >= 0.47460878) {
            if (input[10] >= -1.2358563) {
                var11 = 0.06456262;
            } else {
                var11 = -0.12738511;
            }
        } else {
            if (input[6] >= 4.403461) {
                var11 = -0.03068821;
            } else {
                var11 = 0.15199497;
            }
        }
    }
    double var12;
    if (input[4] >= 0.0106200725) {
        if (input[6] >= -0.0086477995) {
            if (input[4] >= 0.5496956) {
                var12 = -0.15326923;
            } else {
                var12 = -0.027704692;
            }
        } else {
            if (input[21] >= 0.3741065) {
                var12 = -0.02615049;
            } else {
                var12 = 0.17195623;
            }
        }
    } else {
        if (input[5] >= 6.260523) {
            if (input[2] >= 3.4712245) {
                var12 = -0.13287587;
            } else {
                var12 = 0.11624498;
            }
        } else {
            if (input[8] >= 6.6754036) {
                var12 = 0.30468014;
            } else {
                var12 = 0.11761811;
            }
        }
    }
    double var13;
    if (input[17] >= 2.658108) {
        if (input[19] >= 4.1361074) {
            if (input[13] >= -6.961557) {
                var13 = 0.06679603;
            } else {
                var13 = -0.16024077;
            }
        } else {
            if (input[18] >= 0.201161) {
                var13 = -0.12148478;
            } else {
                var13 = -0.011450024;
            }
        }
    } else {
        if (input[4] >= 0.42744812) {
            if (input[16] >= 0.081426576) {
                var13 = 0.070924304;
            } else {
                var13 = -0.14765756;
            }
        } else {
            if (input[6] >= 4.403461) {
                var13 = -0.0036169232;
            } else {
                var13 = 0.14434905;
            }
        }
    }
    double var14;
    if (input[17] >= 2.658108) {
        if (input[18] >= 0.48722172) {
            var14 = -0.15327407;
        } else {
            if (input[0] >= 0.96851104) {
                var14 = 0.09842711;
            } else {
                var14 = -0.02722758;
            }
        }
    } else {
        if (input[4] >= 0.42744812) {
            if (input[12] >= -0.17891338) {
                var14 = -0.09161476;
            } else {
                var14 = 0.15452346;
            }
        } else {
            if (input[6] >= 4.403461) {
                var14 = -0.004954664;
            } else {
                var14 = 0.13874671;
            }
        }
    }
    double var15;
    if (input[4] >= 0.00366412) {
        if (input[6] >= 0.17407453) {
            if (input[12] >= -0.14508677) {
                var15 = -0.08396221;
            } else {
                var15 = 0.0017878772;
            }
        } else {
            if (input[20] >= 0.74332696) {
                var15 = -0.14177085;
            } else {
                var15 = 0.10239475;
            }
        }
    } else {
        if (input[5] >= 3.2253942) {
            if (input[2] >= 3.4712245) {
                var15 = -0.12632328;
            } else {
                var15 = 0.120359965;
            }
        } else {
            if (input[8] >= 6.6754036) {
                var15 = 0.31610435;
            } else {
                var15 = 0.10108008;
            }
        }
    }
    double var16;
    if (input[17] >= 2.658108) {
        if (input[19] >= 4.1361074) {
            if (input[13] >= -6.961557) {
                var16 = 0.058172025;
            } else {
                var16 = -0.15311846;
            }
        } else {
            if (input[19] >= 0.5814656) {
                var16 = -0.07304131;
            } else {
                var16 = 0.07372995;
            }
        }
    } else {
        if (input[4] >= 0.42744812) {
            if (input[14] >= 0.83111984) {
                var16 = 0.074580245;
            } else {
                var16 = -0.12848374;
            }
        } else {
            if (input[6] >= 4.403461) {
                var16 = 0.010424035;
            } else {
                var16 = 0.13030453;
            }
        }
    }
    double var17;
    if (input[4] >= -0.041614197) {
        if (input[6] >= 2.9340088) {
            if (input[16] >= 0.025438908) {
                var17 = -0.12590851;
            } else {
                var17 = 0.11838298;
            }
        } else {
            if (input[0] >= 0.8986883) {
                var17 = 0.040755138;
            } else {
                var17 = -0.05263413;
            }
        }
    } else {
        if (input[5] >= 2.5886927) {
            if (input[2] >= 3.4712245) {
                var17 = -0.11063038;
            } else {
                var17 = 0.108142294;
            }
        } else {
            if (input[8] >= 6.6754036) {
                var17 = 0.3275981;
            } else {
                var17 = 0.12065118;
            }
        }
    }
    double var18;
    if (input[18] >= 0.504424) {
        if (input[21] >= 0.09911932) {
            var18 = -0.14956143;
        } else {
            var18 = -0.0118216565;
        }
    } else {
        if (input[16] >= 0.029339775) {
            if (input[16] >= 0.07210425) {
                var18 = 0.028438708;
            } else {
                var18 = -0.073805764;
            }
        } else {
            if (input[4] >= 0.41039038) {
                var18 = -0.07707479;
            } else {
                var18 = 0.16580921;
            }
        }
    }
    double var19;
    if (input[17] >= 2.658108) {
        if (input[18] >= 0.48722172) {
            var19 = -0.14915153;
        } else {
            if (input[0] >= 0.96851104) {
                var19 = 0.09285037;
            } else {
                var19 = -0.021382937;
            }
        }
    } else {
        if (input[16] >= -0.01602224) {
            if (input[6] >= 2.4937782) {
                var19 = 0.0071017114;
            } else {
                var19 = 0.13396977;
            }
        } else {
            if (input[19] >= 1.0573767) {
                var19 = -0.21723182;
            } else {
                var19 = 0.08352398;
            }
        }
    }
    double var20;
    if (input[13] >= -4.917838) {
        if (input[15] >= -5.0163403) {
            if (input[0] >= 0.94152915) {
                var20 = 0.07476291;
            } else {
                var20 = -0.029372526;
            }
        } else {
            if (input[0] >= 0.95382047) {
                var20 = 0.4025185;
            } else {
                var20 = 0.10403011;
            }
        }
    } else {
        if (input[14] >= 0.6129774) {
            if (input[6] >= 2.9149017) {
                var20 = -0.15056862;
            } else {
                var20 = 0.10866437;
            }
        } else {
            if (input[10] >= -5.612462) {
                var20 = -0.01405842;
            } else {
                var20 = -0.15119654;
            }
        }
    }
    double var21;
    if (input[18] >= 0.20553887) {
        if (input[14] >= 0.8503095) {
            if (input[8] >= 4.7850924) {
                var21 = -0.11278574;
            } else {
                var21 = 0.13277148;
            }
        } else {
            if (input[6] >= -0.0974711) {
                var21 = -0.08831878;
            } else {
                var21 = 0.064133026;
            }
        }
    } else {
        if (input[9] >= 6.770442) {
            if (input[14] >= 0.41910797) {
                var21 = 0.20783019;
            } else {
                var21 = -0.031217152;
            }
        } else {
            if (input[1] >= 4.121213) {
                var21 = 0.12954348;
            } else {
                var21 = -0.02135301;
            }
        }
    }
    double var22;
    if (input[10] >= -1.4621795) {
        if (input[6] >= 4.467793) {
            if (input[5] >= 0.5771896) {
                var22 = 0.10168173;
            } else {
                var22 = -0.12856999;
            }
        } else {
            if (input[15] >= -4.088683) {
                var22 = 0.16111368;
            } else {
                var22 = 0.018096576;
            }
        }
    } else {
        if (input[10] >= -1.4902353) {
            var22 = -0.35399675;
        } else {
            if (input[21] >= 0.079049334) {
                var22 = -0.0071707736;
            } else {
                var22 = 0.19594745;
            }
        }
    }
    double var23;
    if (input[18] >= 0.504424) {
        if (input[21] >= 0.11331664) {
            var23 = -0.14359005;
        } else {
            var23 = -0.013875424;
        }
    } else {
        if (input[16] >= 0.027087428) {
            if (input[16] >= 0.07210425) {
                var23 = 0.025370922;
            } else {
                var23 = -0.06568725;
            }
        } else {
            if (input[4] >= 0.41039038) {
                var23 = -0.05850209;
            } else {
                var23 = 0.14652242;
            }
        }
    }
    double var24;
    if (input[4] >= -0.041364476) {
        if (input[0] >= 0.96851104) {
            if (input[14] >= 0.4984386) {
                var24 = 0.10808289;
            } else {
                var24 = -0.119918056;
            }
        } else {
            if (input[5] >= 0.06471053) {
                var24 = -0.041581713;
            } else {
                var24 = 0.058580223;
            }
        }
    } else {
        if (input[5] >= 2.5886927) {
            if (input[2] >= 3.0314255) {
                var24 = -0.10795901;
            } else {
                var24 = 0.080671474;
            }
        } else {
            if (input[11] >= -8.411362) {
                var24 = 0.15559106;
            } else {
                var24 = -0.09714032;
            }
        }
    }
    double var25;
    if (input[19] >= 0.34850305) {
        if (input[19] >= 3.9817283) {
            if (input[13] >= -6.961557) {
                var25 = 0.05269275;
            } else {
                var25 = -0.1433351;
            }
        } else {
            if (input[10] >= -1.4606099) {
                var25 = 0.102186136;
            } else {
                var25 = -0.050629158;
            }
        }
    } else {
        if (input[2] >= 2.7162108) {
            var25 = -0.050622616;
        } else {
            if (input[12] >= -0.034170188) {
                var25 = -0.023311384;
            } else {
                var25 = 0.15319169;
            }
        }
    }
    double var26;
    if (input[18] >= 0.504424) {
        if (input[21] >= 0.12538968) {
            var26 = -0.14141865;
        } else {
            var26 = -0.020364655;
        }
    } else {
        if (input[0] >= 0.94105995) {
            if (input[10] >= -7.492197) {
                var26 = 0.0735742;
            } else {
                var26 = -0.14538537;
            }
        } else {
            if (input[9] >= 7.73228) {
                var26 = 0.10282872;
            } else {
                var26 = -0.03407829;
            }
        }
    }
    double var27;
    if (input[21] >= 0.079049334) {
        if (input[20] >= 0.24616659) {
            if (input[17] >= 2.7142992) {
                var27 = -0.0005837391;
            } else {
                var27 = 0.11084339;
            }
        } else {
            if (input[6] >= 0.014067) {
                var27 = -0.1090599;
            } else {
                var27 = 0.13338801;
            }
        }
    } else {
        if (input[7] >= 0.92892444) {
            var27 = 0.016772829;
        } else {
            var27 = 0.18996964;
        }
    }
    double var28;
    if (input[19] >= 0.34850305) {
        if (input[19] >= 4.471696) {
            if (input[2] >= 10.7230835) {
                var28 = 0.20034024;
            } else {
                var28 = 0.016938277;
            }
        } else {
            if (input[0] >= 0.94110966) {
                var28 = 0.018449629;
            } else {
                var28 = -0.058554616;
            }
        }
    } else {
        if (input[6] >= 1.773486) {
            if (input[16] >= 0.13197744) {
                var28 = 0.06660649;
            } else {
                var28 = -0.056145485;
            }
        } else {
            var28 = 0.139943;
        }
    }
    double var29;
    if (input[4] >= -0.041364476) {
        if (input[0] >= 0.96851104) {
            if (input[13] >= -4.896574) {
                var29 = 0.1253981;
            } else {
                var29 = -0.0259948;
            }
        } else {
            if (input[5] >= 0.06471053) {
                var29 = -0.03475831;
            } else {
                var29 = 0.050876014;
            }
        }
    } else {
        if (input[5] >= 3.245082) {
            if (input[20] >= 0.7043154) {
                var29 = -0.103907965;
            } else {
                var29 = 0.008908851;
            }
        } else {
            if (input[14] >= 0.8536459) {
                var29 = -0.004966676;
            } else {
                var29 = 0.1730621;
            }
        }
    }
    double var30;
    if (input[10] >= -1.4621795) {
        if (input[4] >= 0.50469697) {
            var30 = -0.059933532;
        } else {
            if (input[6] >= 6.5293694) {
                var30 = -0.0034930066;
            } else {
                var30 = 0.14976034;
            }
        }
    } else {
        if (input[10] >= -1.4902353) {
            if (input[10] >= -1.4808607) {
                var30 = -0.054856163;
            } else {
                var30 = -0.3501618;
            }
        } else {
            if (input[16] >= 0.026904946) {
                var30 = -0.0069660647;
            } else {
                var30 = 0.09436799;
            }
        }
    }
    double var31;
    if (input[18] >= 0.504424) {
        if (input[21] >= 0.13541701) {
            var31 = -0.13532041;
        } else {
            var31 = -0.022723561;
        }
    } else {
        if (input[7] >= 0.96974844) {
            if (input[6] >= 1.783555) {
                var31 = -0.04218026;
            } else {
                var31 = 0.19198972;
            }
        } else {
            if (input[16] >= 0.029339775) {
                var31 = -0.0068137087;
            } else {
                var31 = 0.090197414;
            }
        }
    }
    double var32;
    if (input[21] >= 0.079049334) {
        if (input[12] >= -0.13981295) {
            if (input[13] >= -2.5664015) {
                var32 = 0.03195906;
            } else {
                var32 = -0.085180864;
            }
        } else {
            if (input[21] >= 0.511145) {
                var32 = -0.034441452;
            } else {
                var32 = 0.06798599;
            }
        }
    } else {
        if (input[7] >= 0.90507495) {
            if (input[1] >= -0.44292003) {
                var32 = -0.042878322;
            } else {
                var32 = 0.105340466;
            }
        } else {
            var32 = 0.18550576;
        }
    }
    double var33;
    if (input[2] >= 14.2664995) {
        if (input[5] >= 5.241551) {
            var33 = -0.08969041;
        } else {
            if (input[18] >= 0.15676025) {
                var33 = 0.29329857;
            } else {
                var33 = 0.05967134;
            }
        }
    } else {
        if (input[6] >= 2.9340088) {
            if (input[16] >= 0.025438908) {
                var33 = -0.10540614;
            } else {
                var33 = 0.06817006;
            }
        } else {
            if (input[0] >= 0.8986491) {
                var33 = 0.03361228;
            } else {
                var33 = -0.036029838;
            }
        }
    }
    double var34;
    if (input[17] >= 2.658108) {
        if (input[20] >= 0.38601086) {
            if (input[18] >= 0.23204218) {
                var34 = -0.05668495;
            } else {
                var34 = 0.052663144;
            }
        } else {
            if (input[20] >= 0.37593007) {
                var34 = -0.25512543;
            } else {
                var34 = -0.021008927;
            }
        }
    } else {
        if (input[0] >= 0.45566565) {
            if (input[9] >= 1.3552021) {
                var34 = 0.12137411;
            } else {
                var34 = -0.04400033;
            }
        } else {
            if (input[17] >= 1.8255789) {
                var34 = -0.2808694;
            } else {
                var34 = 0.10671582;
            }
        }
    }
    double var35;
    if (input[18] >= 0.504424) {
        if (input[11] >= -7.6259217) {
            var35 = -0.12869588;
        } else {
            var35 = -0.033797868;
        }
    } else {
        if (input[7] >= 0.96974844) {
            if (input[3] >= -7.804209) {
                var35 = 0.14814952;
            } else {
                var35 = -0.08570635;
            }
        } else {
            if (input[11] >= -2.1318078) {
                var35 = 0.06365928;
            } else {
                var35 = -0.0097740535;
            }
        }
    }
    double var36;
    if (input[21] >= 0.079049334) {
        if (input[20] >= 0.24616659) {
            if (input[12] >= -0.06917463) {
                var36 = 0.10902966;
            } else {
                var36 = 0.0002677935;
            }
        } else {
            if (input[13] >= -1.5693896) {
                var36 = 0.09346665;
            } else {
                var36 = -0.104773104;
            }
        }
    } else {
        if (input[7] >= 0.90507495) {
            var36 = 0.048305728;
        } else {
            var36 = 0.16481736;
        }
    }
    double var37;
    if (input[13] >= -6.961557) {
        if (input[0] >= 0.95079786) {
            if (input[1] >= 9.446657) {
                var37 = 0.18841992;
            } else {
                var37 = 0.020774027;
            }
        } else {
            if (input[3] >= -10.399281) {
                var37 = -0.016779348;
            } else {
                var37 = 0.23838778;
            }
        }
    } else {
        if (input[19] >= 3.334855) {
            var37 = -0.13504387;
        } else {
            if (input[19] >= 3.295474) {
                var37 = 0.13421191;
            } else {
                var37 = -0.08243802;
            }
        }
    }
    double var38;
    if (input[19] >= 0.34850305) {
        if (input[19] >= 3.9817283) {
            if (input[9] >= 3.2753801) {
                var38 = -0.0020870832;
            } else {
                var38 = 0.10890536;
            }
        } else {
            if (input[12] >= -0.14486726) {
                var38 = -0.063674614;
            } else {
                var38 = 0.01180235;
            }
        }
    } else {
        if (input[6] >= 1.773486) {
            var38 = 0.009344331;
        } else {
            var38 = 0.12626962;
        }
    }
    double var39;
    if (input[21] >= 0.0856341) {
        if (input[12] >= -0.13973956) {
            if (input[13] >= -2.5664015) {
                var39 = 0.026582083;
            } else {
                var39 = -0.075800635;
            }
        } else {
            if (input[21] >= 0.511145) {
                var39 = -0.03541626;
            } else {
                var39 = 0.05905545;
            }
        }
    } else {
        if (input[7] >= 0.9273683) {
            var39 = 0.022487458;
        } else {
            var39 = 0.14504018;
        }
    }
    double var40;
    if (input[17] >= 2.658108) {
        if (input[20] >= 0.38601086) {
            if (input[14] >= 0.603329) {
                var40 = 0.067167625;
            } else {
                var40 = -0.025407368;
            }
        } else {
            if (input[20] >= 0.37593007) {
                var40 = -0.20236866;
            } else {
                var40 = -0.015906371;
            }
        }
    } else {
        if (input[0] >= 0.45566565) {
            if (input[8] >= 1.2153156) {
                var40 = 0.115993194;
            } else {
                var40 = -0.042831153;
            }
        } else {
            if (input[8] >= 1.6293254) {
                var40 = -0.20977964;
            } else {
                var40 = 0.09269746;
            }
        }
    }
    double var41;
    if (input[18] >= 0.504424) {
        var41 = -0.10968655;
    } else {
        if (input[21] >= 1.1141019) {
            if (input[2] >= 0.9487784) {
                var41 = -0.12323081;
            } else {
                var41 = 0.013321338;
            }
        } else {
            if (input[21] >= 0.82475126) {
                var41 = 0.10760792;
            } else {
                var41 = 0.0033174688;
            }
        }
    }
    double var42;
    if (input[6] >= 1.8130293) {
        if (input[4] >= 0.11457057) {
            if (input[4] >= 0.17703226) {
                var42 = -0.030778894;
            } else {
                var42 = 0.119850025;
            }
        } else {
            if (input[4] >= -0.042459328) {
                var42 = -0.15493089;
            } else {
                var42 = 0.01226196;
            }
        }
    } else {
        if (input[21] >= 0.2128058) {
            if (input[7] >= 0.96302974) {
                var42 = 0.09577698;
            } else {
                var42 = -0.0070481407;
            }
        } else {
            if (input[18] >= 0.203579) {
                var42 = 0.004839695;
            } else {
                var42 = 0.14318341;
            }
        }
    }
    double var43;
    if (input[2] >= 14.2664995) {
        if (input[1] >= 0.46544075) {
            if (input[5] >= 1.038419) {
                var43 = -0.042339128;
            } else {
                var43 = 0.10843713;
            }
        } else {
            var43 = 0.18157455;
        }
    } else {
        if (input[6] >= 2.9340088) {
            if (input[1] >= -0.6674031) {
                var43 = -0.08655492;
            } else {
                var43 = 0.09196067;
            }
        } else {
            if (input[6] >= 2.8882298) {
                var43 = 0.14014938;
            } else {
                var43 = 0.0013421617;
            }
        }
    }
    double var44;
    if (input[19] >= 0.34850305) {
        if (input[19] >= 5.562297) {
            if (input[15] >= -6.08043) {
                var44 = 0.06514462;
            } else {
                var44 = -0.09635269;
            }
        } else {
            if (input[0] >= 0.94110966) {
                var44 = 0.020022072;
            } else {
                var44 = -0.042660687;
            }
        }
    } else {
        if (input[6] >= 1.773486) {
            var44 = 0.011895056;
        } else {
            var44 = 0.1167302;
        }
    }
    double var45;
    if (input[21] >= 0.0856341) {
        if (input[20] >= 0.24616659) {
            if (input[14] >= 0.84137404) {
                var45 = 0.09039999;
            } else {
                var45 = -0.0030145792;
            }
        } else {
            if (input[13] >= -1.5693896) {
                var45 = 0.08639853;
            } else {
                var45 = -0.092078574;
            }
        }
    } else {
        if (input[7] >= 0.90507495) {
            var45 = 0.040083975;
        } else {
            var45 = 0.1384546;
        }
    }
    double var46;
    if (input[17] >= 2.658108) {
        if (input[15] >= -5.1035023) {
            if (input[8] >= 4.355625) {
                var46 = -0.04954839;
            } else {
                var46 = 0.008594375;
            }
        } else {
            if (input[18] >= 0.33275348) {
                var46 = -0.09535242;
            } else {
                var46 = 0.054487597;
            }
        }
    } else {
        if (input[0] >= 0.45566565) {
            if (input[1] >= 3.1762605) {
                var46 = -0.054841444;
            } else {
                var46 = 0.10577929;
            }
        } else {
            if (input[17] >= 1.8255789) {
                var46 = -0.1589578;
            } else {
                var46 = 0.08329144;
            }
        }
    }
    double var47;
    if (input[18] >= 0.48722172) {
        if (input[17] >= 2.5818949) {
            var47 = -0.12007438;
        } else {
            var47 = 0.0038839949;
        }
    } else {
        if (input[7] >= 0.96974844) {
            if (input[6] >= 1.783555) {
                var47 = -0.035454556;
            } else {
                var47 = 0.14387986;
            }
        } else {
            if (input[16] >= 0.029339775) {
                var47 = -0.0055579925;
            } else {
                var47 = 0.07418997;
            }
        }
    }
    double var48;
    if (input[21] >= 0.0856341) {
        if (input[12] >= -0.13973956) {
            if (input[19] >= 2.8168452) {
                var48 = 0.01978926;
            } else {
                var48 = -0.069153726;
            }
        } else {
            if (input[21] >= 0.511145) {
                var48 = -0.027617367;
            } else {
                var48 = 0.04634621;
            }
        }
    } else {
        if (input[6] >= 1.6801629) {
            var48 = 0.027152596;
        } else {
            var48 = 0.1262278;
        }
    }
    double var49;
    if (input[17] >= 2.658108) {
        if (input[6] >= 2.9340088) {
            if (input[19] >= 5.8279724) {
                var49 = 0.04625221;
            } else {
                var49 = -0.08529973;
            }
        } else {
            if (input[6] >= 2.717462) {
                var49 = 0.10938751;
            } else {
                var49 = -0.004050022;
            }
        }
    } else {
        if (input[16] >= -0.012630513) {
            if (input[7] >= 0.7335781) {
                var49 = 0.08957176;
            } else {
                var49 = -0.0457146;
            }
        } else {
            var49 = -0.10582006;
        }
    }
    double var50;
    if (input[11] >= -2.1010673) {
        if (input[18] >= 0.20290026) {
            if (input[3] >= -1.799671) {
                var50 = -0.11083285;
            } else {
                var50 = 0.0713704;
            }
        } else {
            if (input[6] >= 6.503931) {
                var50 = -0.030491615;
            } else {
                var50 = 0.1280891;
            }
        }
    } else {
        if (input[11] >= -3.0003684) {
            if (input[12] >= -0.15506983) {
                var50 = -0.11971418;
            } else {
                var50 = 0.11548894;
            }
        } else {
            if (input[11] >= -4.0844374) {
                var50 = 0.07568574;
            } else {
                var50 = -0.006547457;
            }
        }
    }
    double var51;
    if (input[1] >= 11.506848) {
        if (input[5] >= 31.633423) {
            if (input[20] >= 1.6817427) {
                var51 = 0.40800002;
            } else {
                var51 = -0.19211824;
            }
        } else {
            if (input[8] >= 4.0339) {
                var51 = 0.5752737;
            } else {
                var51 = -0.041221373;
            }
        }
    } else {
        if (input[12] >= -0.047804326) {
            if (input[3] >= -2.893255) {
                var51 = -0.16208531;
            } else {
                var51 = 0.49519652;
            }
        } else {
            if (input[9] >= 6.287109) {
                var51 = 0.041180246;
            } else {
                var51 = -0.16230018;
            }
        }
    }
    double var52;
    if (input[1] >= 6.847241) {
        if (input[5] >= 16.181442) {
            if (input[1] >= 27.182434) {
                var52 = 0.27022135;
            } else {
                var52 = -0.16947252;
            }
        } else {
            if (input[9] >= 4.2610583) {
                var52 = 0.35043395;
            } else {
                var52 = -0.042197127;
            }
        }
    } else {
        if (input[21] >= 0.14245701) {
            if (input[2] >= 3.8116355) {
                var52 = -0.030229935;
            } else {
                var52 = -0.16551219;
            }
        } else {
            if (input[10] >= -2.9927454) {
                var52 = -0.123764575;
            } else {
                var52 = 0.31876245;
            }
        }
    }
    double var53;
    if (input[1] >= 7.4985304) {
        if (input[5] >= 18.737202) {
            if (input[1] >= 39.894917) {
                var53 = 0.22336544;
            } else {
                var53 = -0.16130066;
            }
        } else {
            if (input[0] >= 0.9847729) {
                var53 = -0.17635737;
            } else {
                var53 = 0.26154816;
            }
        }
    } else {
        if (input[12] >= -0.058231127) {
            if (input[3] >= -3.6213107) {
                var53 = -0.11044165;
            } else {
                var53 = 0.29129425;
            }
        } else {
            if (input[9] >= 6.820733) {
                var53 = 0.019020304;
            } else {
                var53 = -0.14086004;
            }
        }
    }
    double var54;
    if (input[1] >= 2.6174192) {
        if (input[0] >= 0.9819002) {
            if (input[17] >= 8.425506) {
                var54 = 0.001799886;
            } else {
                var54 = -0.1753655;
            }
        } else {
            if (input[5] >= 14.032497) {
                var54 = -0.009924284;
            } else {
                var54 = 0.20232275;
            }
        }
    } else {
        if (input[12] >= -0.033356715) {
            if (input[11] >= -1.8154855) {
                var54 = -0.1615232;
            } else {
                var54 = 0.23707381;
            }
        } else {
            if (input[10] >= -7.326011) {
                var54 = -0.14665057;
            } else {
                var54 = 0.020629127;
            }
        }
    }
    double var55;
    if (input[1] >= 2.0301552) {
        if (input[0] >= 0.9819002) {
            if (input[17] >= 13.473366) {
                var55 = 0.0509595;
            } else {
                var55 = -0.15570097;
            }
        } else {
            if (input[11] >= -3.5122812) {
                var55 = -0.10147922;
            } else {
                var55 = 0.14849035;
            }
        }
    } else {
        if (input[12] >= -0.056122176) {
            if (input[9] >= 3.3515654) {
                var55 = 0.23575863;
            } else {
                var55 = -0.113531314;
            }
        } else {
            if (input[8] >= 13.6547) {
                var55 = 0.3676013;
            } else {
                var55 = -0.14096108;
            }
        }
    }
    double var56;
    if (input[1] >= 11.506848) {
        if (input[5] >= 46.706554) {
            var56 = -0.1791544;
        } else {
            if (input[11] >= -2.746381) {
                var56 = -0.1309153;
            } else {
                var56 = 0.18228266;
            }
        }
    } else {
        if (input[16] >= 0.081391454) {
            if (input[9] >= 6.611824) {
                var56 = 0.017979367;
            } else {
                var56 = -0.16345835;
            }
        } else {
            if (input[2] >= 2.380155) {
                var56 = 0.1524855;
            } else {
                var56 = -0.077481754;
            }
        }
    }
    double var57;
    if (input[1] >= 1.8697934) {
        if (input[12] >= -0.14339444) {
            if (input[3] >= -3.331208) {
                var57 = -0.08871571;
            } else {
                var57 = 0.18932621;
            }
        } else {
            if (input[20] >= 0.795938) {
                var57 = 0.13793491;
            } else {
                var57 = -0.097765304;
            }
        }
    } else {
        if (input[12] >= -0.033356715) {
            if (input[17] >= 2.408465) {
                var57 = 0.18336642;
            } else {
                var57 = -0.16200398;
            }
        } else {
            if (input[10] >= -7.326011) {
                var57 = -0.13924062;
            } else {
                var57 = 0.02251517;
            }
        }
    }
    double var58;
    if (input[2] >= 2.8438802) {
        if (input[13] >= -7.3937645) {
            if (input[8] >= 3.2402468) {
                var58 = 0.12705225;
            } else {
                var58 = -0.13544965;
            }
        } else {
            if (input[17] >= 13.548679) {
                var58 = 0.1411087;
            } else {
                var58 = -0.11361065;
            }
        }
    } else {
        if (input[21] >= 0.17451605) {
            if (input[17] >= 6.260889) {
                var58 = -0.051949553;
            } else {
                var58 = -0.15400349;
            }
        } else {
            if (input[18] >= 0.42427576) {
                var58 = 0.18224385;
            } else {
                var58 = -0.08137535;
            }
        }
    }
    double var59;
    if (input[1] >= 0.90798056) {
        if (input[2] >= 2.2075877) {
            if (input[12] >= -0.14339444) {
                var59 = 0.16317749;
            } else {
                var59 = 0.026569344;
            }
        } else {
            if (input[21] >= 0.17451605) {
                var59 = -0.11516325;
            } else {
                var59 = 0.13172275;
            }
        }
    } else {
        if (input[21] >= 0.13466649) {
            if (input[19] >= 16.629284) {
                var59 = 0.016307011;
            } else {
                var59 = -0.14155719;
            }
        } else {
            if (input[20] >= 0.18682274) {
                var59 = 0.14901602;
            } else {
                var59 = -0.07181563;
            }
        }
    }
    double var60;
    if (input[2] >= 2.8438802) {
        if (input[13] >= -7.8023963) {
            if (input[1] >= 0.3138007) {
                var60 = 0.099968396;
            } else {
                var60 = -0.107314356;
            }
        } else {
            if (input[8] >= 9.970979) {
                var60 = 0.06337751;
            } else {
                var60 = -0.16144374;
            }
        }
    } else {
        if (input[16] >= 0.05110687) {
            if (input[17] >= 6.495552) {
                var60 = -0.03440213;
            } else {
                var60 = -0.15093303;
            }
        } else {
            if (input[18] >= 0.2002078) {
                var60 = 0.11973529;
            } else {
                var60 = -0.12465615;
            }
        }
    }
    double var61;
    if (input[1] >= 13.197463) {
        if (input[5] >= 42.474335) {
            if (input[16] >= 0.19680944) {
                var61 = -0.17623064;
            } else {
                var61 = -0.025975922;
            }
        } else {
            if (input[11] >= -2.739884) {
                var61 = -0.08671919;
            } else {
                var61 = 0.14270134;
            }
        }
    } else {
        if (input[12] >= -0.109710105) {
            if (input[10] >= -3.5097437) {
                var61 = -0.086047605;
            } else {
                var61 = 0.14174958;
            }
        } else {
            if (input[8] >= 6.9325085) {
                var61 = 0.0071364045;
            } else {
                var61 = -0.14905365;
            }
        }
    }
    double var62;
    if (input[2] >= 3.7793622) {
        if (input[3] >= -10.323784) {
            if (input[9] >= 6.027222) {
                var62 = 0.116782054;
            } else {
                var62 = -0.0066878595;
            }
        } else {
            if (input[12] >= -0.19745609) {
                var62 = 0.105236806;
            } else {
                var62 = -0.15805009;
            }
        }
    } else {
        if (input[16] >= 0.081391454) {
            if (input[19] >= 17.632957) {
                var62 = 0.058672827;
            } else {
                var62 = -0.13990039;
            }
        } else {
            if (input[1] >= 4.7479796) {
                var62 = 0.10308423;
            } else {
                var62 = -0.040080898;
            }
        }
    }
    double var63;
    if (input[1] >= 0.90798056) {
        if (input[12] >= -0.11104912) {
            if (input[0] >= 0.964153) {
                var63 = -0.08778282;
            } else {
                var63 = 0.14680144;
            }
        } else {
            if (input[8] >= 7.3774595) {
                var63 = 0.068409055;
            } else {
                var63 = -0.11324281;
            }
        }
    } else {
        if (input[21] >= 0.15963766) {
            if (input[19] >= 6.697221) {
                var63 = -0.016874326;
            } else {
                var63 = -0.14945965;
            }
        } else {
            if (input[1] >= -0.023107719) {
                var63 = 0.10395735;
            } else {
                var63 = -0.14408347;
            }
        }
    }
    double var64;
    if (input[2] >= 2.8438802) {
        if (input[16] >= 0.081391454) {
            if (input[8] >= 7.456605) {
                var64 = 0.058612;
            } else {
                var64 = -0.09708509;
            }
        } else {
            if (input[8] >= 2.9449635) {
                var64 = 0.1323078;
            } else {
                var64 = -0.14177804;
            }
        }
    } else {
        if (input[21] >= 0.19530635) {
            if (input[11] >= -4.818674) {
                var64 = -0.15952562;
            } else {
                var64 = -0.05911528;
            }
        } else {
            if (input[13] >= -1.8943897) {
                var64 = -0.11922997;
            } else {
                var64 = 0.10226945;
            }
        }
    }
    double var65;
    if (input[1] >= 1.8009739) {
        if (input[5] >= 10.673128) {
            if (input[1] >= 18.9874) {
                var65 = 0.05789702;
            } else {
                var65 = -0.14503925;
            }
        } else {
            if (input[7] >= 0.8250197) {
                var65 = 0.08740241;
            } else {
                var65 = -0.10082457;
            }
        }
    } else {
        if (input[12] >= -0.10167) {
            if (input[3] >= -4.74405) {
                var65 = -0.057647184;
            } else {
                var65 = 0.16674355;
            }
        } else {
            if (input[19] >= 6.693096) {
                var65 = 0.0064960513;
            } else {
                var65 = -0.14319898;
            }
        }
    }
    double var66;
    if (input[2] >= 3.7793622) {
        if (input[3] >= -10.323784) {
            if (input[8] >= 2.9460762) {
                var66 = 0.07080401;
            } else {
                var66 = -0.14606819;
            }
        } else {
            if (input[12] >= -0.19745609) {
                var66 = 0.08819652;
            } else {
                var66 = -0.14691626;
            }
        }
    } else {
        if (input[16] >= 0.047235996) {
            if (input[9] >= 4.643595) {
                var66 = -0.034561206;
            } else {
                var66 = -0.1450741;
            }
        } else {
            if (input[0] >= 0.9450203) {
                var66 = -0.12228767;
            } else {
                var66 = 0.09853253;
            }
        }
    }
    double var67;
    if (input[7] >= 0.8169078) {
        if (input[4] >= 0.3407354) {
            if (input[21] >= 0.1904101) {
                var67 = -0.08976851;
            } else {
                var67 = 0.084912725;
            }
        } else {
            if (input[8] >= 3.082304) {
                var67 = 0.07470483;
            } else {
                var67 = -0.12623794;
            }
        }
    } else {
        if (input[12] >= -0.47363108) {
            if (input[1] >= 25.199026) {
                var67 = -0.037202206;
            } else {
                var67 = -0.17153859;
            }
        } else {
            if (input[13] >= -7.061755) {
                var67 = 0.1025291;
            } else {
                var67 = -0.13107046;
            }
        }
    }
    double var68;
    if (input[8] >= 6.7056065) {
        if (input[1] >= 2.6015465) {
            if (input[5] >= 12.273613) {
                var68 = -0.021097444;
            } else {
                var68 = 0.1174444;
            }
        } else {
            if (input[9] >= 8.011408) {
                var68 = -0.110233225;
            } else {
                var68 = 0.098519966;
            }
        }
    } else {
        if (input[12] >= -0.11104912) {
            if (input[0] >= 0.9408008) {
                var68 = -0.09164647;
            } else {
                var68 = 0.08484401;
            }
        } else {
            if (input[16] >= 0.034641586) {
                var68 = -0.1316447;
            } else {
                var68 = 0.03214672;
            }
        }
    }
    double var69;
    if (input[2] >= 2.8438802) {
        if (input[15] >= -2.6503482) {
            if (input[7] >= 0.89380294) {
                var69 = -0.1795568;
            } else {
                var69 = 0.002004139;
            }
        } else {
            if (input[12] >= -0.23931825) {
                var69 = 0.086071596;
            } else {
                var69 = -0.020033225;
            }
        }
    } else {
        if (input[16] >= 0.06361319) {
            if (input[19] >= 17.768387) {
                var69 = 0.039650522;
            } else {
                var69 = -0.12712191;
            }
        } else {
            if (input[5] >= 0.71091473) {
                var69 = -0.058428217;
            } else {
                var69 = 0.075377755;
            }
        }
    }
    double var70;
    if (input[20] >= 0.83201313) {
        if (input[8] >= 7.4410696) {
            if (input[16] >= 0.631258) {
                var70 = -0.10650941;
            } else {
                var70 = 0.15830293;
            }
        } else {
            if (input[12] >= -0.19929212) {
                var70 = -0.494863;
            } else {
                var70 = -0.03940712;
            }
        }
    } else {
        if (input[12] >= -0.1392354) {
            if (input[10] >= -5.405018) {
                var70 = -0.031942587;
            } else {
                var70 = 0.12276246;
            }
        } else {
            if (input[21] >= 0.4913249) {
                var70 = -0.1578309;
            } else {
                var70 = -0.04874404;
            }
        }
    }
    double var71;
    if (input[7] >= 0.8169078) {
        if (input[1] >= 0.43856218) {
            if (input[0] >= 0.9468882) {
                var71 = -0.021039078;
            } else {
                var71 = 0.08176732;
            }
        } else {
            if (input[5] >= -0.805307) {
                var71 = -0.087633915;
            } else {
                var71 = 0.09494277;
            }
        }
    } else {
        if (input[12] >= -0.47363108) {
            if (input[5] >= 12.53603) {
                var71 = -0.040825855;
            } else {
                var71 = -0.17306176;
            }
        } else {
            if (input[13] >= -7.061755) {
                var71 = 0.092059135;
            } else {
                var71 = -0.11927772;
            }
        }
    }
    double var72;
    if (input[8] >= 6.7056065) {
        if (input[1] >= 2.6015465) {
            if (input[3] >= -10.5596075) {
                var72 = 0.089208074;
            } else {
                var72 = -0.06232821;
            }
        } else {
            if (input[9] >= 8.011408) {
                var72 = -0.09425405;
            } else {
                var72 = 0.08597374;
            }
        }
    } else {
        if (input[16] >= 0.083473444) {
            if (input[21] >= 0.33816522) {
                var72 = -0.1538266;
            } else {
                var72 = -0.03688578;
            }
        } else {
            if (input[19] >= 5.6798267) {
                var72 = -0.12600203;
            } else {
                var72 = 0.047055833;
            }
        }
    }
    double var73;
    if (input[7] >= 0.79567075) {
        if (input[4] >= 0.3407354) {
            if (input[21] >= 0.19530635) {
                var73 = -0.07785485;
            } else {
                var73 = 0.062008176;
            }
        } else {
            if (input[8] >= 3.082304) {
                var73 = 0.052445307;
            } else {
                var73 = -0.1127671;
            }
        }
    } else {
        if (input[1] >= 7.8559437) {
            if (input[11] >= -8.574858) {
                var73 = 0.095733926;
            } else {
                var73 = -0.099373125;
            }
        } else {
            if (input[4] >= -0.11156376) {
                var73 = -0.18311346;
            } else {
                var73 = -0.043679807;
            }
        }
    }
    double var74;
    if (input[17] >= 12.027323) {
        if (input[7] >= 0.9688852) {
            if (input[12] >= -0.20328423) {
                var74 = 0.09453659;
            } else {
                var74 = -0.1769283;
            }
        } else {
            if (input[14] >= -0.5177614) {
                var74 = 0.17310295;
            } else {
                var74 = -0.0066050137;
            }
        }
    } else {
        if (input[12] >= -0.13959244) {
            if (input[10] >= -5.371014) {
                var74 = -0.028217738;
            } else {
                var74 = 0.11070124;
            }
        } else {
            if (input[8] >= 7.456605) {
                var74 = 0.002272764;
            } else {
                var74 = -0.11484174;
            }
        }
    }
    double var75;
    if (input[7] >= 0.8169078) {
        if (input[4] >= 0.33523977) {
            if (input[16] >= 0.050295204) {
                var75 = -0.06979983;
            } else {
                var75 = 0.062757246;
            }
        } else {
            if (input[1] >= 0.31680852) {
                var75 = 0.05905421;
            } else {
                var75 = -0.06425946;
            }
        }
    } else {
        if (input[12] >= -0.47363108) {
            if (input[5] >= 12.53603) {
                var75 = -0.019236585;
            } else {
                var75 = -0.16138929;
            }
        } else {
            if (input[13] >= -7.061755) {
                var75 = 0.07952051;
            } else {
                var75 = -0.097967364;
            }
        }
    }
    double var76;
    if (input[17] >= 6.910531) {
        if (input[20] >= 0.8117176) {
            if (input[13] >= -3.7333035) {
                var76 = -0.15704608;
            } else {
                var76 = 0.12076971;
            }
        } else {
            if (input[12] >= -0.23346443) {
                var76 = 0.06366366;
            } else {
                var76 = -0.15457287;
            }
        }
    } else {
        if (input[0] >= 0.9454875) {
            if (input[12] >= -0.041712098) {
                var76 = 0.041536175;
            } else {
                var76 = -0.13716348;
            }
        } else {
            if (input[7] >= 0.80889696) {
                var76 = 0.033857636;
            } else {
                var76 = -0.1570831;
            }
        }
    }
    double var77;
    if (input[1] >= 0.8521633) {
        if (input[5] >= 3.544973) {
            if (input[17] >= 8.755882) {
                var77 = 0.06522501;
            } else {
                var77 = -0.09343009;
            }
        } else {
            if (input[7] >= 0.79978204) {
                var77 = 0.070619114;
            } else {
                var77 = -0.14167073;
            }
        }
    } else {
        if (input[5] >= 0.41952807) {
            if (input[12] >= -0.04404354) {
                var77 = 0.014952267;
            } else {
                var77 = -0.14942567;
            }
        } else {
            if (input[16] >= 0.20514144) {
                var77 = -0.14416362;
            } else {
                var77 = 0.02389053;
            }
        }
    }
    double var78;
    if (input[2] >= 2.2075877) {
        if (input[16] >= 0.20532885) {
            if (input[8] >= 7.936617) {
                var78 = 0.032270785;
            } else {
                var78 = -0.18194562;
            }
        } else {
            if (input[20] >= 0.3844202) {
                var78 = 0.117128424;
            } else {
                var78 = -0.009336687;
            }
        }
    } else {
        if (input[21] >= 0.15959659) {
            if (input[11] >= -5.391281) {
                var78 = -0.13395607;
            } else {
                var78 = 0.015941491;
            }
        } else {
            if (input[20] >= 0.16731596) {
                var78 = 0.1267485;
            } else {
                var78 = -0.108214386;
            }
        }
    }
    double var79;
    if (input[20] >= 0.83201313) {
        if (input[8] >= 7.4410696) {
            if (input[16] >= 0.6008526) {
                var79 = -0.07334294;
            } else {
                var79 = 0.14591707;
            }
        } else {
            if (input[4] >= 0.14232618) {
                var79 = -0.19099121;
            } else {
                var79 = 0.088644795;
            }
        }
    } else {
        if (input[12] >= -0.23891124) {
            if (input[10] >= -7.326011) {
                var79 = -0.019371126;
            } else {
                var79 = 0.10238191;
            }
        } else {
            if (input[16] >= 0.058557656) {
                var79 = -0.15095314;
            } else {
                var79 = 0.09629294;
            }
        }
    }
    double var80;
    if (input[2] >= 0.9071852) {
        if (input[12] >= -0.13959244) {
            if (input[10] >= -5.371014) {
                var80 = -0.0063272296;
            } else {
                var80 = 0.114499636;
            }
        } else {
            if (input[14] >= 0.4928777) {
                var80 = -0.0702998;
            } else {
                var80 = 0.044773795;
            }
        }
    } else {
        if (input[21] >= 0.14755434) {
            if (input[1] >= -0.1703833) {
                var80 = -0.14146313;
            } else {
                var80 = 0.039390504;
            }
        } else {
            if (input[20] >= 0.16731596) {
                var80 = 0.11405198;
            } else {
                var80 = -0.08873233;
            }
        }
    }
    double var81;
    if (input[7] >= 0.8169078) {
        if (input[0] >= 0.9468882) {
            if (input[9] >= 5.9152308) {
                var81 = 0.0213735;
            } else {
                var81 = -0.13164304;
            }
        } else {
            if (input[19] >= 2.6017766) {
                var81 = -0.013995457;
            } else {
                var81 = 0.07836084;
            }
        }
    } else {
        if (input[1] >= 7.119488) {
            if (input[2] >= 3.6808267) {
                var81 = 0.06499652;
            } else {
                var81 = -0.1199136;
            }
        } else {
            if (input[7] >= 0.80865103) {
                var81 = -0.017675154;
            } else {
                var81 = -0.1532783;
            }
        }
    }
    double var82;
    if (input[15] >= -1.8341594) {
        if (input[12] >= -0.033202082) {
            var82 = -0.033823617;
        } else {
            var82 = -0.13314144;
        }
    } else {
        if (input[16] >= 0.20844491) {
            if (input[17] >= 8.8063545) {
                var82 = 0.0380797;
            } else {
                var82 = -0.14560765;
            }
        } else {
            if (input[20] >= 0.633121) {
                var82 = 0.11887432;
            } else {
                var82 = 0.0021925059;
            }
        }
    }
    double var83;
    if (input[2] >= 4.739748) {
        if (input[16] >= 0.20532885) {
            if (input[8] >= 7.456605) {
                var83 = 0.02481486;
            } else {
                var83 = -0.20613503;
            }
        } else {
            if (input[6] >= 6.348761) {
                var83 = -0.07434858;
            } else {
                var83 = 0.09449394;
            }
        }
    } else {
        if (input[5] >= 0.6748922) {
            if (input[4] >= 0.07142698) {
                var83 = -0.079509154;
            } else {
                var83 = 0.04771411;
            }
        } else {
            if (input[1] >= 1.19596) {
                var83 = 0.12423481;
            } else {
                var83 = -0.022184381;
            }
        }
    }
    double var84;
    if (input[7] >= 0.8169078) {
        if (input[5] >= 1.7542722) {
            if (input[1] >= 18.833286) {
                var84 = 0.06205421;
            } else {
                var84 = -0.05662839;
            }
        } else {
            if (input[1] >= 0.43856218) {
                var84 = 0.06856658;
            } else {
                var84 = -0.030334378;
            }
        }
    } else {
        if (input[1] >= 50.94309) {
            var84 = 0.08531135;
        } else {
            if (input[15] >= -9.103973) {
                var84 = -0.122702554;
            } else {
                var84 = 0.009288065;
            }
        }
    }
    double var85;
    if (input[10] >= -7.326011) {
        if (input[7] >= 0.95852685) {
            if (input[12] >= -0.02462891) {
                var85 = 0.07550551;
            } else {
                var85 = -0.14327264;
            }
        } else {
            if (input[16] >= 0.1620385) {
                var85 = -0.08189618;
            } else {
                var85 = 0.02466367;
            }
        }
    } else {
        if (input[3] >= -7.9707565) {
            if (input[17] >= 5.6603284) {
                var85 = 0.16851719;
            } else {
                var85 = -0.029712113;
            }
        } else {
            if (input[12] >= -0.27673727) {
                var85 = 0.045049574;
            } else {
                var85 = -0.105916604;
            }
        }
    }
    double var86;
    if (input[20] >= 0.7479478) {
        if (input[7] >= 0.91890794) {
            if (input[0] >= 0.97992086) {
                var86 = -0.014589106;
            } else {
                var86 = 0.1511069;
            }
        } else {
            if (input[4] >= 0.24386464) {
                var86 = -0.1706411;
            } else {
                var86 = 0.06814133;
            }
        }
    } else {
        if (input[21] >= 0.47000468) {
            if (input[1] >= 14.848114) {
                var86 = -0.022683278;
            } else {
                var86 = -0.14715055;
            }
        } else {
            if (input[20] >= 0.30727583) {
                var86 = 0.039233007;
            } else {
                var86 = -0.038083956;
            }
        }
    }
    double var87;
    if (input[0] >= 0.9468882) {
        if (input[13] >= -4.9845867) {
            if (input[5] >= 1.8537388) {
                var87 = -0.17348658;
            } else {
                var87 = -0.018195288;
            }
        } else {
            if (input[3] >= -3.995171) {
                var87 = -0.14658038;
            } else {
                var87 = 0.04823397;
            }
        }
    } else {
        if (input[1] >= 0.8519716) {
            if (input[19] >= 6.555266) {
                var87 = -0.06484328;
            } else {
                var87 = 0.08368981;
            }
        } else {
            if (input[14] >= 0.8442973) {
                var87 = -0.10440005;
            } else {
                var87 = 0.016584203;
            }
        }
    }
    double var88;
    if (input[2] >= 3.7793622) {
        if (input[16] >= 0.20721331) {
            if (input[8] >= 7.936617) {
                var88 = 0.031044131;
            } else {
                var88 = -0.15822947;
            }
        } else {
            if (input[7] >= 0.8166319) {
                var88 = 0.07031352;
            } else {
                var88 = -0.108458586;
            }
        }
    } else {
        if (input[16] >= 0.047235996) {
            if (input[9] >= 4.643595) {
                var88 = -0.012910929;
            } else {
                var88 = -0.12424537;
            }
        } else {
            if (input[0] >= 0.8590337) {
                var88 = -0.065806024;
            } else {
                var88 = 0.11989083;
            }
        }
    }
    double var89;
    if (input[20] >= 0.7479478) {
        if (input[7] >= 0.91890794) {
            if (input[0] >= 0.97896326) {
                var89 = -0.0055624023;
            } else {
                var89 = 0.14535393;
            }
        } else {
            if (input[4] >= 0.22628185) {
                var89 = -0.13389798;
            } else {
                var89 = 0.062225044;
            }
        }
    } else {
        if (input[21] >= 0.38748372) {
            if (input[12] >= -0.09748495) {
                var89 = 0.08129211;
            } else {
                var89 = -0.114735074;
            }
        } else {
            if (input[20] >= 0.30727583) {
                var89 = 0.05076625;
            } else {
                var89 = -0.033850458;
            }
        }
    }
    double var90;
    if (input[7] >= 0.8169078) {
        if (input[0] >= 0.9468882) {
            if (input[9] >= 5.9152308) {
                var90 = 0.014646738;
            } else {
                var90 = -0.117393255;
            }
        } else {
            if (input[1] >= 2.030126) {
                var90 = 0.07842985;
            } else {
                var90 = -0.003239344;
            }
        }
    } else {
        if (input[1] >= 7.119488) {
            if (input[11] >= -8.574858) {
                var90 = 0.06398117;
            } else {
                var90 = -0.08802847;
            }
        } else {
            if (input[7] >= 0.80539787) {
                var90 = -0.022453517;
            } else {
                var90 = -0.13531412;
            }
        }
    }
    double var91;
    if (input[15] >= -1.8341594) {
        if (input[16] >= 0.040804) {
            var91 = -0.120429605;
        } else {
            var91 = -0.034003284;
        }
    } else {
        if (input[12] >= -0.11104912) {
            if (input[10] >= -5.405018) {
                var91 = 0.0010672398;
            } else {
                var91 = 0.1165315;
            }
        } else {
            if (input[8] >= 7.4007664) {
                var91 = 0.019943954;
            } else {
                var91 = -0.05904701;
            }
        }
    }
    double var92;
    if (input[4] >= 0.6944945) {
        if (input[20] >= 0.3375141) {
            var92 = -0.018137852;
        } else {
            var92 = -0.11438605;
        }
    } else {
        if (input[18] >= 0.490526) {
            if (input[13] >= -4.097844) {
                var92 = 0.0035273947;
            } else {
                var92 = 0.14522271;
            }
        } else {
            if (input[3] >= -10.191879) {
                var92 = 0.0021611743;
            } else {
                var92 = -0.119119346;
            }
        }
    }
    double var93;
    if (input[10] >= -7.442034) {
        if (input[7] >= 0.95852685) {
            if (input[19] >= 2.7932162) {
                var93 = -0.15255639;
            } else {
                var93 = -0.014889767;
            }
        } else {
            if (input[16] >= 0.1620385) {
                var93 = -0.077163815;
            } else {
                var93 = 0.021297595;
            }
        }
    } else {
        if (input[3] >= -7.9707565) {
            if (input[4] >= 0.3388002) {
                var93 = 0.05075192;
            } else {
                var93 = 0.1606194;
            }
        } else {
            if (input[12] >= -0.19683754) {
                var93 = 0.057476494;
            } else {
                var93 = -0.082139745;
            }
        }
    }
    double var94;
    if (input[20] >= 0.7479478) {
        if (input[7] >= 0.91890794) {
            if (input[0] >= 0.97748697) {
                var94 = 0.007003292;
            } else {
                var94 = 0.13462855;
            }
        } else {
            if (input[4] >= 0.24386464) {
                var94 = -0.12385871;
            } else {
                var94 = 0.06510793;
            }
        }
    } else {
        if (input[21] >= 0.47000468) {
            if (input[1] >= 14.848114) {
                var94 = -0.00609489;
            } else {
                var94 = -0.13677894;
            }
        } else {
            if (input[4] >= -0.04111176) {
                var94 = 0.010186801;
            } else {
                var94 = -0.11770603;
            }
        }
    }
    double var95;
    if (input[2] >= 3.7793622) {
        if (input[15] >= -2.727243) {
            if (input[2] >= 8.311214) {
                var95 = 0.05504227;
            } else {
                var95 = -0.12822051;
            }
        } else {
            if (input[7] >= 0.8792491) {
                var95 = 0.068471044;
            } else {
                var95 = -0.032663103;
            }
        }
    } else {
        if (input[16] >= 0.047235996) {
            if (input[14] >= 0.7305827) {
                var95 = -0.1040402;
            } else {
                var95 = -0.00041077603;
            }
        } else {
            if (input[0] >= 0.8590337) {
                var95 = -0.06109078;
            } else {
                var95 = 0.10614293;
            }
        }
    }
    double var96;
    if (input[9] >= 2.0763445) {
        if (input[12] >= -0.11104912) {
            if (input[4] >= -0.042459328) {
                var96 = 0.063564956;
            } else {
                var96 = -0.10665935;
            }
        } else {
            if (input[6] >= 2.2747529) {
                var96 = -0.07336805;
            } else {
                var96 = 0.011134524;
            }
        }
    } else {
        if (input[18] >= 0.41802925) {
            var96 = -0.027165564;
        } else {
            var96 = -0.11432918;
        }
    }
    double var97;
    if (input[20] >= 0.7479478) {
        if (input[7] >= 0.91890794) {
            if (input[21] >= 0.6969644) {
                var97 = 0.02329702;
            } else {
                var97 = 0.13109535;
            }
        } else {
            if (input[4] >= 0.24386464) {
                var97 = -0.115453035;
            } else {
                var97 = 0.06336889;
            }
        }
    } else {
        if (input[12] >= -0.2314446) {
            if (input[10] >= -7.326011) {
                var97 = -0.02281472;
            } else {
                var97 = 0.07667615;
            }
        } else {
            if (input[3] >= -5.4516287) {
                var97 = -0.00082117174;
            } else {
                var97 = -0.14573978;
            }
        }
    }
    double var98;
    if (input[0] >= 0.9467274) {
        if (input[13] >= -4.9845867) {
            if (input[5] >= 1.7542722) {
                var98 = -0.14340723;
            } else {
                var98 = -0.0087043885;
            }
        } else {
            if (input[3] >= -4.1636906) {
                var98 = -0.11507077;
            } else {
                var98 = 0.042116437;
            }
        }
    } else {
        if (input[1] >= 13.014367) {
            if (input[11] >= -8.516735) {
                var98 = 0.119652085;
            } else {
                var98 = -0.029811135;
            }
        } else {
            if (input[21] >= 0.33848888) {
                var98 = -0.0710191;
            } else {
                var98 = 0.030060029;
            }
        }
    }
    double var99;
    if (input[3] >= -4.16535) {
        if (input[21] >= 0.20766528) {
            if (input[1] >= 15.952487) {
                var99 = 0.03625401;
            } else {
                var99 = -0.1252692;
            }
        } else {
            if (input[20] >= 0.18994892) {
                var99 = 0.09223558;
            } else {
                var99 = -0.08765885;
            }
        }
    } else {
        if (input[12] >= -0.1392354) {
            if (input[20] >= 0.28498408) {
                var99 = 0.13066196;
            } else {
                var99 = -0.011853484;
            }
        } else {
            if (input[14] >= 0.49543357) {
                var99 = -0.05794617;
            } else {
                var99 = 0.04575298;
            }
        }
    }
    double var100;
    if (input[7] >= 0.8273461) {
        if (input[4] >= 0.6944945) {
            if (input[1] >= 7.9290304) {
                var100 = -0.024360796;
            } else {
                var100 = -0.105458476;
            }
        } else {
            if (input[16] >= 0.20844491) {
                var100 = -0.03950224;
            } else {
                var100 = 0.031014822;
            }
        }
    } else {
        if (input[1] >= 4.3765793) {
            if (input[2] >= 4.0040197) {
                var100 = 0.05457749;
            } else {
                var100 = -0.057924837;
            }
        } else {
            if (input[4] >= -0.038715832) {
                var100 = -0.12201077;
            } else {
                var100 = -0.024862163;
            }
        }
    }
    double var101;
    if (input[3] >= -10.572117) {
        if (input[11] >= -5.4009123) {
            if (input[10] >= -4.174343) {
                var101 = -0.19181256;
            } else {
                var101 = -0.11419716;
            }
        } else {
            if (input[12] >= -0.14477319) {
                var101 = -0.15023328;
            } else {
                var101 = 0.09603706;
            }
        }
    } else {
        if (input[12] >= -0.19745609) {
            if (input[1] >= 9.680364) {
                var101 = -0.17922078;
            } else {
                var101 = 0.17647061;
            }
        } else {
            if (input[20] >= 1.5675879) {
                var101 = -0.079245284;
            } else {
                var101 = 0.5853361;
            }
        }
    }
    double var102;
    if (input[11] >= -8.151665) {
        if (input[10] >= -4.2806473) {
            if (input[10] >= -4.174343) {
                var102 = -0.17806748;
            } else {
                var102 = -0.110422514;
            }
        } else {
            if (input[0] >= 0.8132707) {
                var102 = -0.084462285;
            } else {
                var102 = 0.25626305;
            }
        }
    } else {
        if (input[12] >= -0.19683754) {
            if (input[1] >= 0.9490716) {
                var102 = -0.15909706;
            } else {
                var102 = 0.2927451;
            }
        } else {
            if (input[3] >= -8.12586) {
                var102 = -0.18548524;
            } else {
                var102 = 0.35277072;
            }
        }
    }
    double var103;
    if (input[5] >= 12.4272) {
        if (input[3] >= -6.7861977) {
            if (input[1] >= 6.537139) {
                var103 = -0.15547365;
            } else {
                var103 = 0.21294644;
            }
        } else {
            if (input[1] >= 27.040485) {
                var103 = -0.019026116;
            } else {
                var103 = 0.3321062;
            }
        }
    } else {
        if (input[11] >= -5.4009123) {
            if (input[0] >= 0.8827522) {
                var103 = -0.16974807;
            } else {
                var103 = -0.10395977;
            }
        } else {
            if (input[1] >= 4.4819317) {
                var103 = -0.16416787;
            } else {
                var103 = 0.079361215;
            }
        }
    }
    double var104;
    if (input[5] >= 4.189517) {
        if (input[1] >= 12.011581) {
            if (input[5] >= 33.452232) {
                var104 = 0.1686792;
            } else {
                var104 = -0.17212257;
            }
        } else {
            if (input[10] >= -4.2806473) {
                var104 = -0.1564112;
            } else {
                var104 = 0.2852077;
            }
        }
    } else {
        if (input[0] >= 0.89789975) {
            if (input[11] >= -10.403841) {
                var104 = -0.15739073;
            } else {
                var104 = 0.18429731;
            }
        } else {
            if (input[11] >= -4.0844374) {
                var104 = -0.15545583;
            } else {
                var104 = 0.06615041;
            }
        }
    }
    double var105;
    if (input[5] >= 2.2048798) {
        if (input[1] >= 11.506848) {
            if (input[5] >= 31.633423) {
                var105 = 0.13588555;
            } else {
                var105 = -0.1639472;
            }
        } else {
            if (input[10] >= -4.2806473) {
                var105 = -0.13980152;
            } else {
                var105 = 0.21344216;
            }
        }
    } else {
        if (input[0] >= 0.86483353) {
            if (input[14] >= 0.94186354) {
                var105 = 0.38000023;
            } else {
                var105 = -0.14956014;
            }
        } else {
            if (input[11] >= -4.0759554) {
                var105 = -0.15338539;
            } else {
                var105 = 0.061705027;
            }
        }
    }
    double var106;
    if (input[5] >= 2.2644773) {
        if (input[1] >= 10.798477) {
            if (input[3] >= -8.581648) {
                var106 = -0.1630584;
            } else {
                var106 = 0.08807683;
            }
        } else {
            if (input[10] >= -4.1737785) {
                var106 = -0.14021528;
            } else {
                var106 = 0.1857812;
            }
        }
    } else {
        if (input[0] >= 0.81289697) {
            if (input[14] >= 0.94186354) {
                var106 = 0.31705326;
            } else {
                var106 = -0.13739723;
            }
        } else {
            if (input[11] >= -4.0759554) {
                var106 = -0.14829572;
            } else {
                var106 = 0.115613855;
            }
        }
    }
    double var107;
    if (input[5] >= 5.770217) {
        if (input[1] >= 15.922005) {
            if (input[5] >= 47.344517) {
                var107 = 0.16546966;
            } else {
                var107 = -0.15488286;
            }
        } else {
            if (input[10] >= -4.1462955) {
                var107 = -0.15286247;
            } else {
                var107 = 0.19662957;
            }
        }
    } else {
        if (input[12] >= -0.09694774) {
            if (input[14] >= 0.9545238) {
                var107 = 0.1286276;
            } else {
                var107 = -0.16186388;
            }
        } else {
            if (input[20] >= 0.30474216) {
                var107 = -0.10024298;
            } else {
                var107 = 0.096273206;
            }
        }
    }
    double var108;
    if (input[5] >= 1.5639112) {
        if (input[12] >= -0.14477319) {
            if (input[1] >= 0.9503512) {
                var108 = -0.14520733;
            } else {
                var108 = 0.12907688;
            }
        } else {
            if (input[20] >= 0.81402904) {
                var108 = -0.058716882;
            } else {
                var108 = 0.13461272;
            }
        }
    } else {
        if (input[15] >= -3.498855) {
            if (input[11] >= -4.0759554) {
                var108 = -0.14299776;
            } else {
                var108 = 0.05713651;
            }
        } else {
            if (input[8] >= 8.397818) {
                var108 = -0.06587646;
            } else {
                var108 = -0.15869911;
            }
        }
    }
    double var109;
    if (input[5] >= 1.5639112) {
        if (input[3] >= -4.751499) {
            if (input[15] >= -1.5304143) {
                var109 = 0.16501002;
            } else {
                var109 = -0.13889447;
            }
        } else {
            if (input[1] >= 9.448913) {
                var109 = -0.04226589;
            } else {
                var109 = 0.12748417;
            }
        }
    } else {
        if (input[15] >= -3.498855) {
            if (input[11] >= -4.0759554) {
                var109 = -0.13718909;
            } else {
                var109 = 0.04683478;
            }
        } else {
            if (input[17] >= 8.77255) {
                var109 = -0.04111139;
            } else {
                var109 = -0.15018675;
            }
        }
    }
    double var110;
    if (input[5] >= 10.985957) {
        if (input[3] >= -6.7861977) {
            if (input[1] >= 12.054468) {
                var110 = -0.15609062;
            } else {
                var110 = 0.07933949;
            }
        } else {
            if (input[1] >= 50.94309) {
                var110 = -0.103353985;
            } else {
                var110 = 0.17555805;
            }
        }
    } else {
        if (input[1] >= 2.5755906) {
            if (input[20] >= 0.26373) {
                var110 = -0.13417946;
            } else {
                var110 = 0.011022411;
            }
        } else {
            if (input[5] >= 1.2220623) {
                var110 = 0.10251699;
            } else {
                var110 = -0.08456126;
            }
        }
    }
    double var111;
    if (input[5] >= 5.770217) {
        if (input[1] >= 15.922005) {
            if (input[5] >= 44.31644) {
                var111 = 0.14089142;
            } else {
                var111 = -0.14568788;
            }
        } else {
            if (input[10] >= -4.2806473) {
                var111 = -0.107045725;
            } else {
                var111 = 0.16176099;
            }
        }
    } else {
        if (input[20] >= 0.55047816) {
            if (input[1] >= -0.6033977) {
                var111 = -0.16655788;
            } else {
                var111 = 0.100029245;
            }
        } else {
            if (input[12] >= -0.09694774) {
                var111 = -0.13725407;
            } else {
                var111 = 0.031885754;
            }
        }
    }
    double var112;
    if (input[5] >= 5.770217) {
        if (input[1] >= 15.922005) {
            if (input[11] >= -8.581966) {
                var112 = -0.15669893;
            } else {
                var112 = 0.09017746;
            }
        } else {
            if (input[3] >= -5.403184) {
                var112 = -0.058169413;
            } else {
                var112 = 0.15748206;
            }
        }
    } else {
        if (input[15] >= -2.7262976) {
            if (input[11] >= -4.0759554) {
                var112 = -0.10009252;
            } else {
                var112 = 0.14488733;
            }
        } else {
            if (input[0] >= 0.8022003) {
                var112 = -0.09903971;
            } else {
                var112 = 0.039313734;
            }
        }
    }
    double var113;
    if (input[5] >= 2.1646843) {
        if (input[3] >= -5.593113) {
            if (input[20] >= 0.26833737) {
                var113 = -0.11272388;
            } else {
                var113 = 0.113131724;
            }
        } else {
            if (input[1] >= 9.812121) {
                var113 = -0.017019758;
            } else {
                var113 = 0.1309115;
            }
        }
    } else {
        if (input[0] >= 0.8827306) {
            if (input[17] >= 8.77255) {
                var113 = 0.050936967;
            } else {
                var113 = -0.1315128;
            }
        } else {
            if (input[21] >= 0.16578151) {
                var113 = 0.045152575;
            } else {
                var113 = -0.14813125;
            }
        }
    }
    double var114;
    if (input[5] >= 9.932713) {
        if (input[3] >= -4.749497) {
            var114 = -0.13685733;
        } else {
            if (input[1] >= 15.922005) {
                var114 = 0.0012167251;
            } else {
                var114 = 0.16233335;
            }
        }
    } else {
        if (input[20] >= 0.55047816) {
            if (input[1] >= -0.6033977) {
                var114 = -0.15277806;
            } else {
                var114 = 0.076946355;
            }
        } else {
            if (input[12] >= -0.18763214) {
                var114 = -0.038524926;
            } else {
                var114 = 0.11694185;
            }
        }
    }
    double var115;
    if (input[12] >= -0.09694774) {
        if (input[14] >= 0.9545238) {
            var115 = 0.23329449;
        } else {
            if (input[7] >= 0.862844) {
                var115 = -0.14376578;
            } else {
                var115 = -0.031279307;
            }
        }
    } else {
        if (input[20] >= 0.27051592) {
            if (input[11] >= -5.123764) {
                var115 = -0.13602653;
            } else {
                var115 = 0.035054605;
            }
        } else {
            if (input[21] >= 0.2178866) {
                var115 = 0.2097987;
            } else {
                var115 = 0.021167789;
            }
        }
    }
    double var116;
    if (input[5] >= 3.4830313) {
        if (input[1] >= 9.440429) {
            if (input[3] >= -8.581648) {
                var116 = -0.14220615;
            } else {
                var116 = 0.074707;
            }
        } else {
            if (input[0] >= 0.98292834) {
                var116 = -0.0742721;
            } else {
                var116 = 0.12402617;
            }
        }
    } else {
        if (input[15] >= -2.7648509) {
            if (input[13] >= -2.5629625) {
                var116 = -0.06767965;
            } else {
                var116 = 0.14952958;
            }
        } else {
            if (input[4] >= 0.26418975) {
                var116 = -0.021119174;
            } else {
                var116 = -0.13904794;
            }
        }
    }
    double var117;
    if (input[12] >= -0.069190435) {
        if (input[4] >= 0.016025957) {
            var117 = -0.15076444;
        } else {
            if (input[0] >= 0.85728747) {
                var117 = 0.21174747;
            } else {
                var117 = -0.114511535;
            }
        }
    } else {
        if (input[20] >= 0.27051592) {
            if (input[11] >= -5.123764) {
                var117 = -0.118316814;
            } else {
                var117 = 0.023594517;
            }
        } else {
            if (input[16] >= 0.031591997) {
                var117 = 0.14248087;
            } else {
                var117 = -0.060374662;
            }
        }
    }
    double var118;
    if (input[5] >= 9.932713) {
        if (input[12] >= -0.14433292) {
            if (input[21] >= 0.2573853) {
                var118 = -0.1292902;
            } else {
                var118 = -0.0172286;
            }
        } else {
            if (input[9] >= 3.6192627) {
                var118 = 0.12664782;
            } else {
                var118 = -0.06627764;
            }
        }
    } else {
        if (input[20] >= 0.55047816) {
            if (input[9] >= 5.326642) {
                var118 = -0.17094597;
            } else {
                var118 = -0.05790369;
            }
        } else {
            if (input[12] >= -0.25238693) {
                var118 = -0.011320513;
            } else {
                var118 = 0.16625938;
            }
        }
    }
    double var119;
    if (input[15] >= -2.3520477) {
        if (input[10] >= -2.5804186) {
            if (input[5] >= 3.7239807) {
                var119 = 0.061004136;
            } else {
                var119 = -0.13552694;
            }
        } else {
            if (input[7] >= 0.801368) {
                var119 = 0.1131743;
            } else {
                var119 = 0.33672896;
            }
        }
    } else {
        if (input[5] >= 5.770217) {
            if (input[1] >= 10.922596) {
                var119 = -0.028189352;
            } else {
                var119 = 0.103633076;
            }
        } else {
            if (input[4] >= 0.34787202) {
                var119 = 0.0115845315;
            } else {
                var119 = -0.10166723;
            }
        }
    }
    double var120;
    if (input[0] >= 0.8132707) {
        if (input[11] >= -10.127516) {
            if (input[20] >= 0.35486293) {
                var120 = -0.07914962;
            } else {
                var120 = 0.016363455;
            }
        } else {
            if (input[18] >= 0.5489176) {
                var120 = -0.022053534;
            } else {
                var120 = 0.14068428;
            }
        }
    } else {
        if (input[21] >= 0.16529144) {
            if (input[4] >= 0.000888353) {
                var120 = 0.132474;
            } else {
                var120 = -0.061625767;
            }
        } else {
            var120 = -0.1402307;
        }
    }
    double var121;
    if (input[5] >= 0.9112687) {
        if (input[1] >= 0.6255025) {
            if (input[12] >= -0.15920252) {
                var121 = -0.09697508;
            } else {
                var121 = 0.03362532;
            }
        } else {
            if (input[13] >= -5.4164724) {
                var121 = 0.18168218;
            } else {
                var121 = -0.016481686;
            }
        }
    } else {
        if (input[21] >= 0.31782377) {
            if (input[10] >= -9.950411) {
                var121 = -0.15570998;
            } else {
                var121 = 0.03794308;
            }
        } else {
            if (input[9] >= 8.256531) {
                var121 = 0.23328784;
            } else {
                var121 = -0.04231748;
            }
        }
    }
    double var122;
    if (input[0] >= 0.9744625) {
        if (input[3] >= -9.683735) {
            if (input[5] >= 21.407742) {
                var122 = 0.05211511;
            } else {
                var122 = -0.1482374;
            }
        } else {
            if (input[0] >= 0.97963667) {
                var122 = 0.11738158;
            } else {
                var122 = 0.015269298;
            }
        }
    } else {
        if (input[16] >= 0.031851374) {
            if (input[20] >= 0.6295082) {
                var122 = -0.0509809;
            } else {
                var122 = 0.05402871;
            }
        } else {
            if (input[15] >= -6.793064) {
                var122 = -0.14116426;
            } else {
                var122 = 0.07728731;
            }
        }
    }
    double var123;
    if (input[9] >= 3.0377843) {
        if (input[15] >= -2.3676515) {
            if (input[19] >= 0.7629698) {
                var123 = 0.16285682;
            } else {
                var123 = -0.10778309;
            }
        } else {
            if (input[5] >= 4.339389) {
                var123 = 0.054099564;
            } else {
                var123 = -0.046894707;
            }
        }
    } else {
        if (input[0] >= 0.8974314) {
            var123 = -0.15318672;
        } else {
            if (input[12] >= -0.1151361) {
                var123 = -0.08358995;
            } else {
                var123 = 0.08503232;
            }
        }
    }
    double var124;
    if (input[21] >= 1.1567862) {
        if (input[20] >= 2.1131837) {
            var124 = -0.10546101;
        } else {
            if (input[14] >= 0.01590765) {
                var124 = 0.15536147;
            } else {
                var124 = 0.012926261;
            }
        }
    } else {
        if (input[20] >= 0.53095233) {
            if (input[19] >= 6.5684953) {
                var124 = -0.0068861456;
            } else {
                var124 = -0.14304785;
            }
        } else {
            if (input[17] >= 5.570011) {
                var124 = 0.0727465;
            } else {
                var124 = -0.029464755;
            }
        }
    }
    double var125;
    if (input[16] >= 0.031851374) {
        if (input[20] >= 0.354811) {
            if (input[21] >= 0.5041473) {
                var125 = 0.025869915;
            } else {
                var125 = -0.1123087;
            }
        } else {
            if (input[8] >= 8.256832) {
                var125 = 0.1667136;
            } else {
                var125 = 0.023002278;
            }
        }
    } else {
        if (input[15] >= -6.793064) {
            if (input[17] >= 2.6819897) {
                var125 = -0.15591149;
            } else {
                var125 = -0.046086468;
            }
        } else {
            var125 = 0.05607223;
        }
    }
    double var126;
    if (input[0] >= 0.95746624) {
        if (input[3] >= -9.352738) {
            if (input[20] >= 0.19790623) {
                var126 = -0.11196395;
            } else {
                var126 = 0.074842416;
            }
        } else {
            if (input[8] >= 15.243124) {
                var126 = -0.046895202;
            } else {
                var126 = 0.118885525;
            }
        }
    } else {
        if (input[4] >= 0.26409578) {
            if (input[12] >= -0.06916332) {
                var126 = -0.13625506;
            } else {
                var126 = 0.091513544;
            }
        } else {
            if (input[15] >= -2.455512) {
                var126 = 0.08773914;
            } else {
                var126 = -0.06709268;
            }
        }
    }
    double var127;
    if (input[9] >= 3.0377843) {
        if (input[15] >= -2.3676515) {
            if (input[19] >= 1.1343944) {
                var127 = 0.14764524;
            } else {
                var127 = -0.062832996;
            }
        } else {
            if (input[5] >= 9.932713) {
                var127 = 0.07524068;
            } else {
                var127 = -0.029535687;
            }
        }
    } else {
        if (input[15] >= -1.2831196) {
            if (input[13] >= -1.3877461) {
                var127 = -0.10356864;
            } else {
                var127 = 0.34504023;
            }
        } else {
            if (input[11] >= -5.3714724) {
                var127 = -0.14953546;
            } else {
                var127 = 0.040724736;
            }
        }
    }
    double var128;
    if (input[0] >= 0.8132707) {
        if (input[19] >= 1.1278021) {
            if (input[20] >= 0.37969786) {
                var128 = -0.04525579;
            } else {
                var128 = 0.054303806;
            }
        } else {
            if (input[9] >= 10.975171) {
                var128 = 0.11143456;
            } else {
                var128 = -0.14633068;
            }
        }
    } else {
        if (input[21] >= 0.16529144) {
            if (input[4] >= 0.073439635) {
                var128 = 0.11104825;
            } else {
                var128 = -0.034924112;
            }
        } else {
            var128 = -0.12968686;
        }
    }
    double var129;
    if (input[5] >= 0.6767739) {
        if (input[1] >= 0.6250771) {
            if (input[12] >= -0.15920252) {
                var129 = -0.08334212;
            } else {
                var129 = 0.026199246;
            }
        } else {
            if (input[6] >= 0.17118686) {
                var129 = 0.16809633;
            } else {
                var129 = 0.020601025;
            }
        }
    } else {
        if (input[15] >= -1.0982741) {
            if (input[8] >= 1.9290202) {
                var129 = 0.20447654;
            } else {
                var129 = 0.013642976;
            }
        } else {
            if (input[8] >= 9.334178) {
                var129 = 0.08913859;
            } else {
                var129 = -0.08476945;
            }
        }
    }
    double var130;
    if (input[16] >= 0.031851374) {
        if (input[20] >= 0.53095233) {
            if (input[5] >= 13.131615) {
                var130 = 0.057850413;
            } else {
                var130 = -0.11069679;
            }
        } else {
            if (input[12] >= -0.25238693) {
                var130 = 0.009555515;
            } else {
                var130 = 0.12413744;
            }
        }
    } else {
        if (input[21] >= 0.2890553) {
            if (input[1] >= 0.5814645) {
                var130 = -0.1095442;
            } else {
                var130 = 0.07801205;
            }
        } else {
            var130 = -0.14273486;
        }
    }
    double var131;
    if (input[13] >= -1.6389973) {
        if (input[3] >= -2.3009517) {
            if (input[13] >= -1.3957045) {
                var131 = -0.10582273;
            } else {
                var131 = 0.05386774;
            }
        } else {
            if (input[17] >= 3.1284904) {
                var131 = 0.08072728;
            } else {
                var131 = 0.36976925;
            }
        }
    } else {
        if (input[8] >= 3.1355019) {
            if (input[4] >= 0.24697523) {
                var131 = 0.036632337;
            } else {
                var131 = -0.0381357;
            }
        } else {
            if (input[11] >= -5.3714724) {
                var131 = -0.14706132;
            } else {
                var131 = -0.00043621767;
            }
        }
    }
    double var132;
    if (input[21] >= 1.1567862) {
        if (input[20] >= 2.1131837) {
            var132 = -0.08350189;
        } else {
            if (input[14] >= 0.01590765) {
                var132 = 0.14216866;
            } else {
                var132 = 0.009973148;
            }
        }
    } else {
        if (input[20] >= 0.6289415) {
            if (input[5] >= 13.160753) {
                var132 = 0.013982125;
            } else {
                var132 = -0.15052028;
            }
        } else {
            if (input[17] >= 5.344144) {
                var132 = 0.050019126;
            } else {
                var132 = -0.03129878;
            }
        }
    }
    double var133;
    if (input[13] >= -1.6389973) {
        if (input[3] >= -2.3009517) {
            if (input[19] >= 0.62292826) {
                var133 = -0.09998623;
            } else {
                var133 = 0.05594931;
            }
        } else {
            if (input[3] >= -2.8969095) {
                var133 = 0.35812008;
            } else {
                var133 = 0.081036665;
            }
        }
    } else {
        if (input[8] >= 3.1355019) {
            if (input[2] >= 2.6836739) {
                var133 = -0.028057495;
            } else {
                var133 = 0.042820416;
            }
        } else {
            if (input[11] >= -5.3714724) {
                var133 = -0.14372274;
            } else {
                var133 = 0.00020119897;
            }
        }
    }
    double var134;
    if (input[5] >= 4.189517) {
        if (input[3] >= -5.9374027) {
            if (input[1] >= 6.2168264) {
                var134 = -0.1623276;
            } else {
                var134 = 0.02698684;
            }
        } else {
            if (input[14] >= 0.06388095) {
                var134 = 0.1086049;
            } else {
                var134 = -0.06367471;
            }
        }
    } else {
        if (input[1] >= 1.683193) {
            if (input[2] >= 0.6430859) {
                var134 = -0.14099486;
            } else {
                var134 = 0.09153322;
            }
        } else {
            if (input[5] >= 0.6767739) {
                var134 = 0.066171385;
            } else {
                var134 = -0.03929628;
            }
        }
    }
    double var135;
    if (input[0] >= 0.953642) {
        if (input[10] >= -6.4326344) {
            if (input[20] >= 0.23533118) {
                var135 = -0.14031297;
            } else {
                var135 = 0.003927288;
            }
        } else {
            if (input[13] >= -4.9930277) {
                var135 = 0.1022846;
            } else {
                var135 = -0.04477296;
            }
        }
    } else {
        if (input[4] >= 0.26409578) {
            if (input[12] >= -0.080514014) {
                var135 = -0.113950066;
            } else {
                var135 = 0.086318485;
            }
        } else {
            if (input[15] >= -2.455512) {
                var135 = 0.065157756;
            } else {
                var135 = -0.066348806;
            }
        }
    }
    double var136;
    if (input[16] >= 0.031851374) {
        if (input[20] >= 0.53095233) {
            if (input[21] >= 1.1567862) {
                var136 = 0.08651065;
            } else {
                var136 = -0.08288309;
            }
        } else {
            if (input[12] >= -0.25238693) {
                var136 = 0.006207648;
            } else {
                var136 = 0.11569509;
            }
        }
    } else {
        if (input[21] >= 0.2890553) {
            if (input[20] >= 0.26798308) {
                var136 = -0.095916785;
            } else {
                var136 = 0.07266883;
            }
        } else {
            var136 = -0.13478605;
        }
    }
    double var137;
    if (input[21] >= 0.5480508) {
        if (input[10] >= -6.334591) {
            if (input[15] >= -5.6333714) {
                var137 = -0.0055552763;
            } else {
                var137 = -0.13598034;
            }
        } else {
            if (input[20] >= 0.8164246) {
                var137 = -0.0071062488;
            } else {
                var137 = 0.14347608;
            }
        }
    } else {
        if (input[20] >= 0.37955162) {
            if (input[15] >= -2.2836168) {
                var137 = 0.093057245;
            } else {
                var137 = -0.12962227;
            }
        } else {
            if (input[17] >= 7.461306) {
                var137 = 0.12936722;
            } else {
                var137 = -0.013334129;
            }
        }
    }
    double var138;
    if (input[13] >= -1.6389973) {
        if (input[13] >= -1.276339) {
            var138 = -0.08480108;
        } else {
            if (input[7] >= 0.8046895) {
                var138 = 0.027609328;
            } else {
                var138 = 0.27565414;
            }
        }
    } else {
        if (input[13] >= -2.412533) {
            if (input[18] >= 0.42387462) {
                var138 = 0.03242388;
            } else {
                var138 = -0.13945301;
            }
        } else {
            if (input[9] >= 3.1108427) {
                var138 = 0.01360915;
            } else {
                var138 = -0.0854554;
            }
        }
    }
    double var139;
    if (input[4] >= 0.34408006) {
        if (input[0] >= 0.9392773) {
            if (input[17] >= 7.5147204) {
                var139 = 0.0589025;
            } else {
                var139 = -0.10366748;
            }
        } else {
            if (input[12] >= -0.080397084) {
                var139 = -0.10087403;
            } else {
                var139 = 0.13161653;
            }
        }
    } else {
        if (input[9] >= 6.39583) {
            if (input[9] >= 9.8623905) {
                var139 = 0.03889913;
            } else {
                var139 = -0.124264725;
            }
        } else {
            if (input[9] >= 6.1368847) {
                var139 = 0.12425571;
            } else {
                var139 = -0.014813005;
            }
        }
    }
    double var140;
    if (input[16] >= 0.031851374) {
        if (input[2] >= 0.6390279) {
            if (input[11] >= -4.355988) {
                var140 = -0.13316804;
            } else {
                var140 = 0.01403074;
            }
        } else {
            if (input[12] >= -0.12847391) {
                var140 = 0.15039417;
            } else {
                var140 = -0.0736487;
            }
        }
    } else {
        if (input[21] >= 0.2890553) {
            var140 = -0.020034835;
        } else {
            var140 = -0.12899275;
        }
    }
    double var141;
    if (input[1] >= -0.5833844) {
        if (input[1] >= 0.63365376) {
            if (input[5] >= 3.996441) {
                var141 = 0.029742861;
            } else {
                var141 = -0.064744;
            }
        } else {
            if (input[5] >= 0.96617305) {
                var141 = 0.12190316;
            } else {
                var141 = -0.00088349264;
            }
        }
    } else {
        if (input[4] >= 0.30526143) {
            var141 = -0.021575883;
        } else {
            var141 = -0.14017054;
        }
    }
    double var142;
    if (input[16] >= 0.031851374) {
        if (input[20] >= 0.51482904) {
            if (input[5] >= 4.350814) {
                var142 = 0.016126657;
            } else {
                var142 = -0.13177049;
            }
        } else {
            if (input[9] >= 4.014843) {
                var142 = 0.05183017;
            } else {
                var142 = -0.03170585;
            }
        }
    } else {
        if (input[1] >= 0.539021) {
            var142 = -0.12761062;
        } else {
            var142 = -0.030734072;
        }
    }
    double var143;
    if (input[0] >= 0.953642) {
        if (input[3] >= -9.350597) {
            if (input[15] >= -4.0135603) {
                var143 = 0.008209207;
            } else {
                var143 = -0.10393718;
            }
        } else {
            if (input[12] >= -0.21799266) {
                var143 = -0.0057198354;
            } else {
                var143 = 0.10019364;
            }
        }
    } else {
        if (input[19] >= 16.54799) {
            if (input[13] >= -7.4684663) {
                var143 = -0.14920966;
            } else {
                var143 = 0.107917726;
            }
        } else {
            if (input[19] >= 1.7820983) {
                var143 = 0.053814303;
            } else {
                var143 = -0.023854056;
            }
        }
    }
    double var144;
    if (input[1] >= 9.440429) {
        if (input[12] >= -0.3679583) {
            if (input[15] >= -6.1672716) {
                var144 = -0.15054119;
            } else {
                var144 = -0.013348116;
            }
        } else {
            if (input[11] >= -8.538003) {
                var144 = -0.0799941;
            } else {
                var144 = 0.09061673;
            }
        }
    } else {
        if (input[5] >= 3.996441) {
            if (input[11] >= -4.1290665) {
                var144 = -0.119000606;
            } else {
                var144 = 0.095590346;
            }
        } else {
            if (input[11] >= -2.659571) {
                var144 = 0.09481198;
            } else {
                var144 = -0.030241612;
            }
        }
    }
    double var145;
    if (input[4] >= 0.34408006) {
        if (input[0] >= 0.901989) {
            if (input[17] >= 5.344144) {
                var145 = 0.028450763;
            } else {
                var145 = -0.12029664;
            }
        } else {
            if (input[21] >= 0.19559884) {
                var145 = 0.14898744;
            } else {
                var145 = -0.07482433;
            }
        }
    } else {
        if (input[15] >= -2.3520477) {
            if (input[10] >= -2.5804186) {
                var145 = -0.07682564;
            } else {
                var145 = 0.07543018;
            }
        } else {
            if (input[21] >= 0.5480508) {
                var145 = 0.024235148;
            } else {
                var145 = -0.08793487;
            }
        }
    }
    double var146;
    if (input[2] >= 0.6390279) {
        if (input[3] >= -4.843202) {
            if (input[20] >= 0.16920221) {
                var146 = -0.12810172;
            } else {
                var146 = 0.07960438;
            }
        } else {
            if (input[12] >= -0.11404528) {
                var146 = -0.09203752;
            } else {
                var146 = 0.022243233;
            }
        }
    } else {
        if (input[12] >= -0.12847391) {
            if (input[9] >= 3.0380983) {
                var146 = 0.2043903;
            } else {
                var146 = -0.038734104;
            }
        } else {
            if (input[5] >= 1.7057472) {
                var146 = 0.036726795;
            } else {
                var146 = -0.11892458;
            }
        }
    }
    double var147;
    if (input[1] >= 9.440429) {
        if (input[12] >= -0.3679583) {
            if (input[15] >= -5.6291113) {
                var147 = -0.1433667;
            } else {
                var147 = -0.018861532;
            }
        } else {
            if (input[11] >= -8.538003) {
                var147 = -0.07657177;
            } else {
                var147 = 0.0840279;
            }
        }
    } else {
        if (input[15] >= -4.9239283) {
            if (input[5] >= 2.5181155) {
                var147 = 0.0914748;
            } else {
                var147 = -0.0018174971;
            }
        } else {
            if (input[19] >= 8.560919) {
                var147 = 0.045171387;
            } else {
                var147 = -0.09319834;
            }
        }
    }
    double var148;
    if (input[1] >= -0.5833844) {
        if (input[1] >= 0.6247742) {
            if (input[5] >= 2.1218133) {
                var148 = 0.007992287;
            } else {
                var148 = -0.07123928;
            }
        } else {
            if (input[5] >= 0.96617305) {
                var148 = 0.10668152;
            } else {
                var148 = 0.0033026745;
            }
        }
    } else {
        if (input[18] >= 0.17387918) {
            var148 = -0.031720564;
        } else {
            var148 = -0.12856592;
        }
    }
    double var149;
    if (input[1] >= 9.440429) {
        if (input[12] >= -0.3679583) {
            if (input[15] >= -5.148279) {
                var149 = -0.13768251;
            } else {
                var149 = -0.027785724;
            }
        } else {
            if (input[11] >= -8.538003) {
                var149 = -0.06850232;
            } else {
                var149 = 0.077236876;
            }
        }
    } else {
        if (input[4] >= 0.24861437) {
            if (input[0] >= 0.93933654) {
                var149 = -0.015917717;
            } else {
                var149 = 0.077133894;
            }
        } else {
            if (input[15] >= -2.455512) {
                var149 = 0.052335043;
            } else {
                var149 = -0.06372092;
            }
        }
    }
    double var150;
    if (input[10] >= -2.5833955) {
        if (input[0] >= 0.37334442) {
            var150 = -0.12169463;
        } else {
            var150 = 0.029423838;
        }
    } else {
        if (input[11] >= -2.6647055) {
            var150 = 0.24705304;
        } else {
            if (input[7] >= 0.93293595) {
                var150 = 0.03240219;
            } else {
                var150 = -0.037232433;
            }
        }
    }
    double var151;
    if (input[0] >= 0.987028) {
        if (input[3] >= -9.94121) {
            var151 = 0.59483504;
        } else {
            var151 = -0.16097562;
        }
    } else {
        if (input[15] >= -9.972908) {
            if (input[6] >= 5.9605236) {
                var151 = 0.11523179;
            } else {
                var151 = -0.17106538;
            }
        } else {
            if (input[17] >= 9.812523) {
                var151 = -0.1108014;
            } else {
                var151 = 0.57798165;
            }
        }
    }
    double var152;
    if (input[0] >= 0.9830357) {
        if (input[3] >= -8.79447) {
            if (input[4] >= 0.5038929) {
                var152 = 0.37043208;
            } else {
                var152 = 0.20108268;
            }
        } else {
            var152 = -0.17202981;
        }
    } else {
        if (input[15] >= -9.972908) {
            if (input[6] >= 3.492358) {
                var152 = -0.028662808;
            } else {
                var152 = -0.16982573;
            }
        } else {
            if (input[17] >= 9.812523) {
                var152 = -0.078846455;
            } else {
                var152 = 0.36544374;
            }
        }
    }
    double var153;
    if (input[0] >= 0.97991323) {
        if (input[17] >= 7.9003057) {
            if (input[13] >= -18.266861) {
                var153 = -0.17004345;
            } else {
                var153 = 0.19100264;
            }
        } else {
            if (input[7] >= 0.93392825) {
                var153 = 0.27947217;
            } else {
                var153 = -0.13341764;
            }
        }
    } else {
        if (input[15] >= -9.972908) {
            if (input[6] >= 7.1821165) {
                var153 = 0.10016127;
            } else {
                var153 = -0.15392737;
            }
        } else {
            if (input[1] >= 2.7841048) {
                var153 = -0.10362655;
            } else {
                var153 = 0.28391227;
            }
        }
    }
    double var154;
    if (input[0] >= 0.9573486) {
        if (input[17] >= 7.598975) {
            if (input[15] >= -17.095037) {
                var154 = -0.15283418;
            } else {
                var154 = 0.23772605;
            }
        } else {
            if (input[13] >= -4.9998074) {
                var154 = 0.039329953;
            } else {
                var154 = 0.23391317;
            }
        }
    } else {
        if (input[15] >= -12.442083) {
            if (input[18] >= 0.8418937) {
                var154 = 0.20965372;
            } else {
                var154 = -0.15348634;
            }
        } else {
            if (input[1] >= 6.465288) {
                var154 = -0.10557211;
            } else {
                var154 = 0.28624344;
            }
        }
    }
    double var155;
    if (input[0] >= 0.9573486) {
        if (input[17] >= 7.598975) {
            if (input[15] >= -17.095037) {
                var155 = -0.14375001;
            } else {
                var155 = 0.20863745;
            }
        } else {
            if (input[13] >= -4.9998074) {
                var155 = 0.034494597;
            } else {
                var155 = 0.20175493;
            }
        }
    } else {
        if (input[15] >= -12.442083) {
            if (input[0] >= 0.92937016) {
                var155 = -0.09803815;
            } else {
                var155 = -0.16057473;
            }
        } else {
            if (input[1] >= 6.465288) {
                var155 = -0.09610989;
            } else {
                var155 = 0.24038571;
            }
        }
    }
    double var156;
    if (input[0] >= 0.9573486) {
        if (input[10] >= -7.3032546) {
            if (input[4] >= 0.50352967) {
                var156 = 0.20329066;
            } else {
                var156 = 0.053314265;
            }
        } else {
            if (input[0] >= 0.98681873) {
                var156 = 0.12257507;
            } else {
                var156 = -0.15281454;
            }
        }
    } else {
        if (input[15] >= -11.427542) {
            if (input[5] >= 0.5900586) {
                var156 = -0.1568642;
            } else {
                var156 = -0.090580724;
            }
        } else {
            if (input[1] >= 6.465288) {
                var156 = -0.10400137;
            } else {
                var156 = 0.20563494;
            }
        }
    }
    double var157;
    if (input[15] >= -5.612361) {
        if (input[0] >= 0.9751518) {
            if (input[19] >= 2.8263667) {
                var157 = -0.12307852;
            } else {
                var157 = 0.1754101;
            }
        } else {
            if (input[1] >= 0.89908427) {
                var157 = -0.1584545;
            } else {
                var157 = -0.09638701;
            }
        }
    } else {
        if (input[8] >= 8.050973) {
            if (input[15] >= -20.950224) {
                var157 = -0.15721105;
            } else {
                var157 = 0.20870396;
            }
        } else {
            if (input[10] >= -8.260464) {
                var157 = 0.17145562;
            } else {
                var157 = -0.15557563;
            }
        }
    }
    double var158;
    if (input[0] >= 0.9404907) {
        if (input[10] >= -6.8915577) {
            if (input[4] >= 0.40079015) {
                var158 = 0.17525809;
            } else {
                var158 = 0.025188852;
            }
        } else {
            if (input[15] >= -16.218702) {
                var158 = -0.12474988;
            } else {
                var158 = 0.15867294;
            }
        }
    } else {
        if (input[15] >= -12.627462) {
            if (input[7] >= 0.89682376) {
                var158 = -0.16307016;
            } else {
                var158 = -0.11321458;
            }
        } else {
            var158 = 0.13227814;
        }
    }
    double var159;
    if (input[13] >= -7.422743) {
        if (input[1] >= 0.89908427) {
            if (input[7] >= 0.9832399) {
                var159 = 0.10230802;
            } else {
                var159 = -0.13854064;
            }
        } else {
            if (input[0] >= 0.9317583) {
                var159 = 0.12952702;
            } else {
                var159 = -0.11902483;
            }
        }
    } else {
        if (input[9] >= 9.35779) {
            if (input[15] >= -15.409822) {
                var159 = -0.16161409;
            } else {
                var159 = 0.1344355;
            }
        } else {
            if (input[10] >= -8.19297) {
                var159 = 0.1640235;
            } else {
                var159 = -0.14388876;
            }
        }
    }
    double var160;
    if (input[13] >= -7.8774366) {
        if (input[0] >= 0.9405689) {
            if (input[1] >= 3.341219) {
                var160 = -0.12692265;
            } else {
                var160 = 0.07989116;
            }
        } else {
            if (input[7] >= 0.89682376) {
                var160 = -0.15666777;
            } else {
                var160 = -0.09421517;
            }
        }
    } else {
        if (input[9] >= 9.35779) {
            if (input[15] >= -15.409822) {
                var160 = -0.15995732;
            } else {
                var160 = 0.12592809;
            }
        } else {
            if (input[11] >= -8.235176) {
                var160 = 0.16825536;
            } else {
                var160 = -0.120672256;
            }
        }
    }
    double var161;
    if (input[15] >= -5.612361) {
        if (input[3] >= -4.4155183) {
            if (input[0] >= 0.86864233) {
                var161 = 0.0571792;
            } else {
                var161 = -0.14524348;
            }
        } else {
            if (input[2] >= -0.07150069) {
                var161 = -0.15146889;
            } else {
                var161 = 0.033998184;
            }
        }
    } else {
        if (input[8] >= 8.050973) {
            if (input[15] >= -20.950224) {
                var161 = -0.14436945;
            } else {
                var161 = 0.17273448;
            }
        } else {
            if (input[19] >= 5.1113777) {
                var161 = 0.014423072;
            } else {
                var161 = 0.1527439;
            }
        }
    }
    double var162;
    if (input[13] >= -7.8774366) {
        if (input[6] >= 3.492358) {
            if (input[10] >= -5.361889) {
                var162 = 0.15369356;
            } else {
                var162 = -0.09747256;
            }
        } else {
            if (input[5] >= 0.6174936) {
                var162 = -0.12795678;
            } else {
                var162 = -0.0080365185;
            }
        }
    } else {
        if (input[9] >= 9.35779) {
            if (input[15] >= -15.409822) {
                var162 = -0.1537296;
            } else {
                var162 = 0.10929909;
            }
        } else {
            if (input[10] >= -8.390814) {
                var162 = 0.15712872;
            } else {
                var162 = -0.12528531;
            }
        }
    }
    double var163;
    if (input[0] >= 0.92937016) {
        if (input[10] >= -6.8545766) {
            if (input[4] >= 0.50352967) {
                var163 = 0.1513521;
            } else {
                var163 = 0.024653928;
            }
        } else {
            if (input[15] >= -8.396374) {
                var163 = -0.14374048;
            } else {
                var163 = -0.0033236782;
            }
        }
    } else {
        if (input[7] >= 0.77557373) {
            if (input[11] >= -1.2667068) {
                var163 = 0.14380361;
            } else {
                var163 = -0.15764584;
            }
        } else {
            if (input[18] >= 0.010639638) {
                var163 = 0.14389588;
            } else {
                var163 = -0.12405727;
            }
        }
    }
    double var164;
    if (input[15] >= -9.972908) {
        if (input[6] >= 3.492358) {
            if (input[10] >= -5.361889) {
                var164 = 0.13266478;
            } else {
                var164 = -0.08751942;
            }
        } else {
            if (input[0] >= 0.9897715) {
                var164 = 0.1396794;
            } else {
                var164 = -0.09008881;
            }
        }
    } else {
        if (input[9] >= 9.35779) {
            if (input[15] >= -15.409822) {
                var164 = -0.14725028;
            } else {
                var164 = 0.07632348;
            }
        } else {
            if (input[19] >= 17.889889) {
                var164 = -0.108229525;
            } else {
                var164 = 0.1566187;
            }
        }
    }
    double var165;
    if (input[0] >= 0.90638494) {
        if (input[10] >= -6.8545766) {
            if (input[1] >= 0.90060776) {
                var165 = 0.0037527182;
            } else {
                var165 = 0.12297568;
            }
        } else {
            if (input[0] >= 0.97953343) {
                var165 = 0.04821222;
            } else {
                var165 = -0.13015838;
            }
        }
    } else {
        if (input[2] >= -0.34144294) {
            if (input[8] >= 1.5623791) {
                var165 = -0.14757696;
            } else {
                var165 = -0.022609742;
            }
        } else {
            if (input[19] >= 1.8903804) {
                var165 = 0.19846162;
            } else {
                var165 = -0.10670944;
            }
        }
    }
    double var166;
    if (input[0] >= 0.987028) {
        if (input[12] >= -0.3155142) {
            var166 = 0.15367338;
        } else {
            if (input[6] >= 2.1703882) {
                var166 = 0.06983236;
            } else {
                var166 = -0.1136354;
            }
        }
    } else {
        if (input[1] >= 0.905066) {
            if (input[15] >= -15.116668) {
                var166 = -0.10656675;
            } else {
                var166 = 0.13040873;
            }
        } else {
            if (input[0] >= 0.86876845) {
                var166 = 0.06898025;
            } else {
                var166 = -0.14899673;
            }
        }
    }
    double var167;
    if (input[0] >= 0.987028) {
        if (input[12] >= -0.3155142) {
            var167 = 0.15138172;
        } else {
            var167 = -0.031850863;
        }
    } else {
        if (input[1] >= 0.905066) {
            if (input[3] >= -2.749218) {
                var167 = 0.05547699;
            } else {
                var167 = -0.1073561;
            }
        } else {
            if (input[0] >= 0.86876845) {
                var167 = 0.056961846;
            } else {
                var167 = -0.1465756;
            }
        }
    }
    double var168;
    if (input[15] >= -11.357504) {
        if (input[11] >= -4.355957) {
            if (input[0] >= 0.86864233) {
                var168 = 0.059946742;
            } else {
                var168 = -0.12116545;
            }
        } else {
            if (input[5] >= 0.62702936) {
                var168 = -0.1279884;
            } else {
                var168 = 0.004912348;
            }
        }
    } else {
        if (input[9] >= 9.482973) {
            if (input[15] >= -15.409822) {
                var168 = -0.11561436;
            } else {
                var168 = 0.056703035;
            }
        } else {
            if (input[10] >= -7.314624) {
                var168 = 0.15457709;
            } else {
                var168 = -0.029635629;
            }
        }
    }
    double var169;
    if (input[4] >= 0.75246346) {
        if (input[10] >= -7.9471173) {
            var169 = 0.1475481;
        } else {
            var169 = -0.050997082;
        }
    } else {
        if (input[7] >= 0.8969954) {
            if (input[0] >= 0.97515273) {
                var169 = 0.022475678;
            } else {
                var169 = -0.10363679;
            }
        } else {
            if (input[5] >= 2.2338867) {
                var169 = -0.12927967;
            } else {
                var169 = 0.09138194;
            }
        }
    }
    double var170;
    if (input[0] >= 0.90638494) {
        if (input[10] >= -6.8545766) {
            if (input[4] >= 0.550126) {
                var170 = 0.13561542;
            } else {
                var170 = 0.015500808;
            }
        } else {
            if (input[0] >= 0.97953343) {
                var170 = 0.052788895;
            } else {
                var170 = -0.1267113;
            }
        }
    } else {
        if (input[2] >= 0.347467) {
            if (input[6] >= 9.877701) {
                var170 = 0.041252077;
            } else {
                var170 = -0.15127307;
            }
        } else {
            if (input[20] >= 0.5054728) {
                var170 = 0.33343932;
            } else {
                var170 = -0.10449089;
            }
        }
    }
    double var171;
    if (input[15] >= -12.262848) {
        if (input[6] >= 3.492358) {
            if (input[10] >= -3.6217527) {
                var171 = 0.14009677;
            } else {
                var171 = -0.019928604;
            }
        } else {
            if (input[5] >= 0.6174936) {
                var171 = -0.097040765;
            } else {
                var171 = 0.008114231;
            }
        }
    } else {
        if (input[9] >= 9.482973) {
            if (input[19] >= 3.8670945) {
                var171 = 0.049830522;
            } else {
                var171 = -0.09415995;
            }
        } else {
            if (input[10] >= -7.314624) {
                var171 = 0.14899419;
            } else {
                var171 = -0.032559436;
            }
        }
    }
    double var172;
    if (input[0] >= 0.90638494) {
        if (input[19] >= 4.4334173) {
            if (input[4] >= 0.4014036) {
                var172 = 0.056682102;
            } else {
                var172 = -0.1400513;
            }
        } else {
            if (input[1] >= 3.4469686) {
                var172 = -0.056187417;
            } else {
                var172 = 0.08774541;
            }
        }
    } else {
        if (input[20] >= 0.81136775) {
            if (input[10] >= -5.07837) {
                var172 = 0.21791425;
            } else {
                var172 = -0.08705547;
            }
        } else {
            if (input[8] >= 1.5623791) {
                var172 = -0.1493414;
            } else {
                var172 = 0.023013337;
            }
        }
    }
    double var173;
    if (input[4] >= 0.75246346) {
        if (input[11] >= -7.60951) {
            var173 = 0.1399913;
        } else {
            var173 = -0.00070988183;
        }
    } else {
        if (input[7] >= 0.8969954) {
            if (input[0] >= 0.947363) {
                var173 = -0.022955872;
            } else {
                var173 = -0.1316482;
            }
        } else {
            if (input[5] >= 2.2338867) {
                var173 = -0.122179456;
            } else {
                var173 = 0.076456144;
            }
        }
    }
    double var174;
    if (input[10] >= -6.8545766) {
        if (input[16] >= 0.06357859) {
            if (input[0] >= 0.8742931) {
                var174 = 0.062466715;
            } else {
                var174 = -0.103830464;
            }
        } else {
            if (input[10] >= -3.7876582) {
                var174 = 0.0073512234;
            } else {
                var174 = -0.15941313;
            }
        }
    } else {
        if (input[0] >= 0.97953343) {
            if (input[21] >= 0.2922414) {
                var174 = -0.08614099;
            } else {
                var174 = 0.12690939;
            }
        } else {
            if (input[15] >= -16.218702) {
                var174 = -0.15180658;
            } else {
                var174 = 0.08196002;
            }
        }
    }
    double var175;
    if (input[0] >= 0.987028) {
        if (input[12] >= -0.3155142) {
            var175 = 0.14123525;
        } else {
            var175 = -0.054670636;
        }
    } else {
        if (input[7] >= 0.8969954) {
            if (input[3] >= -3.9147682) {
                var175 = 0.016385626;
            } else {
                var175 = -0.104186155;
            }
        } else {
            if (input[13] >= -2.689778) {
                var175 = -0.083620906;
            } else {
                var175 = 0.080568366;
            }
        }
    }
    double var176;
    if (input[6] >= 3.4008908) {
        if (input[2] >= 14.261819) {
            if (input[10] >= -3.9896784) {
                var176 = -0.0051491046;
            } else {
                var176 = -0.16764224;
            }
        } else {
            if (input[17] >= 7.18511) {
                var176 = -0.07655949;
            } else {
                var176 = 0.11498352;
            }
        }
    } else {
        if (input[15] >= -12.262848) {
            if (input[2] >= 3.203824) {
                var176 = -0.11718649;
            } else {
                var176 = -0.011833384;
            }
        } else {
            if (input[11] >= -7.6387057) {
                var176 = 0.12813823;
            } else {
                var176 = -0.020846386;
            }
        }
    }
    double var177;
    if (input[0] >= 0.8688638) {
        if (input[10] >= -6.8545766) {
            if (input[1] >= 0.73670286) {
                var177 = -0.017146153;
            } else {
                var177 = 0.07238814;
            }
        } else {
            if (input[0] >= 0.97953343) {
                var177 = 0.053643662;
            } else {
                var177 = -0.12733693;
            }
        }
    } else {
        if (input[8] >= 1.2034702) {
            var177 = -0.13996522;
        } else {
            var177 = 0.038957067;
        }
    }
    double var178;
    if (input[0] >= 0.9539841) {
        if (input[1] >= 3.341219) {
            if (input[4] >= 0.51422) {
                var178 = 0.10475463;
            } else {
                var178 = -0.14789872;
            }
        } else {
            if (input[19] >= 2.5334818) {
                var178 = 0.0020537912;
            } else {
                var178 = 0.13668482;
            }
        }
    } else {
        if (input[11] >= -3.1226327) {
            if (input[6] >= 0.40209353) {
                var178 = 0.089736775;
            } else {
                var178 = -0.1268243;
            }
        } else {
            if (input[21] >= 0.67283887) {
                var178 = 0.032680575;
            } else {
                var178 = -0.12861738;
            }
        }
    }
    double var179;
    if (input[0] >= 0.8688638) {
        if (input[12] >= -0.16397202) {
            if (input[11] >= -4.355988) {
                var179 = 0.1060974;
            } else {
                var179 = -0.061066214;
            }
        } else {
            if (input[16] >= 0.21044567) {
                var179 = 0.043703683;
            } else {
                var179 = -0.09883758;
            }
        }
    } else {
        if (input[8] >= 1.2034702) {
            var179 = -0.13700545;
        } else {
            var179 = 0.04761572;
        }
    }
    double var180;
    if (input[0] >= 0.9539841) {
        if (input[1] >= 3.461899) {
            if (input[4] >= 0.51422) {
                var180 = 0.09843688;
            } else {
                var180 = -0.13975409;
            }
        } else {
            if (input[19] >= 2.5334818) {
                var180 = 0.0075707035;
            } else {
                var180 = 0.12505284;
            }
        }
    } else {
        if (input[3] >= -6.778433) {
            if (input[20] >= 0.37646458) {
                var180 = 0.059924822;
            } else {
                var180 = -0.07920714;
            }
        } else {
            if (input[15] >= -14.59553) {
                var180 = -0.166979;
            } else {
                var180 = 0.052129205;
            }
        }
    }
    double var181;
    if (input[15] >= -11.357504) {
        if (input[21] >= 0.710727) {
            var181 = -0.16265368;
        } else {
            if (input[21] >= 0.6929146) {
                var181 = 0.18992656;
            } else {
                var181 = -0.011301024;
            }
        }
    } else {
        if (input[9] >= 9.482973) {
            var181 = -0.017603751;
        } else {
            if (input[10] >= -7.2893944) {
                var181 = 0.13555716;
            } else {
                var181 = 0.0014369008;
            }
        }
    }
    double var182;
    if (input[9] >= 2.5265064) {
        if (input[13] >= -5.1298523) {
            if (input[7] >= 0.60807556) {
                var182 = -0.081339754;
            } else {
                var182 = 0.1670458;
            }
        } else {
            if (input[13] >= -5.2424) {
                var182 = 0.15354283;
            } else {
                var182 = -0.0017783078;
            }
        }
    } else {
        if (input[9] >= 2.4525857) {
            if (input[10] >= -2.97377) {
                var182 = 0.020344706;
            } else {
                var182 = 0.312552;
            }
        } else {
            if (input[6] >= 2.5653217) {
                var182 = 0.08425455;
            } else {
                var182 = -0.07424148;
            }
        }
    }
    double var183;
    if (input[4] >= 0.40199825) {
        if (input[3] >= -4.2908773) {
            if (input[2] >= 0.60949254) {
                var183 = 0.18603389;
            } else {
                var183 = 0.0060625398;
            }
        } else {
            if (input[14] >= 0.57444227) {
                var183 = -0.10369744;
            } else {
                var183 = 0.08971783;
            }
        }
    } else {
        if (input[19] >= 4.4334173) {
            if (input[15] >= -12.810282) {
                var183 = -0.15959212;
            } else {
                var183 = 0.0752641;
            }
        } else {
            if (input[8] >= 4.630652) {
                var183 = -0.065213524;
            } else {
                var183 = 0.062222864;
            }
        }
    }
    double var184;
    if (input[19] >= 0.6348717) {
        if (input[9] >= 1.4000335) {
            if (input[0] >= 0.8743241) {
                var184 = 0.015505159;
            } else {
                var184 = -0.13046107;
            }
        } else {
            if (input[13] >= -1.6804827) {
                var184 = -0.01638925;
            } else {
                var184 = 0.26153725;
            }
        }
    } else {
        if (input[0] >= 0.9785388) {
            var184 = 0.050612986;
        } else {
            if (input[4] >= 0.5259149) {
                var184 = -0.021610565;
            } else {
                var184 = -0.14103214;
            }
        }
    }
    double var185;
    if (input[16] >= 0.06357859) {
        if (input[10] >= -6.8545766) {
            if (input[18] >= 0.013241526) {
                var185 = 0.05340442;
            } else {
                var185 = -0.06943734;
            }
        } else {
            if (input[15] >= -8.396374) {
                var185 = -0.13976827;
            } else {
                var185 = 0.0015108048;
            }
        }
    } else {
        if (input[6] >= 3.0463982) {
            if (input[0] >= 0.9575359) {
                var185 = 0.10983271;
            } else {
                var185 = -0.05255271;
            }
        } else {
            if (input[7] >= 0.75711745) {
                var185 = -0.12423958;
            } else {
                var185 = 0.06592444;
            }
        }
    }
    double var186;
    if (input[12] >= -0.16397202) {
        if (input[12] >= -0.15429997) {
            if (input[10] >= -3.4001613) {
                var186 = 0.063097104;
            } else {
                var186 = -0.050537307;
            }
        } else {
            if (input[19] >= 1.836164) {
                var186 = 0.24586016;
            } else {
                var186 = -0.056198616;
            }
        }
    } else {
        if (input[20] >= 0.80660933) {
            if (input[20] >= 0.8196461) {
                var186 = -0.0012320939;
            } else {
                var186 = 0.17410429;
            }
        } else {
            if (input[6] >= 3.4318714) {
                var186 = 0.054310188;
            } else {
                var186 = -0.114823654;
            }
        }
    }
    double var187;
    if (input[5] >= 0.6174936) {
        if (input[18] >= 0.48149508) {
            if (input[16] >= 0.08471097) {
                var187 = 0.1484672;
            } else {
                var187 = -0.047945615;
            }
        } else {
            if (input[6] >= -0.18715888) {
                var187 = -0.08442769;
            } else {
                var187 = 0.07424544;
            }
        }
    } else {
        if (input[5] >= 0.25169927) {
            if (input[13] >= -2.3682141) {
                var187 = -0.04742294;
            } else {
                var187 = 0.15018095;
            }
        } else {
            if (input[19] >= 2.2138) {
                var187 = -0.10550682;
            } else {
                var187 = 0.053603105;
            }
        }
    }
    double var188;
    if (input[19] >= 0.6348717) {
        if (input[19] >= 0.77403235) {
            if (input[4] >= 0.051054165) {
                var188 = 0.015467066;
            } else {
                var188 = -0.082153484;
            }
        } else {
            if (input[9] >= 2.9008098) {
                var188 = -0.029361587;
            } else {
                var188 = 0.21435425;
            }
        }
    } else {
        if (input[2] >= 3.5935194) {
            var188 = 0.040446807;
        } else {
            if (input[4] >= 0.44068497) {
                var188 = -0.03382347;
            } else {
                var188 = -0.1343199;
            }
        }
    }
    double var189;
    if (input[16] >= 0.06357859) {
        if (input[10] >= -6.8545766) {
            if (input[5] >= 5.7135606) {
                var189 = -0.0578441;
            } else {
                var189 = 0.047759417;
            }
        } else {
            if (input[15] >= -8.396374) {
                var189 = -0.13318329;
            } else {
                var189 = 0.0057475604;
            }
        }
    } else {
        if (input[20] >= 0.3134906) {
            var189 = -0.13694151;
        } else {
            if (input[6] >= 0.7418438) {
                var189 = 0.03886631;
            } else {
                var189 = -0.116613716;
            }
        }
    }
    double var190;
    if (input[15] >= -16.004038) {
        if (input[21] >= 0.710727) {
            if (input[13] >= -7.8774366) {
                var190 = -0.15689701;
            } else {
                var190 = 0.036634404;
            }
        } else {
            if (input[21] >= 0.6929146) {
                var190 = 0.15299024;
            } else {
                var190 = -0.006889109;
            }
        }
    } else {
        var190 = 0.11353461;
    }
    double var191;
    if (input[9] >= 1.4000335) {
        if (input[0] >= 0.8743241) {
            if (input[19] >= 6.606451) {
                var191 = -0.08303906;
            } else {
                var191 = 0.019898735;
            }
        } else {
            var191 = -0.12689127;
        }
    } else {
        if (input[13] >= -2.718291) {
            if (input[1] >= -0.11595403) {
                var191 = -0.07843445;
            } else {
                var191 = 0.061013546;
            }
        } else {
            var191 = 0.2565279;
        }
    }
    double var192;
    if (input[12] >= -0.16397202) {
        if (input[12] >= -0.15429997) {
            if (input[18] >= 0.3415978) {
                var192 = 0.07161553;
            } else {
                var192 = -0.030784309;
            }
        } else {
            if (input[17] >= 4.450598) {
                var192 = -0.024032636;
            } else {
                var192 = 0.20185547;
            }
        }
    } else {
        if (input[20] >= 0.6518028) {
            if (input[7] >= 0.91489446) {
                var192 = -0.09053388;
            } else {
                var192 = 0.06269466;
            }
        } else {
            if (input[7] >= 0.9628025) {
                var192 = 0.010457413;
            } else {
                var192 = -0.1352241;
            }
        }
    }
    double var193;
    if (input[9] >= 1.4000335) {
        if (input[0] >= 0.8743241) {
            if (input[19] >= 6.606451) {
                var193 = -0.073817365;
            } else {
                var193 = 0.017285286;
            }
        } else {
            var193 = -0.12346953;
        }
    } else {
        if (input[13] >= -2.718291) {
            var193 = -0.011914483;
        } else {
            var193 = 0.23433323;
        }
    }
    double var194;
    if (input[19] >= 0.6348717) {
        if (input[19] >= 0.77403235) {
            if (input[4] >= 0.36517096) {
                var194 = 0.04294607;
            } else {
                var194 = -0.03042873;
            }
        } else {
            if (input[9] >= 2.9008098) {
                var194 = -0.032110266;
            } else {
                var194 = 0.17862292;
            }
        }
    } else {
        if (input[0] >= 0.9712405) {
            var194 = 0.025951497;
        } else {
            var194 = -0.11756275;
        }
    }
    double var195;
    if (input[16] >= 0.024123268) {
        if (input[12] >= -0.16397202) {
            if (input[10] >= -4.658445) {
                var195 = 0.06624426;
            } else {
                var195 = -0.05887821;
            }
        } else {
            if (input[20] >= 0.65657485) {
                var195 = 0.026783384;
            } else {
                var195 = -0.08008532;
            }
        }
    } else {
        var195 = -0.10833656;
    }
    double var196;
    if (input[15] >= -14.652536) {
        if (input[21] >= 0.710727) {
            if (input[13] >= -7.685627) {
                var196 = -0.15204798;
            } else {
                var196 = -0.009893009;
            }
        } else {
            if (input[7] >= 0.7820283) {
                var196 = -0.009702671;
            } else {
                var196 = 0.09525936;
            }
        }
    } else {
        var196 = 0.10178096;
    }
    double var197;
    if (input[5] >= 0.6174936) {
        if (input[16] >= 0.06977187) {
            if (input[14] >= 0.67829436) {
                var197 = 0.07764806;
            } else {
                var197 = -0.06768655;
            }
        } else {
            if (input[0] >= 0.9728553) {
                var197 = 0.01312771;
            } else {
                var197 = -0.14042489;
            }
        }
    } else {
        if (input[5] >= 0.321653) {
            if (input[6] >= -0.12735996) {
                var197 = 0.14451489;
            } else {
                var197 = -0.07021228;
            }
        } else {
            if (input[19] >= 2.092329) {
                var197 = -0.067315035;
            } else {
                var197 = 0.04730028;
            }
        }
    }
    double var198;
    if (input[0] >= 0.78989106) {
        if (input[9] >= 1.4000335) {
            if (input[0] >= 0.95958674) {
                var198 = 0.031144656;
            } else {
                var198 = -0.028338104;
            }
        } else {
            if (input[13] >= -2.718291) {
                var198 = 0.030741911;
            } else {
                var198 = 0.1926314;
            }
        }
    } else {
        var198 = -0.10884562;
    }
    double var199;
    if (input[19] >= 0.64196444) {
        if (input[9] >= 1.7018023) {
            if (input[12] >= -0.06412549) {
                var199 = -0.11978945;
            } else {
                var199 = 0.011059126;
            }
        } else {
            if (input[13] >= -1.6804827) {
                var199 = -0.03151255;
            } else {
                var199 = 0.14441347;
            }
        }
    } else {
        if (input[0] >= 0.96718305) {
            var199 = 0.010868375;
        } else {
            var199 = -0.110491745;
        }
    }
    double var200;
    if (input[15] >= -16.004038) {
        if (input[21] >= 0.710727) {
            if (input[13] >= -7.685627) {
                var200 = -0.14586158;
            } else {
                var200 = -0.0026532328;
            }
        } else {
            if (input[21] >= 0.6929146) {
                var200 = 0.12976341;
            } else {
                var200 = -0.004855276;
            }
        }
    } else {
        var200 = 0.10235723;
    }
    softmax((double[]){0 + (var1 + var2 + var3 + var4 + var5 + var6 + var7 + var8 + var9 + var10 + var11 + var12 + var13 + var14 + var15 + var16 + var17 + var18 + var19 + var20 + var21 + var22 + var23 + var24 + var25 + var26 + var27 + var28 + var29 + var30 + var31 + var32 + var33 + var34 + var35 + var36 + var37 + var38 + var39 + var40 + var41 + var42 + var43 + var44 + var45 + var46 + var47 + var48 + var49 + var50), 0 + (var51 + var52 + var53 + var54 + var55 + var56 + var57 + var58 + var59 + var60 + var61 + var62 + var63 + var64 + var65 + var66 + var67 + var68 + var69 + var70 + var71 + var72 + var73 + var74 + var75 + var76 + var77 + var78 + var79 + var80 + var81 + var82 + var83 + var84 + var85 + var86 + var87 + var88 + var89 + var90 + var91 + var92 + var93 + var94 + var95 + var96 + var97 + var98 + var99 + var100), 0 + (var101 + var102 + var103 + var104 + var105 + var106 + var107 + var108 + var109 + var110 + var111 + var112 + var113 + var114 + var115 + var116 + var117 + var118 + var119 + var120 + var121 + var122 + var123 + var124 + var125 + var126 + var127 + var128 + var129 + var130 + var131 + var132 + var133 + var134 + var135 + var136 + var137 + var138 + var139 + var140 + var141 + var142 + var143 + var144 + var145 + var146 + var147 + var148 + var149 + var150), 0 + (var151 + var152 + var153 + var154 + var155 + var156 + var157 + var158 + var159 + var160 + var161 + var162 + var163 + var164 + var165 + var166 + var167 + var168 + var169 + var170 + var171 + var172 + var173 + var174 + var175 + var176 + var177 + var178 + var179 + var180 + var181 + var182 + var183 + var184 + var185 + var186 + var187 + var188 + var189 + var190 + var191 + var192 + var193 + var194 + var195 + var196 + var197 + var198 + var199 + var200)}, 4, var0);
    
   // memcpy(output, var0, 4 * sizeof(double));
  for (int i = 0; i < 4; i++) {
    output[i] = var0[i];
  }
}
