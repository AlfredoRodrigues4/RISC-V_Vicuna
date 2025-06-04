//#include <math.h>
#include "model_m2cgen_editado.h"
#include <stdint.h>

int16_t argmax(int16_t *x, int16_t size) {
    int16_t max_index = 0;
    for (int16_t i = 1; i < size; ++i) {
        if (x[i] > x[max_index])
            max_index = i;
    }
    return max_index;
}

int16_t score(int16_t * input) {
    int16_t var1;
    if (input[2] >= 71) {
        if (input[17] >= 218) {
            if (input[13] >= -215) {
                var1 = -4;
            } else {
                var1 = -11;
            }
        } else {
            if (input[7] >= 61) {
                var1 = -11;
            } else {
                var1 = 28;
            }
        }
    } else {
        if (input[18] >= 26) {
            if (input[18] >= 32) {
                var1 = -11;
            } else {
                var1 = 9;
            }
        } else {
            if (input[11] >= -260) {
                var1 = 36;
            } else {
                var1 = 19;
            }
        }
    }
    int16_t var2;
    if (input[2] >= 88) {
        if (input[8] >= 173) {
            if (input[4] >= 0) {
                var2 = -10;
            } else {
                var2 = 3;
            }
        } else {
            if (input[7] >= 59) {
                var2 = -6;
            } else {
                var2 = 21;
            }
        }
    } else {
        if (input[4] >= 35) {
            if (input[3] >= -70) {
                var2 = 1;
            } else {
                var2 = -12;
            }
        } else {
            if (input[6] >= 181) {
                var2 = 0;
            } else {
                var2 = 20;
            }
        }
    }
    int16_t var3;
    if (input[17] >= 218) {
        if (input[2] >= 88) {
            if (input[0] >= 41) {
                var3 = -9;
            } else {
                var3 = 5;
            }
        } else {
            if (input[4] >= 25) {
                var3 = -8;
            } else {
                var3 = 10;
            }
        }
    } else {
        if (input[4] >= 27) {
            if (input[19] >= -24) {
                var3 = -9;
            } else {
                var3 = 17;
            }
        } else {
            if (input[6] >= 219) {
                var3 = 0;
            } else {
                var3 = 17;
            }
        }
    }
    int16_t var4;
    if (input[17] >= 218) {
        if (input[2] >= 63) {
            if (input[18] >= 14) {
                var4 = -10;
            } else {
                var4 = -3;
            }
        } else {
            if (input[4] >= 33) {
                var4 = -10;
            } else {
                var4 = 9;
            }
        }
    } else {
        if (input[4] >= 27) {
            if (input[14] >= 54) {
                var4 = 7;
            } else {
                var4 = -9;
            }
        } else {
            if (input[6] >= 281) {
                var4 = -1;
            } else {
                var4 = 14;
            }
        }
    }
    int16_t var5;
    if (input[17] >= 218) {
        if (input[2] >= 123) {
            if (input[0] >= 40) {
                var5 = -8;
            } else {
                var5 = 4;
            }
        } else {
            if (input[4] >= 25) {
                var5 = -7;
            } else {
                var5 = 6;
            }
        }
    } else {
        if (input[4] >= 27) {
            if (input[5] >= 254) {
                var5 = 8;
            } else {
                var5 = -8;
            }
        } else {
            if (input[6] >= 219) {
                var5 = 0;
            } else {
                var5 = 12;
            }
        }
    }
    int16_t var6;
    if (input[11] >= -261) {
        if (input[18] >= 32) {
            var6 = -10;
        } else {
            if (input[6] >= 217) {
                var6 = -1;
            } else {
                var6 = 11;
            }
        }
    } else {
        if (input[2] >= 136) {
            if (input[9] >= 154) {
                var6 = -8;
            } else {
                var6 = 7;
            }
        } else {
            if (input[4] >= 35) {
                var6 = -10;
            } else {
                var6 = 2;
            }
        }
    }
    int16_t var7;
    if (input[11] >= -261) {
        if (input[18] >= 26) {
            if (input[18] >= 32) {
                var7 = -10;
            } else {
                var7 = -1;
            }
        } else {
            if (input[6] >= 191) {
                var7 = 0;
            } else {
                var7 = 10;
            }
        }
    } else {
        if (input[18] >= 14) {
            if (input[6] >= -6) {
                var7 = -9;
            } else {
                var7 = 6;
            }
        } else {
            if (input[2] >= 245) {
                var7 = -6;
            } else {
                var7 = 3;
            }
        }
    }
    int16_t var8;
    if (input[17] >= 170) {
        if (input[11] >= -343) {
            if (input[19] >= 359) {
                var8 = 11;
            } else {
                var8 = -2;
            }
        } else {
            if (input[18] >= 14) {
                var8 = -10;
            } else {
                var8 = -3;
            }
        }
    } else {
        if (input[4] >= 30) {
            if (input[14] >= 57) {
                var8 = 6;
            } else {
                var8 = -9;
            }
        } else {
            if (input[6] >= 281) {
                var8 = -1;
            } else {
                var8 = 11;
            }
        }
    }
    int16_t var9;
    if (input[17] >= 170) {
        if (input[18] >= 31) {
            var9 = -10;
        } else {
            if (input[11] >= -343) {
                var9 = 2;
            } else {
                var9 = -5;
            }
        }
    } else {
        if (input[4] >= 30) {
            if (input[14] >= 57) {
                var9 = 4;
            } else {
                var9 = -8;
            }
        } else {
            if (input[6] >= 281) {
                var9 = -2;
            } else {
                var9 = 10;
            }
        }
    }
    int16_t var10;
    if (input[13] >= -164) {
        if (input[6] >= 188) {
            if (input[7] >= 51) {
                var10 = -8;
            } else {
                var10 = 12;
            }
        } else {
            if (input[9] >= 390) {
                var10 = -5;
            } else {
                var10 = 9;
            }
        }
    } else {
        if (input[4] >= 35) {
            if (input[6] >= 0) {
                var10 = -10;
            } else {
                var10 = 3;
            }
        } else {
            if (input[2] >= 247) {
                var10 = -5;
            } else {
                var10 = 2;
            }
        }
    }
    int16_t var11;
    if (input[17] >= 170) {
        if (input[18] >= 31) {
            var11 = -10;
        } else {
            if (input[11] >= -343) {
                var11 = 2;
            } else {
                var11 = -4;
            }
        }
    } else {
        if (input[4] >= 30) {
            if (input[10] >= -79) {
                var11 = 4;
            } else {
                var11 = -8;
            }
        } else {
            if (input[6] >= 281) {
                var11 = -1;
            } else {
                var11 = 9;
            }
        }
    }
    int16_t var12;
    if (input[4] >= 0) {
        if (input[6] >= 0) {
            if (input[4] >= 35) {
                var12 = -9;
            } else {
                var12 = -1;
            }
        } else {
            if (input[21] >= 23) {
                var12 = -1;
            } else {
                var12 = 11;
            }
        }
    } else {
        if (input[5] >= 400) {
            if (input[2] >= 222) {
                var12 = -8;
            } else {
                var12 = 7;
            }
        } else {
            if (input[8] >= 427) {
                var12 = 19;
            } else {
                var12 = 7;
            }
        }
    }
    int16_t var13;
    if (input[17] >= 170) {
        if (input[19] >= 264) {
            if (input[13] >= -445) {
                var13 = 4;
            } else {
                var13 = -10;
            }
        } else {
            if (input[18] >= 12) {
                var13 = -7;
            } else {
                var13 = 0;
            }
        }
    } else {
        if (input[4] >= 27) {
            if (input[16] >= 5) {
                var13 = 4;
            } else {
                var13 = -9;
            }
        } else {
            if (input[6] >= 281) {
                var13 = 0;
            } else {
                var13 = 9;
            }
        }
    }
    int16_t var14;
    if (input[17] >= 170) {
        if (input[18] >= 31) {
            var14 = -9;
        } else {
            if (input[0] >= 61) {
                var14 = 6;
            } else {
                var14 = -1;
            }
        }
    } else {
        if (input[4] >= 27) {
            if (input[12] >= -11) {
                var14 = -5;
            } else {
                var14 = 9;
            }
        } else {
            if (input[6] >= 281) {
                var14 = 0;
            } else {
                var14 = 8;
            }
        }
    }
    int16_t var15;
    if (input[4] >= 0) {
        if (input[6] >= 11) {
            if (input[12] >= -9) {
                var15 = -5;
            } else {
                var15 = 0;
            }
        } else {
            if (input[20] >= 47) {
                var15 = -9;
            } else {
                var15 = 6;
            }
        }
    } else {
        if (input[5] >= 206) {
            if (input[2] >= 222) {
                var15 = -8;
            } else {
                var15 = 7;
            }
        } else {
            if (input[8] >= 427) {
                var15 = 20;
            } else {
                var15 = 6;
            }
        }
    }
    int16_t var16;
    if (input[17] >= 170) {
        if (input[19] >= 264) {
            if (input[13] >= -445) {
                var16 = 3;
            } else {
                var16 = -9;
            }
        } else {
            if (input[19] >= 37) {
                var16 = -4;
            } else {
                var16 = 4;
            }
        }
    } else {
        if (input[4] >= 27) {
            if (input[14] >= 53) {
                var16 = 4;
            } else {
                var16 = -8;
            }
        } else {
            if (input[6] >= 281) {
                var16 = 0;
            } else {
                var16 = 8;
            }
        }
    }
    int16_t var17;
    if (input[4] >= -2) {
        if (input[6] >= 187) {
            if (input[16] >= 1) {
                var17 = -8;
            } else {
                var17 = 7;
            }
        } else {
            if (input[0] >= 57) {
                var17 = 2;
            } else {
                var17 = -3;
            }
        }
    } else {
        if (input[5] >= 165) {
            if (input[2] >= 222) {
                var17 = -7;
            } else {
                var17 = 6;
            }
        } else {
            if (input[8] >= 427) {
                var17 = 20;
            } else {
                var17 = 7;
            }
        }
    }
    int16_t var18;
    if (input[18] >= 32) {
        if (input[21] >= 6) {
            var18 = -9;
        } else {
            var18 = 0;
        }
    } else {
        if (input[16] >= 1) {
            if (input[16] >= 4) {
                var18 = 1;
            } else {
                var18 = -4;
            }
        } else {
            if (input[4] >= 26) {
                var18 = -4;
            } else {
                var18 = 10;
            }
        }
    }
    int16_t var19;
    if (input[17] >= 170) {
        if (input[18] >= 31) {
            var19 = -9;
        } else {
            if (input[0] >= 61) {
                var19 = 5;
            } else {
                var19 = -1;
            }
        }
    } else {
        if (input[16] >= -1) {
            if (input[6] >= 159) {
                var19 = 0;
            } else {
                var19 = 8;
            }
        } else {
            if (input[19] >= 67) {
                var19 = -13;
            } else {
                var19 = 5;
            }
        }
    }
    int16_t var20;
    if (input[13] >= -314) {
        if (input[15] >= -321) {
            if (input[0] >= 60) {
                var20 = 4;
            } else {
                var20 = -1;
            }
        } else {
            if (input[0] >= 61) {
                var20 = 25;
            } else {
                var20 = 6;
            }
        }
    } else {
        if (input[14] >= 39) {
            if (input[6] >= 186) {
                var20 = -9;
            } else {
                var20 = 6;
            }
        } else {
            if (input[10] >= -359) {
                var20 = 0;
            } else {
                var20 = -9;
            }
        }
    }
    int16_t var21;
    if (input[18] >= 13) {
        if (input[14] >= 54) {
            if (input[8] >= 306) {
                var21 = -7;
            } else {
                var21 = 8;
            }
        } else {
            if (input[6] >= -6) {
                var21 = -5;
            } else {
                var21 = 4;
            }
        }
    } else {
        if (input[9] >= 433) {
            if (input[14] >= 26) {
                var21 = 13;
            } else {
                var21 = -1;
            }
        } else {
            if (input[1] >= 263) {
                var21 = 8;
            } else {
                var21 = -1;
            }
        }
    }
    int16_t var22;
    if (input[10] >= -93) {
        if (input[6] >= 285) {
            if (input[5] >= 36) {
                var22 = 6;
            } else {
                var22 = -8;
            }
        } else {
            if (input[15] >= -261) {
                var22 = 10;
            } else {
                var22 = 1;
            }
        }
    } else {
        if (input[10] >= -95) {
            var22 = -22;
        } else {
            if (input[21] >= 5) {
                var22 = 0;
            } else {
                var22 = 12;
            }
        }
    }
    int16_t var23;
    if (input[18] >= 32) {
        if (input[21] >= 7) {
            var23 = -9;
        } else {
            var23 = 0;
        }
    } else {
        if (input[16] >= 1) {
            if (input[16] >= 4) {
                var23 = 1;
            } else {
                var23 = -4;
            }
        } else {
            if (input[4] >= 26) {
                var23 = -3;
            } else {
                var23 = 9;
            }
        }
    }
    int16_t var24;
    if (input[4] >= -2) {
        if (input[0] >= 61) {
            if (input[14] >= 31) {
                var24 = 6;
            } else {
                var24 = -7;
            }
        } else {
            if (input[5] >= 4) {
                var24 = -2;
            } else {
                var24 = 3;
            }
        }
    } else {
        if (input[5] >= 165) {
            if (input[2] >= 194) {
                var24 = -6;
            } else {
                var24 = 5;
            }
        } else {
            if (input[11] >= -538) {
                var24 = 9;
            } else {
                var24 = -6;
            }
        }
    }
    int16_t var25;
    if (input[19] >= 22) {
        if (input[19] >= 254) {
            if (input[13] >= -445) {
                var25 = 3;
            } else {
                var25 = -9;
            }
        } else {
            if (input[10] >= -93) {
                var25 = 6;
            } else {
                var25 = -3;
            }
        }
    } else {
        if (input[2] >= 173) {
            var25 = -3;
        } else {
            if (input[12] >= -2) {
                var25 = -1;
            } else {
                var25 = 9;
            }
        }
    }
    int16_t var26;
    if (input[18] >= 32) {
        if (input[21] >= 8) {
            var26 = -9;
        } else {
            var26 = -1;
        }
    } else {
        if (input[0] >= 60) {
            if (input[10] >= -479) {
                var26 = 4;
            } else {
                var26 = -9;
            }
        } else {
            if (input[9] >= 494) {
                var26 = 6;
            } else {
                var26 = -2;
            }
        }
    }
    int16_t var27;
    if (input[21] >= 5) {
        if (input[20] >= 15) {
            if (input[17] >= 173) {
                var27 = 0;
            } else {
                var27 = 7;
            }
        } else {
            if (input[6] >= 0) {
                var27 = -6;
            } else {
                var27 = 8;
            }
        }
    } else {
        if (input[7] >= 59) {
            var27 = 1;
        } else {
            var27 = 12;
        }
    }
    int16_t var28;
    if (input[19] >= 22) {
        if (input[19] >= 286) {
            if (input[2] >= 686) {
                var28 = 12;
            } else {
                var28 = 1;
            }
        } else {
            if (input[0] >= 60) {
                var28 = 1;
            } else {
                var28 = -3;
            }
        }
    } else {
        if (input[6] >= 113) {
            if (input[16] >= 8) {
                var28 = 4;
            } else {
                var28 = -3;
            }
        } else {
            var28 = 8;
        }
    }
    int16_t var29;
    if (input[4] >= -2) {
        if (input[0] >= 61) {
            if (input[13] >= -313) {
                var29 = 8;
            } else {
                var29 = -1;
            }
        } else {
            if (input[5] >= 4) {
                var29 = -2;
            } else {
                var29 = 3;
            }
        }
    } else {
        if (input[5] >= 207) {
            if (input[20] >= 45) {
                var29 = -6;
            } else {
                var29 = 0;
            }
        } else {
            if (input[14] >= 54) {
                var29 = 0;
            } else {
                var29 = 11;
            }
        }
    }
    int16_t var30;
    if (input[10] >= -93) {
        if (input[4] >= 32) {
            var30 = -3;
        } else {
            if (input[6] >= 417) {
                var30 = 0;
            } else {
                var30 = 9;
            }
        }
    } else {
        if (input[10] >= -95) {
            if (input[10] >= -94) {
                var30 = -3;
            } else {
                var30 = -22;
            }
        } else {
            if (input[16] >= 1) {
                var30 = 0;
            } else {
                var30 = 6;
            }
        }
    }
    int16_t var31;
    if (input[18] >= 32) {
        if (input[21] >= 8) {
            var31 = -8;
        } else {
            var31 = -1;
        }
    } else {
        if (input[7] >= 62) {
            if (input[6] >= 114) {
                var31 = -2;
            } else {
                var31 = 12;
            }
        } else {
            if (input[16] >= 1) {
                var31 = 0;
            } else {
                var31 = 5;
            }
        }
    }
    int16_t var32;
    if (input[21] >= 5) {
        if (input[12] >= -8) {
            if (input[13] >= -164) {
                var32 = 2;
            } else {
                var32 = -5;
            }
        } else {
            if (input[21] >= 32) {
                var32 = -2;
            } else {
                var32 = 4;
            }
        }
    } else {
        if (input[7] >= 57) {
            if (input[1] >= -28) {
                var32 = -2;
            } else {
                var32 = 6;
            }
        } else {
            var32 = 11;
        }
    }
    int16_t var33;
    if (input[2] >= 913) {
        if (input[5] >= 335) {
            var33 = -5;
        } else {
            if (input[18] >= 10) {
                var33 = 18;
            } else {
                var33 = 3;
            }
        }
    } else {
        if (input[6] >= 187) {
            if (input[16] >= 1) {
                var33 = -6;
            } else {
                var33 = 4;
            }
        } else {
            if (input[0] >= 57) {
                var33 = 2;
            } else {
                var33 = -2;
            }
        }
    }
    int16_t var34;
    if (input[17] >= 170) {
        if (input[20] >= 24) {
            if (input[18] >= 14) {
                var34 = -3;
            } else {
                var34 = 3;
            }
        } else {
            if (input[20] >= 24) {
                var34 = -16;
            } else {
                var34 = -1;
            }
        }
    } else {
        if (input[0] >= 29) {
            if (input[9] >= 86) {
                var34 = 7;
            } else {
                var34 = -2;
            }
        } else {
            if (input[17] >= 116) {
                var34 = -17;
            } else {
                var34 = 6;
            }
        }
    }
    int16_t var35;
    if (input[18] >= 32) {
        if (input[11] >= -488) {
            var35 = -8;
        } else {
            var35 = -2;
        }
    } else {
        if (input[7] >= 62) {
            if (input[3] >= -499) {
                var35 = 9;
            } else {
                var35 = -5;
            }
        } else {
            if (input[11] >= -136) {
                var35 = 4;
            } else {
                var35 = 0;
            }
        }
    }
    int16_t var36;
    if (input[21] >= 5) {
        if (input[20] >= 15) {
            if (input[12] >= -4) {
                var36 = 6;
            } else {
                var36 = 0;
            }
        } else {
            if (input[13] >= -100) {
                var36 = 5;
            } else {
                var36 = -6;
            }
        }
    } else {
        if (input[7] >= 57) {
            var36 = 3;
        } else {
            var36 = 10;
        }
    }
    int16_t var37;
    if (input[13] >= -445) {
        if (input[0] >= 60) {
            if (input[1] >= 604) {
                var37 = 12;
            } else {
                var37 = 1;
            }
        } else {
            if (input[3] >= -665) {
                var37 = -1;
            } else {
                var37 = 15;
            }
        }
    } else {
        if (input[19] >= 213) {
            var37 = -8;
        } else {
            if (input[19] >= 210) {
                var37 = 8;
            } else {
                var37 = -5;
            }
        }
    }
    int16_t var38;
    if (input[19] >= 22) {
        if (input[19] >= 254) {
            if (input[9] >= 209) {
                var38 = 0;
            } else {
                var38 = 6;
            }
        } else {
            if (input[12] >= -9) {
                var38 = -4;
            } else {
                var38 = 0;
            }
        }
    } else {
        if (input[6] >= 113) {
            var38 = 0;
        } else {
            var38 = 8;
        }
    }
    int16_t var39;
    if (input[21] >= 5) {
        if (input[12] >= -8) {
            if (input[13] >= -164) {
                var39 = 1;
            } else {
                var39 = -4;
            }
        } else {
            if (input[21] >= 32) {
                var39 = -2;
            } else {
                var39 = 3;
            }
        }
    } else {
        if (input[7] >= 59) {
            var39 = 1;
        } else {
            var39 = 9;
        }
    }
    int16_t var40;
    if (input[17] >= 170) {
        if (input[20] >= 24) {
            if (input[14] >= 38) {
                var40 = 4;
            } else {
                var40 = -1;
            }
        } else {
            if (input[20] >= 24) {
                var40 = -12;
            } else {
                var40 = -1;
            }
        }
    } else {
        if (input[0] >= 29) {
            if (input[8] >= 77) {
                var40 = 7;
            } else {
                var40 = -2;
            }
        } else {
            if (input[8] >= 104) {
                var40 = -13;
            } else {
                var40 = 5;
            }
        }
    }
    int16_t var41;
    if (input[18] >= 32) {
        var41 = -7;
    } else {
        if (input[21] >= 71) {
            if (input[2] >= 60) {
                var41 = -7;
            } else {
                var41 = 0;
            }
        } else {
            if (input[21] >= 52) {
                var41 = 6;
            } else {
                var41 = 0;
            }
        }
    }
    int16_t var42;
    if (input[6] >= 116) {
        if (input[4] >= 7) {
            if (input[4] >= 11) {
                var42 = -1;
            } else {
                var42 = 7;
            }
        } else {
            if (input[4] >= -2) {
                var42 = -9;
            } else {
                var42 = 0;
            }
        }
    } else {
        if (input[21] >= 13) {
            if (input[7] >= 61) {
                var42 = 6;
            } else {
                var42 = 0;
            }
        } else {
            if (input[18] >= 13) {
                var42 = 0;
            } else {
                var42 = 9;
            }
        }
    }
    int16_t var43;
    if (input[2] >= 913) {
        if (input[1] >= 29) {
            if (input[5] >= 66) {
                var43 = -2;
            } else {
                var43 = 6;
            }
        } else {
            var43 = 11;
        }
    } else {
        if (input[6] >= 187) {
            if (input[1] >= -42) {
                var43 = -5;
            } else {
                var43 = 5;
            }
        } else {
            if (input[6] >= 184) {
                var43 = 8;
            } else {
                var43 = 0;
            }
        }
    }
    int16_t var44;
    if (input[19] >= 22) {
        if (input[19] >= 355) {
            if (input[15] >= -389) {
                var44 = 4;
            } else {
                var44 = -6;
            }
        } else {
            if (input[0] >= 60) {
                var44 = 1;
            } else {
                var44 = -2;
            }
        }
    } else {
        if (input[6] >= 113) {
            var44 = 0;
        } else {
            var44 = 7;
        }
    }
    int16_t var45;
    if (input[21] >= 5) {
        if (input[20] >= 15) {
            if (input[14] >= 53) {
                var45 = 5;
            } else {
                var45 = 0;
            }
        } else {
            if (input[13] >= -100) {
                var45 = 5;
            } else {
                var45 = -5;
            }
        }
    } else {
        if (input[7] >= 57) {
            var45 = 2;
        } else {
            var45 = 8;
        }
    }
    int16_t var46;
    if (input[17] >= 170) {
        if (input[15] >= -326) {
            if (input[8] >= 278) {
                var46 = -3;
            } else {
                var46 = 0;
            }
        } else {
            if (input[18] >= 21) {
                var46 = -6;
            } else {
                var46 = 3;
            }
        }
    } else {
        if (input[0] >= 29) {
            if (input[1] >= 203) {
                var46 = -3;
            } else {
                var46 = 6;
            }
        } else {
            if (input[17] >= 116) {
                var46 = -10;
            } else {
                var46 = 5;
            }
        }
    }
    int16_t var47;
    if (input[18] >= 31) {
        if (input[17] >= 165) {
            var47 = -7;
        } else {
            var47 = 0;
        }
    } else {
        if (input[7] >= 62) {
            if (input[6] >= 114) {
                var47 = -2;
            } else {
                var47 = 9;
            }
        } else {
            if (input[16] >= 1) {
                var47 = 0;
            } else {
                var47 = 4;
            }
        }
    }
    int16_t var48;
    if (input[21] >= 5) {
        if (input[12] >= -8) {
            if (input[19] >= 180) {
                var48 = 1;
            } else {
                var48 = -4;
            }
        } else {
            if (input[21] >= 32) {
                var48 = -1;
            } else {
                var48 = 2;
            }
        }
    } else {
        if (input[6] >= 107) {
            var48 = 1;
        } else {
            var48 = 8;
        }
    }
    int16_t var49;
    if (input[17] >= 170) {
        if (input[6] >= 187) {
            if (input[19] >= 372) {
                var49 = 2;
            } else {
                var49 = -5;
            }
        } else {
            if (input[6] >= 173) {
                var49 = 7;
            } else {
                var49 = 0;
            }
        }
    } else {
        if (input[16] >= 0) {
            if (input[7] >= 46) {
                var49 = 5;
            } else {
                var49 = -2;
            }
        } else {
            var49 = -6;
        }
    }
    int16_t var50;
    if (input[11] >= -134) {
        if (input[18] >= 12) {
            if (input[3] >= -115) {
                var50 = -7;
            } else {
                var50 = 4;
            }
        } else {
            if (input[6] >= 416) {
                var50 = -1;
            } else {
                var50 = 8;
            }
        }
    } else {
        if (input[11] >= -192) {
            if (input[12] >= -9) {
                var50 = -7;
            } else {
                var50 = 7;
            }
        } else {
            if (input[11] >= -261) {
                var50 = 4;
            } else {
                var50 = 0;
            }
        }
    }
    int16_t var51;
    if (input[1] >= 736) {
        if (input[5] >= 2024) {
            if (input[20] >= 107) {
                var51 = 26;
            } else {
                var51 = -12;
            }
        } else {
            if (input[8] >= 258) {
                var51 = 36;
            } else {
                var51 = -2;
            }
        }
    } else {
        if (input[12] >= -3) {
            if (input[3] >= -185) {
                var51 = -10;
            } else {
                var51 = 31;
            }
        } else {
            if (input[9] >= 402) {
                var51 = 2;
            } else {
                var51 = -10;
            }
        }
    }
    int16_t var52;
    if (input[1] >= 438) {
        if (input[5] >= 1035) {
            if (input[1] >= 1739) {
                var52 = 17;
            } else {
                var52 = -10;
            }
        } else {
            if (input[9] >= 272) {
                var52 = 22;
            } else {
                var52 = -2;
            }
        }
    } else {
        if (input[21] >= 9) {
            if (input[2] >= 243) {
                var52 = -1;
            } else {
                var52 = -10;
            }
        } else {
            if (input[10] >= -191) {
                var52 = -7;
            } else {
                var52 = 20;
            }
        }
    }
    int16_t var53;
    if (input[1] >= 479) {
        if (input[5] >= 1199) {
            if (input[1] >= 2553) {
                var53 = 14;
            } else {
                var53 = -10;
            }
        } else {
            if (input[0] >= 63) {
                var53 = -11;
            } else {
                var53 = 16;
            }
        }
    } else {
        if (input[12] >= -3) {
            if (input[3] >= -231) {
                var53 = -7;
            } else {
                var53 = 18;
            }
        } else {
            if (input[9] >= 436) {
                var53 = 1;
            } else {
                var53 = -9;
            }
        }
    }
    int16_t var54;
    if (input[1] >= 167) {
        if (input[0] >= 62) {
            if (input[17] >= 539) {
                var54 = 0;
            } else {
                var54 = -11;
            }
        } else {
            if (input[5] >= 898) {
                var54 = 0;
            } else {
                var54 = 12;
            }
        }
    } else {
        if (input[12] >= -2) {
            if (input[11] >= -116) {
                var54 = -10;
            } else {
                var54 = 15;
            }
        } else {
            if (input[10] >= -468) {
                var54 = -9;
            } else {
                var54 = 1;
            }
        }
    }
    int16_t var55;
    if (input[1] >= 129) {
        if (input[0] >= 62) {
            if (input[17] >= 862) {
                var55 = 3;
            } else {
                var55 = -9;
            }
        } else {
            if (input[11] >= -224) {
                var55 = -6;
            } else {
                var55 = 9;
            }
        }
    } else {
        if (input[12] >= -3) {
            if (input[9] >= 214) {
                var55 = 15;
            } else {
                var55 = -7;
            }
        } else {
            if (input[8] >= 873) {
                var55 = 23;
            } else {
                var55 = -9;
            }
        }
    }
    int16_t var56;
    if (input[1] >= 736) {
        if (input[5] >= 2989) {
            var56 = -11;
        } else {
            if (input[11] >= -175) {
                var56 = -8;
            } else {
                var56 = 11;
            }
        }
    } else {
        if (input[16] >= 5) {
            if (input[9] >= 423) {
                var56 = 1;
            } else {
                var56 = -10;
            }
        } else {
            if (input[2] >= 152) {
                var56 = 9;
            } else {
                var56 = -4;
            }
        }
    }
    int16_t var57;
    if (input[1] >= 119) {
        if (input[12] >= -9) {
            if (input[3] >= -213) {
                var57 = -5;
            } else {
                var57 = 12;
            }
        } else {
            if (input[20] >= 50) {
                var57 = 8;
            } else {
                var57 = -6;
            }
        }
    } else {
        if (input[12] >= -2) {
            if (input[17] >= 154) {
                var57 = 11;
            } else {
                var57 = -10;
            }
        } else {
            if (input[10] >= -468) {
                var57 = -8;
            } else {
                var57 = 1;
            }
        }
    }
    int16_t var58;
    if (input[2] >= 182) {
        if (input[13] >= -473) {
            if (input[8] >= 207) {
                var58 = 8;
            } else {
                var58 = -8;
            }
        } else {
            if (input[17] >= 867) {
                var58 = 9;
            } else {
                var58 = -7;
            }
        }
    } else {
        if (input[21] >= 11) {
            if (input[17] >= 400) {
                var58 = -3;
            } else {
                var58 = -9;
            }
        } else {
            if (input[18] >= 27) {
                var58 = 11;
            } else {
                var58 = -5;
            }
        }
    }
    int16_t var59;
    if (input[1] >= 58) {
        if (input[2] >= 141) {
            if (input[12] >= -9) {
                var59 = 10;
            } else {
                var59 = 1;
            }
        } else {
            if (input[21] >= 11) {
                var59 = -7;
            } else {
                var59 = 8;
            }
        }
    } else {
        if (input[21] >= 8) {
            if (input[19] >= 1064) {
                var59 = 1;
            } else {
                var59 = -9;
            }
        } else {
            if (input[20] >= 11) {
                var59 = 9;
            } else {
                var59 = -4;
            }
        }
    }
    int16_t var60;
    if (input[2] >= 182) {
        if (input[13] >= -499) {
            if (input[1] >= 20) {
                var60 = 6;
            } else {
                var60 = -6;
            }
        } else {
            if (input[8] >= 638) {
                var60 = 4;
            } else {
                var60 = -10;
            }
        }
    } else {
        if (input[16] >= 3) {
            if (input[17] >= 415) {
                var60 = -2;
            } else {
                var60 = -9;
            }
        } else {
            if (input[18] >= 12) {
                var60 = 7;
            } else {
                var60 = -7;
            }
        }
    }
    int16_t var61;
    if (input[1] >= 844) {
        if (input[5] >= 2718) {
            if (input[16] >= 12) {
                var61 = -11;
            } else {
                var61 = -1;
            }
        } else {
            if (input[11] >= -175) {
                var61 = -5;
            } else {
                var61 = 9;
            }
        }
    } else {
        if (input[12] >= -7) {
            if (input[10] >= -224) {
                var61 = -5;
            } else {
                var61 = 9;
            }
        } else {
            if (input[8] >= 443) {
                var61 = 0;
            } else {
                var61 = -9;
            }
        }
    }
    int16_t var62;
    if (input[2] >= 241) {
        if (input[3] >= -660) {
            if (input[9] >= 385) {
                var62 = 7;
            } else {
                var62 = 0;
            }
        } else {
            if (input[12] >= -12) {
                var62 = 6;
            } else {
                var62 = -10;
            }
        }
    } else {
        if (input[16] >= 5) {
            if (input[19] >= 1128) {
                var62 = 3;
            } else {
                var62 = -8;
            }
        } else {
            if (input[1] >= 303) {
                var62 = 6;
            } else {
                var62 = -2;
            }
        }
    }
    int16_t var63;
    if (input[1] >= 58) {
        if (input[12] >= -7) {
            if (input[0] >= 61) {
                var63 = -5;
            } else {
                var63 = 9;
            }
        } else {
            if (input[8] >= 472) {
                var63 = 4;
            } else {
                var63 = -7;
            }
        }
    } else {
        if (input[21] >= 10) {
            if (input[19] >= 428) {
                var63 = -1;
            } else {
                var63 = -9;
            }
        } else {
            if (input[1] >= -1) {
                var63 = 6;
            } else {
                var63 = -9;
            }
        }
    }
    int16_t var64;
    if (input[2] >= 182) {
        if (input[16] >= 5) {
            if (input[8] >= 477) {
                var64 = 3;
            } else {
                var64 = -6;
            }
        } else {
            if (input[8] >= 188) {
                var64 = 8;
            } else {
                var64 = -9;
            }
        }
    } else {
        if (input[21] >= 12) {
            if (input[11] >= -308) {
                var64 = -10;
            } else {
                var64 = -3;
            }
        } else {
            if (input[13] >= -121) {
                var64 = -7;
            } else {
                var64 = 6;
            }
        }
    }
    int16_t var65;
    if (input[1] >= 115) {
        if (input[5] >= 683) {
            if (input[1] >= 1215) {
                var65 = 3;
            } else {
                var65 = -9;
            }
        } else {
            if (input[7] >= 52) {
                var65 = 5;
            } else {
                var65 = -6;
            }
        }
    } else {
        if (input[12] >= -6) {
            if (input[3] >= -303) {
                var65 = -3;
            } else {
                var65 = 10;
            }
        } else {
            if (input[19] >= 428) {
                var65 = 0;
            } else {
                var65 = -9;
            }
        }
    }
    int16_t var66;
    if (input[2] >= 241) {
        if (input[3] >= -660) {
            if (input[8] >= 188) {
                var66 = 4;
            } else {
                var66 = -9;
            }
        } else {
            if (input[12] >= -12) {
                var66 = 5;
            } else {
                var66 = -9;
            }
        }
    } else {
        if (input[16] >= 3) {
            if (input[9] >= 297) {
                var66 = -2;
            } else {
                var66 = -9;
            }
        } else {
            if (input[0] >= 60) {
                var66 = -7;
            } else {
                var66 = 6;
            }
        }
    }
    int16_t var67;
    if (input[7] >= 52) {
        if (input[4] >= 21) {
            if (input[21] >= 12) {
                var67 = -5;
            } else {
                var67 = 5;
            }
        } else {
            if (input[8] >= 197) {
                var67 = 4;
            } else {
                var67 = -8;
            }
        }
    } else {
        if (input[12] >= -30) {
            if (input[1] >= 1612) {
                var67 = -2;
            } else {
                var67 = -10;
            }
        } else {
            if (input[13] >= -451) {
                var67 = 6;
            } else {
                var67 = -8;
            }
        }
    }
    int16_t var68;
    if (input[8] >= 429) {
        if (input[1] >= 166) {
            if (input[5] >= 785) {
                var68 = -1;
            } else {
                var68 = 7;
            }
        } else {
            if (input[9] >= 512) {
                var68 = -7;
            } else {
                var68 = 6;
            }
        }
    } else {
        if (input[12] >= -7) {
            if (input[0] >= 60) {
                var68 = -5;
            } else {
                var68 = 5;
            }
        } else {
            if (input[16] >= 2) {
                var68 = -8;
            } else {
                var68 = 2;
            }
        }
    }
    int16_t var69;
    if (input[2] >= 182) {
        if (input[15] >= -169) {
            if (input[7] >= 57) {
                var69 = -11;
            } else {
                var69 = 0;
            }
        } else {
            if (input[12] >= -15) {
                var69 = 5;
            } else {
                var69 = -1;
            }
        }
    } else {
        if (input[16] >= 4) {
            if (input[19] >= 1137) {
                var69 = 2;
            } else {
                var69 = -8;
            }
        } else {
            if (input[5] >= 45) {
                var69 = -3;
            } else {
                var69 = 4;
            }
        }
    }
    int16_t var70;
    if (input[20] >= 53) {
        if (input[8] >= 476) {
            if (input[16] >= 40) {
                var70 = -6;
            } else {
                var70 = 10;
            }
        } else {
            if (input[12] >= -12) {
                var70 = -31;
            } else {
                var70 = -2;
            }
        }
    } else {
        if (input[12] >= -8) {
            if (input[10] >= -345) {
                var70 = -2;
            } else {
                var70 = 7;
            }
        } else {
            if (input[21] >= 31) {
                var70 = -10;
            } else {
                var70 = -3;
            }
        }
    }
    int16_t var71;
    if (input[7] >= 52) {
        if (input[1] >= 28) {
            if (input[0] >= 60) {
                var71 = -1;
            } else {
                var71 = 5;
            }
        } else {
            if (input[5] >= -51) {
                var71 = -5;
            } else {
                var71 = 6;
            }
        }
    } else {
        if (input[12] >= -30) {
            if (input[5] >= 802) {
                var71 = -2;
            } else {
                var71 = -11;
            }
        } else {
            if (input[13] >= -451) {
                var71 = 5;
            } else {
                var71 = -7;
            }
        }
    }
    int16_t var72;
    if (input[8] >= 429) {
        if (input[1] >= 166) {
            if (input[3] >= -675) {
                var72 = 5;
            } else {
                var72 = -3;
            }
        } else {
            if (input[9] >= 512) {
                var72 = -6;
            } else {
                var72 = 5;
            }
        }
    } else {
        if (input[16] >= 5) {
            if (input[21] >= 21) {
                var72 = -9;
            } else {
                var72 = -2;
            }
        } else {
            if (input[19] >= 363) {
                var72 = -8;
            } else {
                var72 = 3;
            }
        }
    }
    int16_t var73;
    if (input[7] >= 50) {
        if (input[4] >= 21) {
            if (input[21] >= 12) {
                var73 = -4;
            } else {
                var73 = 3;
            }
        } else {
            if (input[8] >= 197) {
                var73 = 3;
            } else {
                var73 = -7;
            }
        }
    } else {
        if (input[1] >= 502) {
            if (input[11] >= -548) {
                var73 = 6;
            } else {
                var73 = -6;
            }
        } else {
            if (input[4] >= -7) {
                var73 = -11;
            } else {
                var73 = -2;
            }
        }
    }
    int16_t var74;
    if (input[17] >= 769) {
        if (input[7] >= 62) {
            if (input[12] >= -13) {
                var74 = 6;
            } else {
                var74 = -11;
            }
        } else {
            if (input[14] >= -33) {
                var74 = 11;
            } else {
                var74 = 0;
            }
        }
    } else {
        if (input[12] >= -8) {
            if (input[10] >= -343) {
                var74 = -1;
            } else {
                var74 = 7;
            }
        } else {
            if (input[8] >= 477) {
                var74 = 0;
            } else {
                var74 = -7;
            }
        }
    }
    int16_t var75;
    if (input[7] >= 52) {
        if (input[4] >= 21) {
            if (input[16] >= 3) {
                var75 = -4;
            } else {
                var75 = 4;
            }
        } else {
            if (input[1] >= 20) {
                var75 = 3;
            } else {
                var75 = -4;
            }
        }
    } else {
        if (input[12] >= -30) {
            if (input[5] >= 802) {
                var75 = -1;
            } else {
                var75 = -10;
            }
        } else {
            if (input[13] >= -451) {
                var75 = 5;
            } else {
                var75 = -6;
            }
        }
    }
    int16_t var76;
    if (input[17] >= 442) {
        if (input[20] >= 51) {
            if (input[13] >= -238) {
                var76 = -10;
            } else {
                var76 = 7;
            }
        } else {
            if (input[12] >= -14) {
                var76 = 4;
            } else {
                var76 = -9;
            }
        }
    } else {
        if (input[0] >= 60) {
            if (input[12] >= -2) {
                var76 = 2;
            } else {
                var76 = -8;
            }
        } else {
            if (input[7] >= 51) {
                var76 = 2;
            } else {
                var76 = -10;
            }
        }
    }
    int16_t var77;
    if (input[1] >= 54) {
        if (input[5] >= 226) {
            if (input[17] >= 560) {
                var77 = 4;
            } else {
                var77 = -5;
            }
        } else {
            if (input[7] >= 51) {
                var77 = 4;
            } else {
                var77 = -9;
            }
        }
    } else {
        if (input[5] >= 26) {
            if (input[12] >= -2) {
                var77 = 0;
            } else {
                var77 = -9;
            }
        } else {
            if (input[16] >= 13) {
                var77 = -9;
            } else {
                var77 = 1;
            }
        }
    }
    int16_t var78;
    if (input[2] >= 141) {
        if (input[16] >= 13) {
            if (input[8] >= 507) {
                var78 = 2;
            } else {
                var78 = -11;
            }
        } else {
            if (input[20] >= 24) {
                var78 = 7;
            } else {
                var78 = 0;
            }
        }
    } else {
        if (input[21] >= 10) {
            if (input[11] >= -345) {
                var78 = -8;
            } else {
                var78 = 1;
            }
        } else {
            if (input[20] >= 10) {
                var78 = 8;
            } else {
                var78 = -6;
            }
        }
    }
    int16_t var79;
    if (input[20] >= 53) {
        if (input[8] >= 476) {
            if (input[16] >= 38) {
                var79 = -4;
            } else {
                var79 = 9;
            }
        } else {
            if (input[4] >= 9) {
                var79 = -12;
            } else {
                var79 = 5;
            }
        }
    } else {
        if (input[12] >= -15) {
            if (input[10] >= -468) {
                var79 = -1;
            } else {
                var79 = 6;
            }
        } else {
            if (input[16] >= 3) {
                var79 = -9;
            } else {
                var79 = 6;
            }
        }
    }
    int16_t var80;
    if (input[2] >= 58) {
        if (input[12] >= -8) {
            if (input[10] >= -343) {
                var80 = 0;
            } else {
                var80 = 7;
            }
        } else {
            if (input[14] >= 31) {
                var80 = -4;
            } else {
                var80 = 2;
            }
        }
    } else {
        if (input[21] >= 9) {
            if (input[1] >= -10) {
                var80 = -9;
            } else {
                var80 = 2;
            }
        } else {
            if (input[20] >= 10) {
                var80 = 7;
            } else {
                var80 = -5;
            }
        }
    }
    int16_t var81;
    if (input[7] >= 52) {
        if (input[0] >= 60) {
            if (input[9] >= 378) {
                var81 = 1;
            } else {
                var81 = -8;
            }
        } else {
            if (input[19] >= 166) {
                var81 = 0;
            } else {
                var81 = 5;
            }
        }
    } else {
        if (input[1] >= 455) {
            if (input[2] >= 235) {
                var81 = 4;
            } else {
                var81 = -7;
            }
        } else {
            if (input[7] >= 51) {
                var81 = -1;
            } else {
                var81 = -9;
            }
        }
    }
    int16_t var82;
    if (input[15] >= -117) {
        if (input[12] >= -2) {
            var82 = -2;
        } else {
            var82 = -8;
        }
    } else {
        if (input[16] >= 13) {
            if (input[17] >= 563) {
                var82 = 2;
            } else {
                var82 = -9;
            }
        } else {
            if (input[20] >= 40) {
                var82 = 7;
            } else {
                var82 = 0;
            }
        }
    }
    int16_t var83;
    if (input[2] >= 303) {
        if (input[16] >= 13) {
            if (input[8] >= 477) {
                var83 = 1;
            } else {
                var83 = -13;
            }
        } else {
            if (input[6] >= 406) {
                var83 = -4;
            } else {
                var83 = 6;
            }
        }
    } else {
        if (input[5] >= 43) {
            if (input[4] >= 4) {
                var83 = -5;
            } else {
                var83 = 3;
            }
        } else {
            if (input[1] >= 76) {
                var83 = 7;
            } else {
                var83 = -1;
            }
        }
    }
    int16_t var84;
    if (input[7] >= 52) {
        if (input[5] >= 112) {
            if (input[1] >= 1205) {
                var84 = 3;
            } else {
                var84 = -3;
            }
        } else {
            if (input[1] >= 28) {
                var84 = 4;
            } else {
                var84 = -1;
            }
        }
    } else {
        if (input[1] >= 3260) {
            var84 = 5;
        } else {
            if (input[15] >= -582) {
                var84 = -7;
            } else {
                var84 = 0;
            }
        }
    }
    int16_t var85;
    if (input[10] >= -468) {
        if (input[7] >= 61) {
            if (input[12] >= -1) {
                var85 = 4;
            } else {
                var85 = -9;
            }
        } else {
            if (input[16] >= 10) {
                var85 = -5;
            } else {
                var85 = 1;
            }
        }
    } else {
        if (input[3] >= -510) {
            if (input[17] >= 362) {
                var85 = 10;
            } else {
                var85 = -1;
            }
        } else {
            if (input[12] >= -17) {
                var85 = 2;
            } else {
                var85 = -6;
            }
        }
    }
    int16_t var86;
    if (input[20] >= 47) {
        if (input[7] >= 58) {
            if (input[0] >= 62) {
                var86 = 0;
            } else {
                var86 = 9;
            }
        } else {
            if (input[4] >= 15) {
                var86 = -10;
            } else {
                var86 = 4;
            }
        }
    } else {
        if (input[21] >= 30) {
            if (input[1] >= 950) {
                var86 = -1;
            } else {
                var86 = -9;
            }
        } else {
            if (input[20] >= 19) {
                var86 = 2;
            } else {
                var86 = -2;
            }
        }
    }
    int16_t var87;
    if (input[0] >= 60) {
        if (input[13] >= -319) {
            if (input[5] >= 118) {
                var87 = -11;
            } else {
                var87 = -1;
            }
        } else {
            if (input[3] >= -255) {
                var87 = -9;
            } else {
                var87 = 3;
            }
        }
    } else {
        if (input[1] >= 54) {
            if (input[19] >= 419) {
                var87 = -4;
            } else {
                var87 = 5;
            }
        } else {
            if (input[14] >= 54) {
                var87 = -6;
            } else {
                var87 = 1;
            }
        }
    }
    int16_t var88;
    if (input[2] >= 241) {
        if (input[16] >= 13) {
            if (input[8] >= 507) {
                var88 = 1;
            } else {
                var88 = -10;
            }
        } else {
            if (input[7] >= 52) {
                var88 = 4;
            } else {
                var88 = -6;
            }
        }
    } else {
        if (input[16] >= 3) {
            if (input[9] >= 297) {
                var88 = 0;
            } else {
                var88 = -7;
            }
        } else {
            if (input[0] >= 54) {
                var88 = -4;
            } else {
                var88 = 7;
            }
        }
    }
    int16_t var89;
    if (input[20] >= 47) {
        if (input[7] >= 58) {
            if (input[0] >= 62) {
                var89 = 0;
            } else {
                var89 = 9;
            }
        } else {
            if (input[4] >= 14) {
                var89 = -8;
            } else {
                var89 = 3;
            }
        }
    } else {
        if (input[21] >= 24) {
            if (input[12] >= -6) {
                var89 = 5;
            } else {
                var89 = -7;
            }
        } else {
            if (input[20] >= 19) {
                var89 = 3;
            } else {
                var89 = -2;
            }
        }
    }
    int16_t var90;
    if (input[7] >= 52) {
        if (input[0] >= 60) {
            if (input[9] >= 378) {
                var90 = 0;
            } else {
                var90 = -7;
            }
        } else {
            if (input[1] >= 129) {
                var90 = 5;
            } else {
                var90 = 0;
            }
        }
    } else {
        if (input[1] >= 455) {
            if (input[11] >= -548) {
                var90 = 4;
            } else {
                var90 = -5;
            }
        } else {
            if (input[7] >= 51) {
                var90 = -1;
            } else {
                var90 = -8;
            }
        }
    }
    int16_t var91;
    if (input[15] >= -117) {
        if (input[16] >= 2) {
            var91 = -7;
        } else {
            var91 = -2;
        }
    } else {
        if (input[12] >= -7) {
            if (input[10] >= -345) {
                var91 = 0;
            } else {
                var91 = 7;
            }
        } else {
            if (input[8] >= 473) {
                var91 = 1;
            } else {
                var91 = -3;
            }
        }
    }
    int16_t var92;
    if (input[4] >= 44) {
        if (input[20] >= 21) {
            var92 = -1;
        } else {
            var92 = -7;
        }
    } else {
        if (input[18] >= 31) {
            if (input[13] >= -262) {
                var92 = 0;
            } else {
                var92 = 9;
            }
        } else {
            if (input[3] >= -652) {
                var92 = 0;
            } else {
                var92 = -7;
            }
        }
    }
    int16_t var93;
    if (input[10] >= -476) {
        if (input[7] >= 61) {
            if (input[19] >= 178) {
                var93 = -9;
            } else {
                var93 = 0;
            }
        } else {
            if (input[16] >= 10) {
                var93 = -4;
            } else {
                var93 = 1;
            }
        }
    } else {
        if (input[3] >= -510) {
            if (input[4] >= 21) {
                var93 = 3;
            } else {
                var93 = 10;
            }
        } else {
            if (input[12] >= -12) {
                var93 = 3;
            } else {
                var93 = -5;
            }
        }
    }
    int16_t var94;
    if (input[20] >= 47) {
        if (input[7] >= 58) {
            if (input[0] >= 62) {
                var94 = 0;
            } else {
                var94 = 8;
            }
        } else {
            if (input[4] >= 15) {
                var94 = -7;
            } else {
                var94 = 4;
            }
        }
    } else {
        if (input[21] >= 30) {
            if (input[1] >= 950) {
                var94 = 0;
            } else {
                var94 = -8;
            }
        } else {
            if (input[4] >= -2) {
                var94 = 0;
            } else {
                var94 = -7;
            }
        }
    }
    int16_t var95;
    if (input[2] >= 241) {
        if (input[15] >= -174) {
            if (input[2] >= 531) {
                var95 = 3;
            } else {
                var95 = -8;
            }
        } else {
            if (input[7] >= 56) {
                var95 = 4;
            } else {
                var95 = -2;
            }
        }
    } else {
        if (input[16] >= 3) {
            if (input[14] >= 46) {
                var95 = -6;
            } else {
                var95 = 0;
            }
        } else {
            if (input[0] >= 54) {
                var95 = -3;
            } else {
                var95 = 6;
            }
        }
    }
    int16_t var96;
    if (input[9] >= 132) {
        if (input[12] >= -7) {
            if (input[4] >= -2) {
                var96 = 4;
            } else {
                var96 = -6;
            }
        } else {
            if (input[6] >= 145) {
                var96 = -4;
            } else {
                var96 = 0;
            }
        }
    } else {
        if (input[18] >= 26) {
            var96 = -1;
        } else {
            var96 = -7;
        }
    }
    int16_t var97;
    if (input[20] >= 47) {
        if (input[7] >= 58) {
            if (input[21] >= 44) {
                var97 = 1;
            } else {
                var97 = 8;
            }
        } else {
            if (input[4] >= 15) {
                var97 = -7;
            } else {
                var97 = 4;
            }
        }
    } else {
        if (input[12] >= -14) {
            if (input[10] >= -468) {
                var97 = -1;
            } else {
                var97 = 4;
            }
        } else {
            if (input[3] >= -348) {
                var97 = 0;
            } else {
                var97 = -9;
            }
        }
    }
    int16_t var98;
    if (input[0] >= 60) {
        if (input[13] >= -319) {
            if (input[5] >= 112) {
                var98 = -9;
            } else {
                var98 = 0;
            }
        } else {
            if (input[3] >= -266) {
                var98 = -7;
            } else {
                var98 = 2;
            }
        }
    } else {
        if (input[1] >= 832) {
            if (input[11] >= -545) {
                var98 = 7;
            } else {
                var98 = -1;
            }
        } else {
            if (input[21] >= 21) {
                var98 = -4;
            } else {
                var98 = 1;
            }
        }
    }
    int16_t var99;
    if (input[3] >= -266) {
        if (input[21] >= 13) {
            if (input[1] >= 1020) {
                var99 = 2;
            } else {
                var99 = -8;
            }
        } else {
            if (input[20] >= 12) {
                var99 = 5;
            } else {
                var99 = -5;
            }
        }
    } else {
        if (input[12] >= -8) {
            if (input[20] >= 18) {
                var99 = 8;
            } else {
                var99 = 0;
            }
        } else {
            if (input[14] >= 31) {
                var99 = -3;
            } else {
                var99 = 2;
            }
        }
    }
    int16_t var100;
    if (input[7] >= 52) {
        if (input[4] >= 44) {
            if (input[1] >= 507) {
                var100 = -1;
            } else {
                var100 = -6;
            }
        } else {
            if (input[16] >= 13) {
                var100 = -2;
            } else {
                var100 = 1;
            }
        }
    } else {
        if (input[1] >= 280) {
            if (input[2] >= 256) {
                var100 = 3;
            } else {
                var100 = -3;
            }
        } else {
            if (input[4] >= -2) {
                var100 = -7;
            } else {
                var100 = -1;
            }
        }
    }
    int16_t var101;
    if (input[3] >= -676) {
        if (input[11] >= -345) {
            if (input[10] >= -267) {
                var101 = -12;
            } else {
                var101 = -7;
            }
        } else {
            if (input[12] >= -9) {
                var101 = -9;
            } else {
                var101 = 6;
            }
        }
    } else {
        if (input[12] >= -12) {
            if (input[1] >= 619) {
                var101 = -11;
            } else {
                var101 = 11;
            }
        } else {
            if (input[20] >= 100) {
                var101 = -5;
            } else {
                var101 = 37;
            }
        }
    }
    int16_t var102;
    if (input[11] >= -521) {
        if (input[10] >= -273) {
            if (input[10] >= -267) {
                var102 = -11;
            } else {
                var102 = -7;
            }
        } else {
            if (input[0] >= 52) {
                var102 = -5;
            } else {
                var102 = 16;
            }
        }
    } else {
        if (input[12] >= -12) {
            if (input[1] >= 60) {
                var102 = -10;
            } else {
                var102 = 18;
            }
        } else {
            if (input[3] >= -520) {
                var102 = -11;
            } else {
                var102 = 22;
            }
        }
    }
    int16_t var103;
    if (input[5] >= 795) {
        if (input[3] >= -434) {
            if (input[1] >= 418) {
                var103 = -9;
            } else {
                var103 = 13;
            }
        } else {
            if (input[1] >= 1730) {
                var103 = -1;
            } else {
                var103 = 21;
            }
        }
    } else {
        if (input[11] >= -345) {
            if (input[0] >= 56) {
                var103 = -10;
            } else {
                var103 = -6;
            }
        } else {
            if (input[1] >= 286) {
                var103 = -10;
            } else {
                var103 = 5;
            }
        }
    }
    int16_t var104;
    if (input[5] >= 268) {
        if (input[1] >= 768) {
            if (input[5] >= 2140) {
                var104 = 10;
            } else {
                var104 = -11;
            }
        } else {
            if (input[10] >= -273) {
                var104 = -10;
            } else {
                var104 = 18;
            }
        }
    } else {
        if (input[0] >= 57) {
            if (input[11] >= -665) {
                var104 = -10;
            } else {
                var104 = 11;
            }
        } else {
            if (input[11] >= -261) {
                var104 = -9;
            } else {
                var104 = 4;
            }
        }
    }
    int16_t var105;
    if (input[5] >= 141) {
        if (input[1] >= 736) {
            if (input[5] >= 2024) {
                var105 = 8;
            } else {
                var105 = -10;
            }
        } else {
            if (input[10] >= -273) {
                var105 = -8;
            } else {
                var105 = 13;
            }
        }
    } else {
        if (input[0] >= 55) {
            if (input[14] >= 60) {
                var105 = 24;
            } else {
                var105 = -9;
            }
        } else {
            if (input[11] >= -260) {
                var105 = -9;
            } else {
                var105 = 3;
            }
        }
    }
    int16_t var106;
    if (input[5] >= 144) {
        if (input[1] >= 691) {
            if (input[3] >= -549) {
                var106 = -10;
            } else {
                var106 = 5;
            }
        } else {
            if (input[10] >= -267) {
                var106 = -8;
            } else {
                var106 = 11;
            }
        }
    } else {
        if (input[0] >= 52) {
            if (input[14] >= 60) {
                var106 = 20;
            } else {
                var106 = -8;
            }
        } else {
            if (input[11] >= -260) {
                var106 = -9;
            } else {
                var106 = 7;
            }
        }
    }
    int16_t var107;
    if (input[5] >= 369) {
        if (input[1] >= 1019) {
            if (input[5] >= 3030) {
                var107 = 10;
            } else {
                var107 = -9;
            }
        } else {
            if (input[10] >= -265) {
                var107 = -9;
            } else {
                var107 = 12;
            }
        }
    } else {
        if (input[12] >= -6) {
            if (input[14] >= 61) {
                var107 = 8;
            } else {
                var107 = -10;
            }
        } else {
            if (input[20] >= 19) {
                var107 = -6;
            } else {
                var107 = 6;
            }
        }
    }
    int16_t var108;
    if (input[5] >= 100) {
        if (input[12] >= -9) {
            if (input[1] >= 60) {
                var108 = -9;
            } else {
                var108 = 8;
            }
        } else {
            if (input[20] >= 52) {
                var108 = -3;
            } else {
                var108 = 8;
            }
        }
    } else {
        if (input[15] >= -223) {
            if (input[11] >= -260) {
                var108 = -9;
            } else {
                var108 = 3;
            }
        } else {
            if (input[8] >= 537) {
                var108 = -4;
            } else {
                var108 = -10;
            }
        }
    }
    int16_t var109;
    if (input[5] >= 100) {
        if (input[3] >= -304) {
            if (input[15] >= -97) {
                var109 = 10;
            } else {
                var109 = -8;
            }
        } else {
            if (input[1] >= 604) {
                var109 = -2;
            } else {
                var109 = 8;
            }
        }
    } else {
        if (input[15] >= -223) {
            if (input[11] >= -260) {
                var109 = -8;
            } else {
                var109 = 2;
            }
        } else {
            if (input[17] >= 561) {
                var109 = -2;
            } else {
                var109 = -9;
            }
        }
    }
    int16_t var110;
    if (input[5] >= 703) {
        if (input[3] >= -434) {
            if (input[1] >= 771) {
                var110 = -9;
            } else {
                var110 = 5;
            }
        } else {
            if (input[1] >= 3260) {
                var110 = -6;
            } else {
                var110 = 11;
            }
        }
    } else {
        if (input[1] >= 164) {
            if (input[20] >= 16) {
                var110 = -8;
            } else {
                var110 = 0;
            }
        } else {
            if (input[5] >= 78) {
                var110 = 6;
            } else {
                var110 = -5;
            }
        }
    }
    int16_t var111;
    if (input[5] >= 369) {
        if (input[1] >= 1019) {
            if (input[5] >= 2836) {
                var111 = 9;
            } else {
                var111 = -9;
            }
        } else {
            if (input[10] >= -273) {
                var111 = -6;
            } else {
                var111 = 10;
            }
        }
    } else {
        if (input[20] >= 35) {
            if (input[1] >= -38) {
                var111 = -10;
            } else {
                var111 = 6;
            }
        } else {
            if (input[12] >= -6) {
                var111 = -8;
            } else {
                var111 = 2;
            }
        }
    }
    int16_t var112;
    if (input[5] >= 369) {
        if (input[1] >= 1019) {
            if (input[11] >= -549) {
                var112 = -10;
            } else {
                var112 = 5;
            }
        } else {
            if (input[3] >= -345) {
                var112 = -3;
            } else {
                var112 = 10;
            }
        }
    } else {
        if (input[15] >= -174) {
            if (input[11] >= -260) {
                var112 = -6;
            } else {
                var112 = 9;
            }
        } else {
            if (input[0] >= 51) {
                var112 = -6;
            } else {
                var112 = 2;
            }
        }
    }
    int16_t var113;
    if (input[5] >= 138) {
        if (input[3] >= -357) {
            if (input[20] >= 17) {
                var113 = -7;
            } else {
                var113 = 7;
            }
        } else {
            if (input[1] >= 627) {
                var113 = -1;
            } else {
                var113 = 8;
            }
        }
    } else {
        if (input[0] >= 56) {
            if (input[17] >= 561) {
                var113 = 3;
            } else {
                var113 = -8;
            }
        } else {
            if (input[21] >= 10) {
                var113 = 2;
            } else {
                var113 = -9;
            }
        }
    }
    int16_t var114;
    if (input[5] >= 635) {
        if (input[3] >= -303) {
            var114 = -8;
        } else {
            if (input[1] >= 1019) {
                var114 = 0;
            } else {
                var114 = 10;
            }
        }
    } else {
        if (input[20] >= 35) {
            if (input[1] >= -38) {
                var114 = -9;
            } else {
                var114 = 4;
            }
        } else {
            if (input[12] >= -12) {
                var114 = -2;
            } else {
                var114 = 7;
            }
        }
    }
    int16_t var115;
    if (input[12] >= -6) {
        if (input[14] >= 61) {
            var115 = 14;
        } else {
            if (input[7] >= 55) {
                var115 = -9;
            } else {
                var115 = -2;
            }
        }
    } else {
        if (input[20] >= 17) {
            if (input[11] >= -327) {
                var115 = -8;
            } else {
                var115 = 2;
            }
        } else {
            if (input[21] >= 13) {
                var115 = 13;
            } else {
                var115 = 1;
            }
        }
    }
    int16_t var116;
    if (input[5] >= 222) {
        if (input[1] >= 604) {
            if (input[3] >= -549) {
                var116 = -9;
            } else {
                var116 = 4;
            }
        } else {
            if (input[0] >= 62) {
                var116 = -4;
            } else {
                var116 = 7;
            }
        }
    } else {
        if (input[15] >= -176) {
            if (input[13] >= -164) {
                var116 = -4;
            } else {
                var116 = 9;
            }
        } else {
            if (input[4] >= 16) {
                var116 = -1;
            } else {
                var116 = -8;
            }
        }
    }
    int16_t var117;
    if (input[12] >= -4) {
        if (input[4] >= 1) {
            var117 = -9;
        } else {
            if (input[0] >= 54) {
                var117 = 13;
            } else {
                var117 = -7;
            }
        }
    } else {
        if (input[20] >= 17) {
            if (input[11] >= -327) {
                var117 = -7;
            } else {
                var117 = 1;
            }
        } else {
            if (input[16] >= 2) {
                var117 = 9;
            } else {
                var117 = -3;
            }
        }
    }
    int16_t var118;
    if (input[5] >= 635) {
        if (input[12] >= -9) {
            if (input[21] >= 16) {
                var118 = -8;
            } else {
                var118 = -1;
            }
        } else {
            if (input[9] >= 231) {
                var118 = 8;
            } else {
                var118 = -4;
            }
        }
    } else {
        if (input[20] >= 35) {
            if (input[9] >= 340) {
                var118 = -10;
            } else {
                var118 = -3;
            }
        } else {
            if (input[12] >= -16) {
                var118 = 0;
            } else {
                var118 = 10;
            }
        }
    }
    int16_t var119;
    if (input[15] >= -150) {
        if (input[10] >= -165) {
            if (input[5] >= 238) {
                var119 = 3;
            } else {
                var119 = -8;
            }
        } else {
            if (input[7] >= 51) {
                var119 = 7;
            } else {
                var119 = 21;
            }
        }
    } else {
        if (input[5] >= 369) {
            if (input[1] >= 699) {
                var119 = -1;
            } else {
                var119 = 6;
            }
        } else {
            if (input[4] >= 22) {
                var119 = 0;
            } else {
                var119 = -6;
            }
        }
    }
    int16_t var120;
    if (input[0] >= 52) {
        if (input[11] >= -648) {
            if (input[20] >= 22) {
                var120 = -5;
            } else {
                var120 = 1;
            }
        } else {
            if (input[18] >= 35) {
                var120 = -1;
            } else {
                var120 = 9;
            }
        }
    } else {
        if (input[21] >= 10) {
            if (input[4] >= 0) {
                var120 = 8;
            } else {
                var120 = -3;
            }
        } else {
            var120 = -8;
        }
    }
    int16_t var121;
    if (input[5] >= 58) {
        if (input[1] >= 40) {
            if (input[12] >= -10) {
                var121 = -6;
            } else {
                var121 = 2;
            }
        } else {
            if (input[13] >= -346) {
                var121 = 11;
            } else {
                var121 = -1;
            }
        }
    } else {
        if (input[21] >= 20) {
            if (input[10] >= -636) {
                var121 = -9;
            } else {
                var121 = 2;
            }
        } else {
            if (input[9] >= 528) {
                var121 = 14;
            } else {
                var121 = -2;
            }
        }
    }
    int16_t var122;
    if (input[0] >= 62) {
        if (input[3] >= -619) {
            if (input[5] >= 1370) {
                var122 = 3;
            } else {
                var122 = -9;
            }
        } else {
            if (input[0] >= 62) {
                var122 = 7;
            } else {
                var122 = 0;
            }
        }
    } else {
        if (input[16] >= 2) {
            if (input[20] >= 40) {
                var122 = -3;
            } else {
                var122 = 3;
            }
        } else {
            if (input[15] >= -434) {
                var122 = -9;
            } else {
                var122 = 4;
            }
        }
    }
    int16_t var123;
    if (input[9] >= 194) {
        if (input[15] >= -151) {
            if (input[19] >= 48) {
                var123 = 10;
            } else {
                var123 = -6;
            }
        } else {
            if (input[5] >= 277) {
                var123 = 3;
            } else {
                var123 = -3;
            }
        }
    } else {
        if (input[0] >= 57) {
            var123 = -9;
        } else {
            if (input[12] >= -7) {
                var123 = -5;
            } else {
                var123 = 5;
            }
        }
    }
    int16_t var124;
    if (input[21] >= 74) {
        if (input[20] >= 135) {
            var124 = -6;
        } else {
            if (input[14] >= 1) {
                var124 = 9;
            } else {
                var124 = 0;
            }
        }
    } else {
        if (input[20] >= 33) {
            if (input[19] >= 420) {
                var124 = 0;
            } else {
                var124 = -9;
            }
        } else {
            if (input[17] >= 356) {
                var124 = 4;
            } else {
                var124 = -1;
            }
        }
    }
    int16_t var125;
    if (input[16] >= 2) {
        if (input[20] >= 22) {
            if (input[21] >= 32) {
                var125 = 1;
            } else {
                var125 = -7;
            }
        } else {
            if (input[8] >= 528) {
                var125 = 10;
            } else {
                var125 = 1;
            }
        }
    } else {
        if (input[15] >= -434) {
            if (input[17] >= 171) {
                var125 = -9;
            } else {
                var125 = -2;
            }
        } else {
            var125 = 3;
        }
    }
    int16_t var126;
    if (input[0] >= 61) {
        if (input[3] >= -598) {
            if (input[20] >= 12) {
                var126 = -7;
            } else {
                var126 = 4;
            }
        } else {
            if (input[8] >= 975) {
                var126 = -3;
            } else {
                var126 = 7;
            }
        }
    } else {
        if (input[4] >= 16) {
            if (input[12] >= -4) {
                var126 = -8;
            } else {
                var126 = 5;
            }
        } else {
            if (input[15] >= -157) {
                var126 = 5;
            } else {
                var126 = -4;
            }
        }
    }
    int16_t var127;
    if (input[9] >= 194) {
        if (input[15] >= -151) {
            if (input[19] >= 72) {
                var127 = 9;
            } else {
                var127 = -4;
            }
        } else {
            if (input[5] >= 635) {
                var127 = 4;
            } else {
                var127 = -1;
            }
        }
    } else {
        if (input[15] >= -82) {
            if (input[13] >= -88) {
                var127 = -6;
            } else {
                var127 = 22;
            }
        } else {
            if (input[11] >= -343) {
                var127 = -9;
            } else {
                var127 = 2;
            }
        }
    }
    int16_t var128;
    if (input[0] >= 52) {
        if (input[19] >= 72) {
            if (input[20] >= 24) {
                var128 = -2;
            } else {
                var128 = 3;
            }
        } else {
            if (input[9] >= 702) {
                var128 = 7;
            } else {
                var128 = -9;
            }
        }
    } else {
        if (input[21] >= 10) {
            if (input[4] >= 4) {
                var128 = 7;
            } else {
                var128 = -2;
            }
        } else {
            var128 = -8;
        }
    }
    int16_t var129;
    if (input[5] >= 43) {
        if (input[1] >= 40) {
            if (input[12] >= -10) {
                var129 = -5;
            } else {
                var129 = 1;
            }
        } else {
            if (input[6] >= 10) {
                var129 = 10;
            } else {
                var129 = 1;
            }
        }
    } else {
        if (input[15] >= -70) {
            if (input[8] >= 123) {
                var129 = 13;
            } else {
                var129 = 0;
            }
        } else {
            if (input[8] >= 597) {
                var129 = 5;
            } else {
                var129 = -5;
            }
        }
    }
    int16_t var130;
    if (input[16] >= 2) {
        if (input[20] >= 33) {
            if (input[5] >= 840) {
                var130 = 3;
            } else {
                var130 = -7;
            }
        } else {
            if (input[12] >= -16) {
                var130 = 0;
            } else {
                var130 = 7;
            }
        }
    } else {
        if (input[21] >= 18) {
            if (input[1] >= 37) {
                var130 = -7;
            } else {
                var130 = 4;
            }
        } else {
            var130 = -9;
        }
    }
    int16_t var131;
    if (input[13] >= -104) {
        if (input[3] >= -147) {
            if (input[13] >= -89) {
                var131 = -6;
            } else {
                var131 = 3;
            }
        } else {
            if (input[17] >= 200) {
                var131 = 5;
            } else {
                var131 = 23;
            }
        }
    } else {
        if (input[8] >= 200) {
            if (input[4] >= 15) {
                var131 = 2;
            } else {
                var131 = -2;
            }
        } else {
            if (input[11] >= -343) {
                var131 = -9;
            } else {
                var131 = 0;
            }
        }
    }
    int16_t var132;
    if (input[21] >= 74) {
        if (input[20] >= 135) {
            var132 = -5;
        } else {
            if (input[14] >= 1) {
                var132 = 9;
            } else {
                var132 = 0;
            }
        }
    } else {
        if (input[20] >= 40) {
            if (input[5] >= 842) {
                var132 = 0;
            } else {
                var132 = -9;
            }
        } else {
            if (input[17] >= 342) {
                var132 = 3;
            } else {
                var132 = -2;
            }
        }
    }
    int16_t var133;
    if (input[13] >= -104) {
        if (input[3] >= -147) {
            if (input[19] >= 39) {
                var133 = -6;
            } else {
                var133 = 3;
            }
        } else {
            if (input[3] >= -185) {
                var133 = 22;
            } else {
                var133 = 5;
            }
        }
    } else {
        if (input[8] >= 200) {
            if (input[2] >= 171) {
                var133 = -1;
            } else {
                var133 = 2;
            }
        } else {
            if (input[11] >= -343) {
                var133 = -9;
            } else {
                var133 = 0;
            }
        }
    }
    int16_t var134;
    if (input[5] >= 268) {
        if (input[3] >= -379) {
            if (input[1] >= 397) {
                var134 = -10;
            } else {
                var134 = 1;
            }
        } else {
            if (input[14] >= 4) {
                var134 = 6;
            } else {
                var134 = -4;
            }
        }
    } else {
        if (input[1] >= 107) {
            if (input[2] >= 41) {
                var134 = -9;
            } else {
                var134 = 5;
            }
        } else {
            if (input[5] >= 43) {
                var134 = 4;
            } else {
                var134 = -2;
            }
        }
    }
    int16_t var135;
    if (input[0] >= 61) {
        if (input[10] >= -411) {
            if (input[20] >= 15) {
                var135 = -8;
            } else {
                var135 = 0;
            }
        } else {
            if (input[13] >= -319) {
                var135 = 6;
            } else {
                var135 = -2;
            }
        }
    } else {
        if (input[4] >= 16) {
            if (input[12] >= -5) {
                var135 = -7;
            } else {
                var135 = 5;
            }
        } else {
            if (input[15] >= -157) {
                var135 = 4;
            } else {
                var135 = -4;
            }
        }
    }
    int16_t var136;
    if (input[16] >= 2) {
        if (input[20] >= 33) {
            if (input[21] >= 74) {
                var136 = 5;
            } else {
                var136 = -5;
            }
        } else {
            if (input[12] >= -16) {
                var136 = 0;
            } else {
                var136 = 7;
            }
        }
    } else {
        if (input[21] >= 18) {
            if (input[20] >= 17) {
                var136 = -6;
            } else {
                var136 = 4;
            }
        } else {
            var136 = -8;
        }
    }
    int16_t var137;
    if (input[21] >= 35) {
        if (input[10] >= -405) {
            if (input[15] >= -360) {
                var137 = 0;
            } else {
                var137 = -8;
            }
        } else {
            if (input[20] >= 52) {
                var137 = 0;
            } else {
                var137 = 9;
            }
        }
    } else {
        if (input[20] >= 24) {
            if (input[15] >= -146) {
                var137 = 5;
            } else {
                var137 = -8;
            }
        } else {
            if (input[17] >= 477) {
                var137 = 8;
            } else {
                var137 = 0;
            }
        }
    }
    int16_t var138;
    if (input[13] >= -104) {
        if (input[13] >= -81) {
            var138 = -5;
        } else {
            if (input[7] >= 51) {
                var138 = 1;
            } else {
                var138 = 17;
            }
        }
    } else {
        if (input[13] >= -154) {
            if (input[18] >= 27) {
                var138 = 2;
            } else {
                var138 = -8;
            }
        } else {
            if (input[9] >= 199) {
                var138 = 0;
            } else {
                var138 = -5;
            }
        }
    }
    int16_t var139;
    if (input[4] >= 22) {
        if (input[0] >= 60) {
            if (input[17] >= 480) {
                var139 = 3;
            } else {
                var139 = -6;
            }
        } else {
            if (input[12] >= -5) {
                var139 = -6;
            } else {
                var139 = 8;
            }
        }
    } else {
        if (input[9] >= 409) {
            if (input[9] >= 631) {
                var139 = 2;
            } else {
                var139 = -7;
            }
        } else {
            if (input[9] >= 392) {
                var139 = 7;
            } else {
                var139 = 0;
            }
        }
    }
    int16_t var140;
    if (input[16] >= 2) {
        if (input[2] >= 40) {
            if (input[11] >= -278) {
                var140 = -8;
            } else {
                var140 = 0;
            }
        } else {
            if (input[12] >= -8) {
                var140 = 9;
            } else {
                var140 = -4;
            }
        }
    } else {
        if (input[21] >= 18) {
            var140 = -1;
        } else {
            var140 = -8;
        }
    }
    int16_t var141;
    if (input[1] >= -37) {
        if (input[1] >= 40) {
            if (input[5] >= 255) {
                var141 = 1;
            } else {
                var141 = -4;
            }
        } else {
            if (input[5] >= 61) {
                var141 = 7;
            } else {
                var141 = 0;
            }
        }
    } else {
        if (input[4] >= 19) {
            var141 = -1;
        } else {
            var141 = -8;
        }
    }
    int16_t var142;
    if (input[16] >= 2) {
        if (input[20] >= 32) {
            if (input[5] >= 278) {
                var142 = 1;
            } else {
                var142 = -8;
            }
        } else {
            if (input[9] >= 256) {
                var142 = 3;
            } else {
                var142 = -2;
            }
        }
    } else {
        if (input[1] >= 34) {
            var142 = -8;
        } else {
            var142 = -1;
        }
    }
    int16_t var143;
    if (input[0] >= 61) {
        if (input[3] >= -598) {
            if (input[15] >= -256) {
                var143 = 0;
            } else {
                var143 = -6;
            }
        } else {
            if (input[12] >= -13) {
                var143 = 0;
            } else {
                var143 = 6;
            }
        }
    } else {
        if (input[19] >= 1059) {
            if (input[13] >= -477) {
                var143 = -9;
            } else {
                var143 = 6;
            }
        } else {
            if (input[19] >= 114) {
                var143 = 3;
            } else {
                var143 = -1;
            }
        }
    }
    int16_t var144;
    if (input[1] >= 604) {
        if (input[12] >= -23) {
            if (input[15] >= -394) {
                var144 = -9;
            } else {
                var144 = 0;
            }
        } else {
            if (input[11] >= -546) {
                var144 = -5;
            } else {
                var144 = 5;
            }
        }
    } else {
        if (input[5] >= 255) {
            if (input[11] >= -264) {
                var144 = -7;
            } else {
                var144 = 6;
            }
        } else {
            if (input[11] >= -170) {
                var144 = 6;
            } else {
                var144 = -1;
            }
        }
    }
    int16_t var145;
    if (input[4] >= 22) {
        if (input[0] >= 57) {
            if (input[17] >= 342) {
                var145 = 1;
            } else {
                var145 = -7;
            }
        } else {
            if (input[21] >= 12) {
                var145 = 9;
            } else {
                var145 = -4;
            }
        }
    } else {
        if (input[15] >= -150) {
            if (input[10] >= -165) {
                var145 = -4;
            } else {
                var145 = 4;
            }
        } else {
            if (input[21] >= 35) {
                var145 = 1;
            } else {
                var145 = -5;
            }
        }
    }
    int16_t var146;
    if (input[2] >= 40) {
        if (input[3] >= -309) {
            if (input[20] >= 10) {
                var146 = -8;
            } else {
                var146 = 5;
            }
        } else {
            if (input[12] >= -7) {
                var146 = -5;
            } else {
                var146 = 1;
            }
        }
    } else {
        if (input[12] >= -8) {
            if (input[9] >= 194) {
                var146 = 13;
            } else {
                var146 = -2;
            }
        } else {
            if (input[5] >= 109) {
                var146 = 2;
            } else {
                var146 = -7;
            }
        }
    }
    int16_t var147;
    if (input[1] >= 604) {
        if (input[12] >= -23) {
            if (input[15] >= -360) {
                var147 = -9;
            } else {
                var147 = -1;
            }
        } else {
            if (input[11] >= -546) {
                var147 = -4;
            } else {
                var147 = 5;
            }
        }
    } else {
        if (input[15] >= -315) {
            if (input[5] >= 161) {
                var147 = 5;
            } else {
                var147 = 0;
            }
        } else {
            if (input[19] >= 547) {
                var147 = 2;
            } else {
                var147 = -5;
            }
        }
    }
    int16_t var148;
    if (input[1] >= -37) {
        if (input[1] >= 39) {
            if (input[5] >= 135) {
                var148 = 0;
            } else {
                var148 = -4;
            }
        } else {
            if (input[5] >= 61) {
                var148 = 6;
            } else {
                var148 = 0;
            }
        }
    } else {
        if (input[18] >= 11) {
            var148 = -2;
        } else {
            var148 = -8;
        }
    }
    int16_t var149;
    if (input[1] >= 604) {
        if (input[12] >= -23) {
            if (input[15] >= -329) {
                var149 = -8;
            } else {
                var149 = -1;
            }
        } else {
            if (input[11] >= -546) {
                var149 = -4;
            } else {
                var149 = 4;
            }
        }
    } else {
        if (input[4] >= 15) {
            if (input[0] >= 60) {
                var149 = -1;
            } else {
                var149 = 4;
            }
        } else {
            if (input[15] >= -157) {
                var149 = 3;
            } else {
                var149 = -4;
            }
        }
    }
    int16_t var150;
    if (input[10] >= -165) {
        if (input[0] >= 23) {
            var150 = -7;
        } else {
            var150 = 1;
        }
    } else {
        if (input[11] >= -170) {
            var150 = 15;
        } else {
            if (input[7] >= 59) {
                var150 = 2;
            } else {
                var150 = -2;
            }
        }
    }
    int16_t var151;
    if (input[0] >= 63) {
        if (input[3] >= -636) {
            var151 = 38;
        } else {
            var151 = -10;
        }
    } else {
        if (input[15] >= -638) {
            if (input[6] >= 381) {
                var151 = 7;
            } else {
                var151 = -10;
            }
        } else {
            if (input[17] >= 628) {
                var151 = -7;
            } else {
                var151 = 36;
            }
        }
    }
    int16_t var152;
    if (input[0] >= 62) {
        if (input[3] >= -562) {
            if (input[4] >= 32) {
                var152 = 23;
            } else {
                var152 = 12;
            }
        } else {
            var152 = -11;
        }
    } else {
        if (input[15] >= -638) {
            if (input[6] >= 223) {
                var152 = -1;
            } else {
                var152 = -10;
            }
        } else {
            if (input[17] >= 628) {
                var152 = -5;
            } else {
                var152 = 23;
            }
        }
    }
    int16_t var153;
    if (input[0] >= 62) {
        if (input[17] >= 505) {
            if (input[13] >= -1169) {
                var153 = -10;
            } else {
                var153 = 12;
            }
        } else {
            if (input[7] >= 59) {
                var153 = 17;
            } else {
                var153 = -8;
            }
        }
    } else {
        if (input[15] >= -638) {
            if (input[6] >= 459) {
                var153 = 6;
            } else {
                var153 = -9;
            }
        } else {
            if (input[1] >= 178) {
                var153 = -6;
            } else {
                var153 = 18;
            }
        }
    }
    int16_t var154;
    if (input[0] >= 61) {
        if (input[17] >= 486) {
            if (input[15] >= -1094) {
                var154 = -9;
            } else {
                var154 = 15;
            }
        } else {
            if (input[13] >= -319) {
                var154 = 2;
            } else {
                var154 = 14;
            }
        }
    } else {
        if (input[15] >= -796) {
            if (input[18] >= 53) {
                var154 = 13;
            } else {
                var154 = -9;
            }
        } else {
            if (input[1] >= 413) {
                var154 = -6;
            } else {
                var154 = 18;
            }
        }
    }
    int16_t var155;
    if (input[0] >= 61) {
        if (input[17] >= 486) {
            if (input[15] >= -1094) {
                var155 = -9;
            } else {
                var155 = 13;
            }
        } else {
            if (input[13] >= -319) {
                var155 = 2;
            } else {
                var155 = 12;
            }
        }
    } else {
        if (input[15] >= -796) {
            if (input[0] >= 59) {
                var155 = -6;
            } else {
                var155 = -10;
            }
        } else {
            if (input[1] >= 413) {
                var155 = -6;
            } else {
                var155 = 15;
            }
        }
    }
    int16_t var156;
    if (input[0] >= 61) {
        if (input[10] >= -467) {
            if (input[4] >= 32) {
                var156 = 13;
            } else {
                var156 = 3;
            }
        } else {
            if (input[0] >= 63) {
                var156 = 7;
            } else {
                var156 = -9;
            }
        }
    } else {
        if (input[15] >= -731) {
            if (input[5] >= 37) {
                var156 = -10;
            } else {
                var156 = -5;
            }
        } else {
            if (input[1] >= 413) {
                var156 = -6;
            } else {
                var156 = 13;
            }
        }
    }
    int16_t var157;
    if (input[15] >= -359) {
        if (input[0] >= 62) {
            if (input[19] >= 180) {
                var157 = -7;
            } else {
                var157 = 11;
            }
        } else {
            if (input[1] >= 57) {
                var157 = -10;
            } else {
                var157 = -6;
            }
        }
    } else {
        if (input[8] >= 515) {
            if (input[15] >= -1340) {
                var157 = -10;
            } else {
                var157 = 13;
            }
        } else {
            if (input[10] >= -528) {
                var157 = 10;
            } else {
                var157 = -9;
            }
        }
    }
    int16_t var158;
    if (input[0] >= 60) {
        if (input[10] >= -441) {
            if (input[4] >= 25) {
                var158 = 11;
            } else {
                var158 = 1;
            }
        } else {
            if (input[15] >= -1037) {
                var158 = -7;
            } else {
                var158 = 10;
            }
        }
    } else {
        if (input[15] >= -808) {
            if (input[7] >= 57) {
                var158 = -10;
            } else {
                var158 = -7;
            }
        } else {
            var158 = 8;
        }
    }
    int16_t var159;
    if (input[13] >= -475) {
        if (input[1] >= 57) {
            if (input[7] >= 62) {
                var159 = 6;
            } else {
                var159 = -8;
            }
        } else {
            if (input[0] >= 59) {
                var159 = 8;
            } else {
                var159 = -7;
            }
        }
    } else {
        if (input[9] >= 598) {
            if (input[15] >= -986) {
                var159 = -10;
            } else {
                var159 = 8;
            }
        } else {
            if (input[10] >= -524) {
                var159 = 10;
            } else {
                var159 = -9;
            }
        }
    }
    int16_t var160;
    if (input[13] >= -504) {
        if (input[0] >= 60) {
            if (input[1] >= 213) {
                var160 = -8;
            } else {
                var160 = 5;
            }
        } else {
            if (input[7] >= 57) {
                var160 = -10;
            } else {
                var160 = -6;
            }
        }
    } else {
        if (input[9] >= 598) {
            if (input[15] >= -986) {
                var160 = -10;
            } else {
                var160 = 8;
            }
        } else {
            if (input[11] >= -527) {
                var160 = 10;
            } else {
                var160 = -7;
            }
        }
    }
    int16_t var161;
    if (input[15] >= -359) {
        if (input[3] >= -282) {
            if (input[0] >= 55) {
                var161 = 3;
            } else {
                var161 = -9;
            }
        } else {
            if (input[2] >= -4) {
                var161 = -9;
            } else {
                var161 = 2;
            }
        }
    } else {
        if (input[8] >= 515) {
            if (input[15] >= -1340) {
                var161 = -9;
            } else {
                var161 = 11;
            }
        } else {
            if (input[19] >= 327) {
                var161 = 0;
            } else {
                var161 = 9;
            }
        }
    }
    int16_t var162;
    if (input[13] >= -504) {
        if (input[6] >= 223) {
            if (input[10] >= -343) {
                var162 = 9;
            } else {
                var162 = -6;
            }
        } else {
            if (input[5] >= 39) {
                var162 = -8;
            } else {
                var162 = 0;
            }
        }
    } else {
        if (input[9] >= 598) {
            if (input[15] >= -986) {
                var162 = -9;
            } else {
                var162 = 6;
            }
        } else {
            if (input[10] >= -537) {
                var162 = 10;
            } else {
                var162 = -8;
            }
        }
    }
    int16_t var163;
    if (input[0] >= 59) {
        if (input[10] >= -438) {
            if (input[4] >= 32) {
                var163 = 9;
            } else {
                var163 = 1;
            }
        } else {
            if (input[15] >= -537) {
                var163 = -9;
            } else {
                var163 = 0;
            }
        }
    } else {
        if (input[7] >= 49) {
            if (input[11] >= -81) {
                var163 = 9;
            } else {
                var163 = -10;
            }
        } else {
            if (input[18] >= 0) {
                var163 = 9;
            } else {
                var163 = -7;
            }
        }
    }
    int16_t var164;
    if (input[15] >= -638) {
        if (input[6] >= 223) {
            if (input[10] >= -343) {
                var164 = 8;
            } else {
                var164 = -5;
            }
        } else {
            if (input[0] >= 63) {
                var164 = 8;
            } else {
                var164 = -5;
            }
        }
    } else {
        if (input[9] >= 598) {
            if (input[15] >= -986) {
                var164 = -9;
            } else {
                var164 = 4;
            }
        } else {
            if (input[19] >= 1144) {
                var164 = -6;
            } else {
                var164 = 10;
            }
        }
    }
    int16_t var165;
    if (input[0] >= 58) {
        if (input[10] >= -438) {
            if (input[1] >= 57) {
                var165 = 0;
            } else {
                var165 = 7;
            }
        } else {
            if (input[0] >= 62) {
                var165 = 3;
            } else {
                var165 = -8;
            }
        }
    } else {
        if (input[2] >= -21) {
            if (input[8] >= 99) {
                var165 = -9;
            } else {
                var165 = -1;
            }
        } else {
            if (input[19] >= 120) {
                var165 = 12;
            } else {
                var165 = -6;
            }
        }
    }
    int16_t var166;
    if (input[0] >= 63) {
        if (input[12] >= -20) {
            var166 = 9;
        } else {
            if (input[6] >= 138) {
                var166 = 4;
            } else {
                var166 = -7;
            }
        }
    } else {
        if (input[1] >= 57) {
            if (input[15] >= -967) {
                var166 = -6;
            } else {
                var166 = 8;
            }
        } else {
            if (input[0] >= 55) {
                var166 = 4;
            } else {
                var166 = -9;
            }
        }
    }
    int16_t var167;
    if (input[0] >= 63) {
        if (input[12] >= -20) {
            var167 = 9;
        } else {
            var167 = -2;
        }
    } else {
        if (input[1] >= 57) {
            if (input[3] >= -175) {
                var167 = 3;
            } else {
                var167 = -6;
            }
        } else {
            if (input[0] >= 55) {
                var167 = 3;
            } else {
                var167 = -9;
            }
        }
    }
    int16_t var168;
    if (input[15] >= -726) {
        if (input[11] >= -278) {
            if (input[0] >= 55) {
                var168 = 3;
            } else {
                var168 = -7;
            }
        } else {
            if (input[5] >= 40) {
                var168 = -8;
            } else {
                var168 = 0;
            }
        }
    } else {
        if (input[9] >= 606) {
            if (input[15] >= -986) {
                var168 = -7;
            } else {
                var168 = 3;
            }
        } else {
            if (input[10] >= -468) {
                var168 = 9;
            } else {
                var168 = -1;
            }
        }
    }
    int16_t var169;
    if (input[4] >= 48) {
        if (input[10] >= -508) {
            var169 = 9;
        } else {
            var169 = -3;
        }
    } else {
        if (input[7] >= 57) {
            if (input[0] >= 62) {
                var169 = 1;
            } else {
                var169 = -6;
            }
        } else {
            if (input[5] >= 142) {
                var169 = -8;
            } else {
                var169 = 5;
            }
        }
    }
    int16_t var170;
    if (input[0] >= 58) {
        if (input[10] >= -438) {
            if (input[4] >= 35) {
                var170 = 8;
            } else {
                var170 = 0;
            }
        } else {
            if (input[0] >= 62) {
                var170 = 3;
            } else {
                var170 = -8;
            }
        }
    } else {
        if (input[2] >= 22) {
            if (input[6] >= 632) {
                var170 = 2;
            } else {
                var170 = -9;
            }
        } else {
            if (input[20] >= 32) {
                var170 = 21;
            } else {
                var170 = -6;
            }
        }
    }
    int16_t var171;
    if (input[15] >= -784) {
        if (input[6] >= 223) {
            if (input[10] >= -231) {
                var171 = 8;
            } else {
                var171 = -1;
            }
        } else {
            if (input[5] >= 39) {
                var171 = -6;
            } else {
                var171 = 0;
            }
        }
    } else {
        if (input[9] >= 606) {
            if (input[19] >= 247) {
                var171 = 3;
            } else {
                var171 = -6;
            }
        } else {
            if (input[10] >= -468) {
                var171 = 9;
            } else {
                var171 = -2;
            }
        }
    }
    int16_t var172;
    if (input[0] >= 58) {
        if (input[19] >= 283) {
            if (input[4] >= 25) {
                var172 = 3;
            } else {
                var172 = -8;
            }
        } else {
            if (input[1] >= 220) {
                var172 = -3;
            } else {
                var172 = 5;
            }
        }
    } else {
        if (input[20] >= 51) {
            if (input[10] >= -325) {
                var172 = 13;
            } else {
                var172 = -5;
            }
        } else {
            if (input[8] >= 99) {
                var172 = -9;
            } else {
                var172 = 1;
            }
        }
    }
    int16_t var173;
    if (input[4] >= 48) {
        if (input[11] >= -487) {
            var173 = 8;
        } else {
            var173 = 0;
        }
    } else {
        if (input[7] >= 57) {
            if (input[0] >= 60) {
                var173 = -1;
            } else {
                var173 = -8;
            }
        } else {
            if (input[5] >= 142) {
                var173 = -7;
            } else {
                var173 = 4;
            }
        }
    }
    int16_t var174;
    if (input[10] >= -438) {
        if (input[16] >= 4) {
            if (input[0] >= 55) {
                var174 = 3;
            } else {
                var174 = -6;
            }
        } else {
            if (input[10] >= -242) {
                var174 = 0;
            } else {
                var174 = -10;
            }
        }
    } else {
        if (input[0] >= 62) {
            if (input[21] >= 18) {
                var174 = -5;
            } else {
                var174 = 8;
            }
        } else {
            if (input[15] >= -1037) {
                var174 = -9;
            } else {
                var174 = 5;
            }
        }
    }
    int16_t var175;
    if (input[0] >= 63) {
        if (input[12] >= -20) {
            var175 = 9;
        } else {
            var175 = -3;
        }
    } else {
        if (input[7] >= 57) {
            if (input[3] >= -250) {
                var175 = 1;
            } else {
                var175 = -6;
            }
        } else {
            if (input[13] >= -172) {
                var175 = -5;
            } else {
                var175 = 5;
            }
        }
    }
    int16_t var176;
    if (input[6] >= 217) {
        if (input[2] >= 912) {
            if (input[10] >= -255) {
                var176 = 0;
            } else {
                var176 = -10;
            }
        } else {
            if (input[17] >= 459) {
                var176 = -4;
            } else {
                var176 = 7;
            }
        }
    } else {
        if (input[15] >= -784) {
            if (input[2] >= 205) {
                var176 = -7;
            } else {
                var176 = 0;
            }
        } else {
            if (input[11] >= -488) {
                var176 = 8;
            } else {
                var176 = -1;
            }
        }
    }
    int16_t var177;
    if (input[0] >= 55) {
        if (input[10] >= -438) {
            if (input[1] >= 47) {
                var177 = -1;
            } else {
                var177 = 4;
            }
        } else {
            if (input[0] >= 62) {
                var177 = 3;
            } else {
                var177 = -8;
            }
        }
    } else {
        if (input[8] >= 77) {
            var177 = -8;
        } else {
            var177 = 2;
        }
    }
    int16_t var178;
    if (input[0] >= 61) {
        if (input[1] >= 213) {
            if (input[4] >= 32) {
                var178 = 6;
            } else {
                var178 = -9;
            }
        } else {
            if (input[19] >= 162) {
                var178 = 0;
            } else {
                var178 = 8;
            }
        }
    } else {
        if (input[11] >= -199) {
            if (input[6] >= 25) {
                var178 = 5;
            } else {
                var178 = -8;
            }
        } else {
            if (input[21] >= 43) {
                var178 = 2;
            } else {
                var178 = -8;
            }
        }
    }
    int16_t var179;
    if (input[0] >= 55) {
        if (input[12] >= -10) {
            if (input[11] >= -278) {
                var179 = 6;
            } else {
                var179 = -3;
            }
        } else {
            if (input[16] >= 13) {
                var179 = 2;
            } else {
                var179 = -6;
            }
        }
    } else {
        if (input[8] >= 77) {
            var179 = -8;
        } else {
            var179 = 3;
        }
    }
    int16_t var180;
    if (input[0] >= 61) {
        if (input[1] >= 221) {
            if (input[4] >= 32) {
                var180 = 6;
            } else {
                var180 = -8;
            }
        } else {
            if (input[19] >= 162) {
                var180 = 0;
            } else {
                var180 = 8;
            }
        }
    } else {
        if (input[3] >= -433) {
            if (input[20] >= 24) {
                var180 = 3;
            } else {
                var180 = -5;
            }
        } else {
            if (input[15] >= -934) {
                var180 = -10;
            } else {
                var180 = 3;
            }
        }
    }
    int16_t var181;
    if (input[15] >= -726) {
        if (input[21] >= 45) {
            var181 = -10;
        } else {
            if (input[21] >= 44) {
                var181 = 12;
            } else {
                var181 = 0;
            }
        }
    } else {
        if (input[9] >= 606) {
            var181 = -1;
        } else {
            if (input[10] >= -466) {
                var181 = 8;
            } else {
                var181 = 0;
            }
        }
    }
    int16_t var182;
    if (input[9] >= 161) {
        if (input[13] >= -328) {
            if (input[7] >= 38) {
                var182 = -5;
            } else {
                var182 = 10;
            }
        } else {
            if (input[13] >= -335) {
                var182 = 9;
            } else {
                var182 = 0;
            }
        }
    } else {
        if (input[9] >= 156) {
            if (input[10] >= -190) {
                var182 = 1;
            } else {
                var182 = 20;
            }
        } else {
            if (input[6] >= 164) {
                var182 = 5;
            } else {
                var182 = -4;
            }
        }
    }
    int16_t var183;
    if (input[4] >= 25) {
        if (input[3] >= -274) {
            if (input[2] >= 39) {
                var183 = 11;
            } else {
                var183 = 0;
            }
        } else {
            if (input[14] >= 36) {
                var183 = -6;
            } else {
                var183 = 5;
            }
        }
    } else {
        if (input[19] >= 283) {
            if (input[15] >= -819) {
                var183 = -10;
            } else {
                var183 = 4;
            }
        } else {
            if (input[8] >= 296) {
                var183 = -4;
            } else {
                var183 = 3;
            }
        }
    }
    int16_t var184;
    if (input[19] >= 40) {
        if (input[9] >= 89) {
            if (input[0] >= 55) {
                var184 = 0;
            } else {
                var184 = -8;
            }
        } else {
            if (input[13] >= -107) {
                var184 = -1;
            } else {
                var184 = 16;
            }
        }
    } else {
        if (input[0] >= 62) {
            var184 = 3;
        } else {
            if (input[4] >= 33) {
                var184 = -1;
            } else {
                var184 = -9;
            }
        }
    }
    int16_t var185;
    if (input[16] >= 4) {
        if (input[10] >= -438) {
            if (input[18] >= 0) {
                var185 = 3;
            } else {
                var185 = -4;
            }
        } else {
            if (input[15] >= -537) {
                var185 = -8;
            } else {
                var185 = 0;
            }
        }
    } else {
        if (input[6] >= 194) {
            if (input[0] >= 61) {
                var185 = 7;
            } else {
                var185 = -3;
            }
        } else {
            if (input[7] >= 48) {
                var185 = -7;
            } else {
                var185 = 4;
            }
        }
    }
    int16_t var186;
    if (input[12] >= -10) {
        if (input[12] >= -9) {
            if (input[10] >= -217) {
                var186 = 4;
            } else {
                var186 = -3;
            }
        } else {
            if (input[19] >= 117) {
                var186 = 15;
            } else {
                var186 = -3;
            }
        }
    } else {
        if (input[20] >= 51) {
            if (input[20] >= 52) {
                var186 = 0;
            } else {
                var186 = 11;
            }
        } else {
            if (input[6] >= 219) {
                var186 = 3;
            } else {
                var186 = -7;
            }
        }
    }
    int16_t var187;
    if (input[5] >= 39) {
        if (input[18] >= 30) {
            if (input[16] >= 5) {
                var187 = 9;
            } else {
                var187 = -3;
            }
        } else {
            if (input[6] >= -11) {
                var187 = -5;
            } else {
                var187 = 4;
            }
        }
    } else {
        if (input[5] >= 16) {
            if (input[13] >= -151) {
                var187 = -3;
            } else {
                var187 = 9;
            }
        } else {
            if (input[19] >= 141) {
                var187 = -6;
            } else {
                var187 = 3;
            }
        }
    }
    int16_t var188;
    if (input[19] >= 40) {
        if (input[19] >= 49) {
            if (input[4] >= 3) {
                var188 = 0;
            } else {
                var188 = -5;
            }
        } else {
            if (input[9] >= 185) {
                var188 = -1;
            } else {
                var188 = 13;
            }
        }
    } else {
        if (input[2] >= 229) {
            var188 = 2;
        } else {
            if (input[4] >= 28) {
                var188 = -2;
            } else {
                var188 = -8;
            }
        }
    }
    int16_t var189;
    if (input[16] >= 4) {
        if (input[10] >= -438) {
            if (input[5] >= 365) {
                var189 = -3;
            } else {
                var189 = 3;
            }
        } else {
            if (input[15] >= -537) {
                var189 = -8;
            } else {
                var189 = 0;
            }
        }
    } else {
        if (input[20] >= 20) {
            var189 = -8;
        } else {
            if (input[6] >= 47) {
                var189 = 2;
            } else {
                var189 = -7;
            }
        }
    }
    int16_t var190;
    if (input[15] >= -1024) {
        if (input[21] >= 45) {
            if (input[13] >= -504) {
                var190 = -10;
            } else {
                var190 = 2;
            }
        } else {
            if (input[21] >= 44) {
                var190 = 9;
            } else {
                var190 = 0;
            }
        }
    } else {
        var190 = 7;
    }
    int16_t var191;
    if (input[9] >= 89) {
        if (input[0] >= 55) {
            if (input[19] >= 422) {
                var191 = -5;
            } else {
                var191 = 1;
            }
        } else {
            var191 = -8;
        }
    } else {
        if (input[13] >= -173) {
            if (input[1] >= -7) {
                var191 = -5;
            } else {
                var191 = 3;
            }
        } else {
            var191 = 16;
        }
    }
    int16_t var192;
    if (input[12] >= -10) {
        if (input[12] >= -9) {
            if (input[18] >= 21) {
                var192 = 4;
            } else {
                var192 = -1;
            }
        } else {
            if (input[17] >= 284) {
                var192 = -1;
            } else {
                var192 = 12;
            }
        }
    } else {
        if (input[20] >= 41) {
            if (input[7] >= 58) {
                var192 = -5;
            } else {
                var192 = 4;
            }
        } else {
            if (input[7] >= 61) {
                var192 = 0;
            } else {
                var192 = -8;
            }
        }
    }
    int16_t var193;
    if (input[9] >= 89) {
        if (input[0] >= 55) {
            if (input[19] >= 422) {
                var193 = -4;
            } else {
                var193 = 1;
            }
        } else {
            var193 = -7;
        }
    } else {
        if (input[13] >= -173) {
            var193 = 0;
        } else {
            var193 = 14;
        }
    }
    int16_t var194;
    if (input[19] >= 40) {
        if (input[19] >= 49) {
            if (input[4] >= 23) {
                var194 = 2;
            } else {
                var194 = -1;
            }
        } else {
            if (input[9] >= 185) {
                var194 = -2;
            } else {
                var194 = 11;
            }
        }
    } else {
        if (input[0] >= 62) {
            var194 = 1;
        } else {
            var194 = -7;
        }
    }
    int16_t var195;
    if (input[16] >= 1) {
        if (input[12] >= -10) {
            if (input[10] >= -298) {
                var195 = 4;
            } else {
                var195 = -3;
            }
        } else {
            if (input[20] >= 42) {
                var195 = 1;
            } else {
                var195 = -5;
            }
        }
    } else {
        var195 = -6;
    }
    int16_t var196;
    if (input[15] >= -937) {
        if (input[21] >= 45) {
            if (input[13] >= -491) {
                var196 = -9;
            } else {
                var196 = 0;
            }
        } else {
            if (input[7] >= 50) {
                var196 = 0;
            } else {
                var196 = 6;
            }
        }
    } else {
        var196 = 6;
    }
    int16_t var197;
    if (input[5] >= 39) {
        if (input[16] >= 4) {
            if (input[14] >= 43) {
                var197 = 4;
            } else {
                var197 = -4;
            }
        } else {
            if (input[0] >= 62) {
                var197 = 0;
            } else {
                var197 = -8;
            }
        }
    } else {
        if (input[5] >= 20) {
            if (input[6] >= -8) {
                var197 = 9;
            } else {
                var197 = -4;
            }
        } else {
            if (input[19] >= 133) {
                var197 = -4;
            } else {
                var197 = 3;
            }
        }
    }
    int16_t var198;
    if (input[0] >= 50) {
        if (input[9] >= 89) {
            if (input[0] >= 61) {
                var198 = 1;
            } else {
                var198 = -1;
            }
        } else {
            if (input[13] >= -173) {
                var198 = 1;
            } else {
                var198 = 12;
            }
        }
    } else {
        var198 = -6;
    }
    int16_t var199;
    if (input[19] >= 41) {
        if (input[9] >= 108) {
            if (input[12] >= -4) {
                var199 = -7;
            } else {
                var199 = 0;
            }
        } else {
            if (input[13] >= -107) {
                var199 = -2;
            } else {
                var199 = 9;
            }
        }
    } else {
        if (input[0] >= 61) {
            var199 = 0;
        } else {
            var199 = -7;
        }
    }
    int16_t var200;
    if (input[15] >= -1024) {
        if (input[21] >= 45) {
            if (input[13] >= -491) {
                var200 = -9;
            } else {
                var200 = 0;
            }
        } else {
            if (input[21] >= 44) {
                var200 = 8;
            } else {
                var200 = 0;
            }
        }
    } else {
        var200 = 6;
    }
    /*
    softmax((int16_t[]){0 + (var1 + var2 + var3 + var4 + var5 + var6 + var7 + var8 + var9 + var10 + var11 + var12 + var13 + var14 + var15 + var16 + var17 + var18 + var19 + var20 + var21 + var22 + var23 + var24 + var25 + var26 + var27 + var28 + var29 + var30 + var31 + var32 + var33 + var34 + var35 + var36 + var37 + var38 + var39 + var40 + var41 + var42 + var43 + var44 + var45 + var46 + var47 + var48 + var49 + var50), 0 + (var51 + var52 + var53 + var54 + var55 + var56 + var57 + var58 + var59 + var60 + var61 + var62 + var63 + var64 + var65 + var66 + var67 + var68 + var69 + var70 + var71 + var72 + var73 + var74 + var75 + var76 + var77 + var78 + var79 + var80 + var81 + var82 + var83 + var84 + var85 + var86 + var87 + var88 + var89 + var90 + var91 + var92 + var93 + var94 + var95 + var96 + var97 + var98 + var99 + var100), 0 + (var101 + var102 + var103 + var104 + var105 + var106 + var107 + var108 + var109 + var110 + var111 + var112 + var113 + var114 + var115 + var116 + var117 + var118 + var119 + var120 + var121 + var122 + var123 + var124 + var125 + var126 + var127 + var128 + var129 + var130 + var131 + var132 + var133 + var134 + var135 + var136 + var137 + var138 + var139 + var140 + var141 + var142 + var143 + var144 + var145 + var146 + var147 + var148 + var149 + var150), 0 + (var151 + var152 + var153 + var154 + var155 + var156 + var157 + var158 + var159 + var160 + var161 + var162 + var163 + var164 + var165 + var166 + var167 + var168 + var169 + var170 + var171 + var172 + var173 + var174 + var175 + var176 + var177 + var178 + var179 + var180 + var181 + var182 + var183 + var184 + var185 + var186 + var187 + var188 + var189 + var190 + var191 + var192 + var193 + var194 + var195 + var196 + var197 + var198 + var199 + var200)}, 4, var0);
    
   // memcpy(output, var0, 4 * sizeof(int16_t));
  for (int16_t i = 0; i < 4; i++) {
    output[i] = var0[i];
  }
  */
  int16_t class_predict;
  class_predict = argmax((int16_t[]){0 + (var1 + var2 + var3 + var4 + var5 + var6 + var7 + var8 + var9 + var10 + var11 + var12 + var13 + var14 + var15 + var16 + var17 + var18 + var19 + var20 + var21 + var22 + var23 + var24 + var25 + var26 + var27 + var28 + var29 + var30 + var31 + var32 + var33 + var34 + var35 + var36 + var37 + var38 + var39 + var40 + var41 + var42 + var43 + var44 + var45 + var46 + var47 + var48 + var49 + var50), 0 + (var51 + var52 + var53 + var54 + var55 + var56 + var57 + var58 + var59 + var60 + var61 + var62 + var63 + var64 + var65 + var66 + var67 + var68 + var69 + var70 + var71 + var72 + var73 + var74 + var75 + var76 + var77 + var78 + var79 + var80 + var81 + var82 + var83 + var84 + var85 + var86 + var87 + var88 + var89 + var90 + var91 + var92 + var93 + var94 + var95 + var96 + var97 + var98 + var99 + var100), 0 + (var101 + var102 + var103 + var104 + var105 + var106 + var107 + var108 + var109 + var110 + var111 + var112 + var113 + var114 + var115 + var116 + var117 + var118 + var119 + var120 + var121 + var122 + var123 + var124 + var125 + var126 + var127 + var128 + var129 + var130 + var131 + var132 + var133 + var134 + var135 + var136 + var137 + var138 + var139 + var140 + var141 + var142 + var143 + var144 + var145 + var146 + var147 + var148 + var149 + var150), 0 + (var151 + var152 + var153 + var154 + var155 + var156 + var157 + var158 + var159 + var160 + var161 + var162 + var163 + var164 + var165 + var166 + var167 + var168 + var169 + var170 + var171 + var172 + var173 + var174 + var175 + var176 + var177 + var178 + var179 + var180 + var181 + var182 + var183 + var184 + var185 + var186 + var187 + var188 + var189 + var190 + var191 + var192 + var193 + var194 + var195 + var196 + var197 + var198 + var199 + var200)}, 4);

  return class_predict;
}
