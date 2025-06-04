#include "header.h"


static const int32_t num_class[] = {  4, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 22;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}

float my_exp(float expoente){

    float potencia = 1.0;
    float fatorial = 1.0;
    float result = 0.0;

    for(int i = 0; i < 30; i++){
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

void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if (!(data[2].missing != -1) || (data[2].fvalue < (float)1.1152632236)) {
    if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.41300854087)) {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-4.0759553909)) {
        result[0] += 0.3067332;
      } else {
        result[0] += 0.56958526;
      }
    } else {
      if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.50815623999)) {
        result[0] += 0.14181818;
      } else {
        result[0] += -0.18701299;
      }
    }
  } else {
    if (!(data[17].missing != -1) || (data[17].fvalue < (float)3.4164559841)) {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.95461988449)) {
        result[0] += 0.4379562;
      } else {
        result[0] += -0.18065935;
      }
    } else {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-3.3594961166)) {
        result[0] += -0.17954737;
      } else {
        result[0] += -0.070220165;
      }
    }
  }
  if (!(data[1].missing != -1) || (data[1].fvalue < (float)11.506848335)) {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.047804325819)) {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)6.2871088982)) {
        result[1] += -0.16230018;
      } else {
        result[1] += 0.041180246;
      }
    } else {
      if (!(data[3].missing != -1) || (data[3].fvalue < (float)-2.8932549953)) {
        result[1] += 0.49519652;
      } else {
        result[1] += -0.16208531;
      }
    }
  } else {
    if (!(data[5].missing != -1) || (data[5].fvalue < (float)31.633422852)) {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)4.0338997841)) {
        result[1] += -0.041221373;
      } else {
        result[1] += 0.5752737;
      }
    } else {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)1.6817426682)) {
        result[1] += -0.19211824;
      } else {
        result[1] += 0.40800002;
      }
    }
  }
  if (!(data[3].missing != -1) || (data[3].fvalue < (float)-10.572116852)) {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.19745609164)) {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)1.5675878525)) {
        result[2] += 0.5853361;
      } else {
        result[2] += -0.079245284;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)9.6803636551)) {
        result[2] += 0.17647061;
      } else {
        result[2] += -0.17922078;
      }
    }
  } else {
    if (!(data[11].missing != -1) || (data[11].fvalue < (float)-5.4009122849)) {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.14477318525)) {
        result[2] += 0.09603706;
      } else {
        result[2] += -0.15023328;
      }
    } else {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-4.1743431091)) {
        result[2] += -0.11419716;
      } else {
        result[2] += -0.19181256;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.98702800274)) {
    if (!(data[15].missing != -1) || (data[15].fvalue < (float)-9.97290802)) {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)9.8125228882)) {
        result[3] += 0.57798165;
      } else {
        result[3] += -0.1108014;
      }
    } else {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)5.9605236053)) {
        result[3] += -0.17106538;
      } else {
        result[3] += 0.11523179;
      }
    }
  } else {
    if (!(data[3].missing != -1) || (data[3].fvalue < (float)-9.9412097931)) {
      result[3] += -0.16097562;
    } else {
      result[3] += 0.59483504;
    }
  }
  if (!(data[2].missing != -1) || (data[2].fvalue < (float)1.3820059299)) {
    if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.54791253805)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)2.8356068134)) {
        result[0] += 0.3255749;
      } else {
        result[0] += -0.015203611;
      }
    } else {
      if (!(data[3].missing != -1) || (data[3].fvalue < (float)-1.099950552)) {
        result[0] += -0.18930498;
      } else {
        result[0] += 0.024782648;
      }
    }
  } else {
    if (!(data[8].missing != -1) || (data[8].fvalue < (float)2.7058253288)) {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.93444550037)) {
        result[0] += 0.34006387;
      } else {
        result[0] += -0.104404256;
      }
    } else {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)-0.0023768483661)) {
        result[0] += 0.051717386;
      } else {
        result[0] += -0.15669829;
      }
    }
  }
  if (!(data[1].missing != -1) || (data[1].fvalue < (float)6.8472409248)) {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.14245700836)) {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-2.9927453995)) {
        result[1] += 0.31876245;
      } else {
        result[1] += -0.123764575;
      }
    } else {
      if (!(data[2].missing != -1) || (data[2].fvalue < (float)3.8116354942)) {
        result[1] += -0.16551219;
      } else {
        result[1] += -0.030229935;
      }
    }
  } else {
    if (!(data[5].missing != -1) || (data[5].fvalue < (float)16.181442261)) {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)4.2610583305)) {
        result[1] += -0.042197127;
      } else {
        result[1] += 0.35043395;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)27.182434082)) {
        result[1] += -0.16947252;
      } else {
        result[1] += 0.27022135;
      }
    }
  }
  if (!(data[11].missing != -1) || (data[11].fvalue < (float)-8.1516647339)) {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.19683754444)) {
      if (!(data[3].missing != -1) || (data[3].fvalue < (float)-8.1258602142)) {
        result[2] += 0.35277072;
      } else {
        result[2] += -0.18548524;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)0.94907158613)) {
        result[2] += 0.2927451;
      } else {
        result[2] += -0.15909706;
      }
    }
  } else {
    if (!(data[10].missing != -1) || (data[10].fvalue < (float)-4.2806472778)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.81327068806)) {
        result[2] += 0.25626305;
      } else {
        result[2] += -0.084462285;
      }
    } else {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-4.1743431091)) {
        result[2] += -0.110422514;
      } else {
        result[2] += -0.17806748;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.98303568363)) {
    if (!(data[15].missing != -1) || (data[15].fvalue < (float)-9.97290802)) {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)9.8125228882)) {
        result[3] += 0.36544374;
      } else {
        result[3] += -0.078846455;
      }
    } else {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)3.4923579693)) {
        result[3] += -0.16982573;
      } else {
        result[3] += -0.028662808;
      }
    }
  } else {
    if (!(data[3].missing != -1) || (data[3].fvalue < (float)-8.7944698334)) {
      result[3] += -0.17202981;
    } else {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.50389289856)) {
        result[3] += 0.20108268;
      } else {
        result[3] += 0.37043208;
      }
    }
  }
  if (!(data[17].missing != -1) || (data[17].fvalue < (float)3.4164559841)) {
    if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.43003410101)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)3.429775238)) {
        result[0] += 0.2695268;
      } else {
        result[0] += 0.010659244;
      }
    } else {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)-0.3825404346)) {
        result[0] += 0.26821676;
      } else {
        result[0] += -0.14451589;
      }
    }
  } else {
    if (!(data[2].missing != -1) || (data[2].fvalue < (float)1.3820059299)) {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.40052038431)) {
        result[0] += 0.16660452;
      } else {
        result[0] += -0.12663849;
      }
    } else {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.64698886871)) {
        result[0] += 0.081796825;
      } else {
        result[0] += -0.14802659;
      }
    }
  }
  if (!(data[1].missing != -1) || (data[1].fvalue < (float)7.4985303879)) {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.058231126517)) {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)6.8207330704)) {
        result[1] += -0.14086004;
      } else {
        result[1] += 0.019020304;
      }
    } else {
      if (!(data[3].missing != -1) || (data[3].fvalue < (float)-3.6213107109)) {
        result[1] += 0.29129425;
      } else {
        result[1] += -0.11044165;
      }
    }
  } else {
    if (!(data[5].missing != -1) || (data[5].fvalue < (float)18.737201691)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.98477292061)) {
        result[1] += 0.26154816;
      } else {
        result[1] += -0.17635737;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)39.894916534)) {
        result[1] += -0.16130066;
      } else {
        result[1] += 0.22336544;
      }
    }
  }
  if (!(data[5].missing != -1) || (data[5].fvalue < (float)12.427200317)) {
    if (!(data[11].missing != -1) || (data[11].fvalue < (float)-5.4009122849)) {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)4.4819316864)) {
        result[2] += 0.079361215;
      } else {
        result[2] += -0.16416787;
      }
    } else {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.8827521801)) {
        result[2] += -0.10395977;
      } else {
        result[2] += -0.16974807;
      }
    }
  } else {
    if (!(data[3].missing != -1) || (data[3].fvalue < (float)-6.7861976624)) {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)27.040485382)) {
        result[2] += 0.3321062;
      } else {
        result[2] += -0.019026116;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)6.5371389389)) {
        result[2] += 0.21294644;
      } else {
        result[2] += -0.15547365;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.97991323471)) {
    if (!(data[15].missing != -1) || (data[15].fvalue < (float)-9.97290802)) {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)2.7841048241)) {
        result[3] += 0.28391227;
      } else {
        result[3] += -0.10362655;
      }
    } else {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)7.1821165085)) {
        result[3] += -0.15392737;
      } else {
        result[3] += 0.10016127;
      }
    }
  } else {
    if (!(data[17].missing != -1) || (data[17].fvalue < (float)7.900305748)) {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.93392825127)) {
        result[3] += -0.13341764;
      } else {
        result[3] += 0.27947217;
      }
    } else {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-18.266860962)) {
        result[3] += 0.19100264;
      } else {
        result[3] += -0.17004345;
      }
    }
  }
  if (!(data[17].missing != -1) || (data[17].fvalue < (float)3.4164559841)) {
    if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.43003410101)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)4.4034609795)) {
        result[0] += 0.2209566;
      } else {
        result[0] += -0.025203407;
      }
    } else {
      if (!(data[14].missing != -1) || (data[14].fvalue < (float)0.85633778572)) {
        result[0] += -0.15040393;
      } else {
        result[0] += 0.11999728;
      }
    }
  } else {
    if (!(data[2].missing != -1) || (data[2].fvalue < (float)0.98532176018)) {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.52646380663)) {
        result[0] += 0.14207955;
      } else {
        result[0] += -0.16259938;
      }
    } else {
      if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.22153042257)) {
        result[0] += -0.062490117;
      } else {
        result[0] += -0.1577272;
      }
    }
  }
  if (!(data[1].missing != -1) || (data[1].fvalue < (float)2.6174192429)) {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.033356714994)) {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-7.3260111809)) {
        result[1] += 0.020629127;
      } else {
        result[1] += -0.14665057;
      }
    } else {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-1.8154854774)) {
        result[1] += 0.23707381;
      } else {
        result[1] += -0.1615232;
      }
    }
  } else {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.98190021515)) {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)14.032497406)) {
        result[1] += 0.20232275;
      } else {
        result[1] += -0.009924284;
      }
    } else {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)8.4255056381)) {
        result[1] += -0.1753655;
      } else {
        result[1] += 0.001799886;
      }
    }
  }
  if (!(data[5].missing != -1) || (data[5].fvalue < (float)4.1895170212)) {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.89789974689)) {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-4.0844373703)) {
        result[2] += 0.06615041;
      } else {
        result[2] += -0.15545583;
      }
    } else {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-10.403841019)) {
        result[2] += 0.18429731;
      } else {
        result[2] += -0.15739073;
      }
    }
  } else {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)12.011581421)) {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-4.2806472778)) {
        result[2] += 0.2852077;
      } else {
        result[2] += -0.1564112;
      }
    } else {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)33.452232361)) {
        result[2] += -0.17212257;
      } else {
        result[2] += 0.1686792;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.95734858513)) {
    if (!(data[15].missing != -1) || (data[15].fvalue < (float)-12.442083359)) {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)6.4652881622)) {
        result[3] += 0.28624344;
      } else {
        result[3] += -0.10557211;
      }
    } else {
      if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.84189367294)) {
        result[3] += -0.15348634;
      } else {
        result[3] += 0.20965372;
      }
    }
  } else {
    if (!(data[17].missing != -1) || (data[17].fvalue < (float)7.5989751816)) {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-4.9998073578)) {
        result[3] += 0.23391317;
      } else {
        result[3] += 0.039329953;
      }
    } else {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-17.09503746)) {
        result[3] += 0.23772605;
      } else {
        result[3] += -0.15283418;
      }
    }
  }
  if (!(data[17].missing != -1) || (data[17].fvalue < (float)3.4164559841)) {
    if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.43003410101)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)3.429775238)) {
        result[0] += 0.19355758;
      } else {
        result[0] += -0.005156194;
      }
    } else {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)3.969004631)) {
        result[0] += -0.13734792;
      } else {
        result[0] += 0.13838597;
      }
    }
  } else {
    if (!(data[2].missing != -1) || (data[2].fvalue < (float)1.931866765)) {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.40052038431)) {
        result[0] += 0.10454434;
      } else {
        result[0] += -0.12362276;
      }
    } else {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.63363790512)) {
        result[0] += 0.074074626;
      } else {
        result[0] += -0.1348187;
      }
    }
  }
  if (!(data[1].missing != -1) || (data[1].fvalue < (float)2.0301551819)) {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.056122176349)) {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)13.654700279)) {
        result[1] += -0.14096108;
      } else {
        result[1] += 0.3676013;
      }
    } else {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)3.351565361)) {
        result[1] += -0.113531314;
      } else {
        result[1] += 0.23575863;
      }
    }
  } else {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.98190021515)) {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-3.5122811794)) {
        result[1] += 0.14849035;
      } else {
        result[1] += -0.10147922;
      }
    } else {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)13.473365784)) {
        result[1] += -0.15570097;
      } else {
        result[1] += 0.0509595;
      }
    }
  }
  if (!(data[5].missing != -1) || (data[5].fvalue < (float)2.2048797607)) {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.86483353376)) {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-4.0759553909)) {
        result[2] += 0.061705027;
      } else {
        result[2] += -0.15338539;
      }
    } else {
      if (!(data[14].missing != -1) || (data[14].fvalue < (float)0.94186353683)) {
        result[2] += -0.14956014;
      } else {
        result[2] += 0.38000023;
      }
    }
  } else {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)11.506848335)) {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-4.2806472778)) {
        result[2] += 0.21344216;
      } else {
        result[2] += -0.13980152;
      }
    } else {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)31.633422852)) {
        result[2] += -0.1639472;
      } else {
        result[2] += 0.13588555;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.95734858513)) {
    if (!(data[15].missing != -1) || (data[15].fvalue < (float)-12.442083359)) {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)6.4652881622)) {
        result[3] += 0.24038571;
      } else {
        result[3] += -0.09610989;
      }
    } else {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.92937016487)) {
        result[3] += -0.16057473;
      } else {
        result[3] += -0.09803815;
      }
    }
  } else {
    if (!(data[17].missing != -1) || (data[17].fvalue < (float)7.5989751816)) {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-4.9998073578)) {
        result[3] += 0.20175493;
      } else {
        result[3] += 0.034494597;
      }
    } else {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-17.09503746)) {
        result[3] += 0.20863745;
      } else {
        result[3] += -0.14375001;
      }
    }
  }
  if (!(data[11].missing != -1) || (data[11].fvalue < (float)-4.0844373703)) {
    if (!(data[2].missing != -1) || (data[2].fvalue < (float)2.1366820335)) {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.54791253805)) {
        result[0] += 0.04551355;
      } else {
        result[0] += -0.16721047;
      }
    } else {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)2.4063043594)) {
        result[0] += 0.1102684;
      } else {
        result[0] += -0.1310166;
      }
    }
  } else {
    if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.50692296028)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)3.3923997879)) {
        result[0] += 0.17450827;
      } else {
        result[0] += -0.027626242;
      }
    } else {
      result[0] += -0.16562343;
    }
  }
  if (!(data[1].missing != -1) || (data[1].fvalue < (float)11.506848335)) {
    if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.081391453743)) {
      if (!(data[2].missing != -1) || (data[2].fvalue < (float)2.3801550865)) {
        result[1] += -0.077481754;
      } else {
        result[1] += 0.1524855;
      }
    } else {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)6.6118240356)) {
        result[1] += -0.16345835;
      } else {
        result[1] += 0.017979367;
      }
    }
  } else {
    if (!(data[5].missing != -1) || (data[5].fvalue < (float)46.706554413)) {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-2.7463810444)) {
        result[1] += 0.18228266;
      } else {
        result[1] += -0.1309153;
      }
    } else {
      result[1] += -0.1791544;
    }
  }
  if (!(data[5].missing != -1) || (data[5].fvalue < (float)2.264477253)) {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.81289696693)) {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-4.0759553909)) {
        result[2] += 0.115613855;
      } else {
        result[2] += -0.14829572;
      }
    } else {
      if (!(data[14].missing != -1) || (data[14].fvalue < (float)0.94186353683)) {
        result[2] += -0.13739723;
      } else {
        result[2] += 0.31705326;
      }
    }
  } else {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)10.798477173)) {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-4.1737785339)) {
        result[2] += 0.1857812;
      } else {
        result[2] += -0.14021528;
      }
    } else {
      if (!(data[3].missing != -1) || (data[3].fvalue < (float)-8.5816478729)) {
        result[2] += 0.08807683;
      } else {
        result[2] += -0.1630584;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.95734858513)) {
    if (!(data[15].missing != -1) || (data[15].fvalue < (float)-11.427541733)) {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)6.4652881622)) {
        result[3] += 0.20563494;
      } else {
        result[3] += -0.10400137;
      }
    } else {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)0.59005862474)) {
        result[3] += -0.090580724;
      } else {
        result[3] += -0.1568642;
      }
    }
  } else {
    if (!(data[10].missing != -1) || (data[10].fvalue < (float)-7.3032546043)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.98681873083)) {
        result[3] += -0.15281454;
      } else {
        result[3] += 0.12257507;
      }
    } else {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.50352966785)) {
        result[3] += 0.053314265;
      } else {
        result[3] += 0.20329066;
      }
    }
  }
  if (!(data[11].missing != -1) || (data[11].fvalue < (float)-4.0844373703)) {
    if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.22153042257)) {
      if (!(data[2].missing != -1) || (data[2].fvalue < (float)3.8420677185)) {
        result[0] += 0.06062386;
      } else {
        result[0] += -0.100521445;
      }
    } else {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)-0.10803241283)) {
        result[0] += 0.10336435;
      } else {
        result[0] += -0.14431839;
      }
    }
  } else {
    if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.41320329905)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)2.9843754768)) {
        result[0] += 0.16281867;
      } else {
        result[0] += -0.0072284495;
      }
    } else {
      if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.50692296028)) {
        result[0] += -0.01705352;
      } else {
        result[0] += -0.16178618;
      }
    }
  }
  if (!(data[1].missing != -1) || (data[1].fvalue < (float)1.8697934151)) {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.033356714994)) {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-7.3260111809)) {
        result[1] += 0.02251517;
      } else {
        result[1] += -0.13924062;
      }
    } else {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)2.4084649086)) {
        result[1] += -0.16200398;
      } else {
        result[1] += 0.18336642;
      }
    }
  } else {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.14339444041)) {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.79593801498)) {
        result[1] += -0.097765304;
      } else {
        result[1] += 0.13793491;
      }
    } else {
      if (!(data[3].missing != -1) || (data[3].fvalue < (float)-3.3312079906)) {
        result[1] += 0.18932621;
      } else {
        result[1] += -0.08871571;
      }
    }
  }
  if (!(data[5].missing != -1) || (data[5].fvalue < (float)5.7702169418)) {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.096947737038)) {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.30474215746)) {
        result[2] += 0.096273206;
      } else {
        result[2] += -0.10024298;
      }
    } else {
      if (!(data[14].missing != -1) || (data[14].fvalue < (float)0.9545238018)) {
        result[2] += -0.16186388;
      } else {
        result[2] += 0.1286276;
      }
    }
  } else {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)15.9220047)) {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-4.1462955475)) {
        result[2] += 0.19662957;
      } else {
        result[2] += -0.15286247;
      }
    } else {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)47.344516754)) {
        result[2] += -0.15488286;
      } else {
        result[2] += 0.16546966;
      }
    }
  }
  if (!(data[15].missing != -1) || (data[15].fvalue < (float)-5.6123609543)) {
    if (!(data[8].missing != -1) || (data[8].fvalue < (float)8.0509729385)) {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-8.2604637146)) {
        result[3] += -0.15557563;
      } else {
        result[3] += 0.17145562;
      }
    } else {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-20.950223923)) {
        result[3] += 0.20870396;
      } else {
        result[3] += -0.15721105;
      }
    }
  } else {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.97515177727)) {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)0.89908427)) {
        result[3] += -0.09638701;
      } else {
        result[3] += -0.1584545;
      }
    } else {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)2.826366663)) {
        result[3] += 0.1754101;
      } else {
        result[3] += -0.12307852;
      }
    }
  }
  if (!(data[17].missing != -1) || (data[17].fvalue < (float)2.658107996)) {
    if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.47460877895)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)4.4034609795)) {
        result[0] += 0.17318715;
      } else {
        result[0] += -0.030394329;
      }
    } else {
      if (!(data[14].missing != -1) || (data[14].fvalue < (float)0.90191179514)) {
        result[0] += -0.14243808;
      } else {
        result[0] += 0.1015713;
      }
    }
  } else {
    if (!(data[11].missing != -1) || (data[11].fvalue < (float)-5.3725252151)) {
      if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.22827666998)) {
        result[0] += -0.050085843;
      } else {
        result[0] += -0.15688083;
      }
    } else {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)5.6150989532)) {
        result[0] += -0.039884638;
      } else {
        result[0] += 0.17439596;
      }
    }
  }
  if (!(data[2].missing != -1) || (data[2].fvalue < (float)2.8438801765)) {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.17451605201)) {
      if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.42427575588)) {
        result[1] += -0.08137535;
      } else {
        result[1] += 0.18224385;
      }
    } else {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)6.2608890533)) {
        result[1] += -0.15400349;
      } else {
        result[1] += -0.051949553;
      }
    }
  } else {
    if (!(data[13].missing != -1) || (data[13].fvalue < (float)-7.3937644958)) {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)13.548679352)) {
        result[1] += -0.11361065;
      } else {
        result[1] += 0.1411087;
      }
    } else {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)3.2402467728)) {
        result[1] += -0.13544965;
      } else {
        result[1] += 0.12705225;
      }
    }
  }
  if (!(data[5].missing != -1) || (data[5].fvalue < (float)1.5639111996)) {
    if (!(data[15].missing != -1) || (data[15].fvalue < (float)-3.498855114)) {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)8.3978176117)) {
        result[2] += -0.15869911;
      } else {
        result[2] += -0.06587646;
      }
    } else {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-4.0759553909)) {
        result[2] += 0.05713651;
      } else {
        result[2] += -0.14299776;
      }
    }
  } else {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.14477318525)) {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.81402903795)) {
        result[2] += 0.13461272;
      } else {
        result[2] += -0.058716882;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)0.95035117865)) {
        result[2] += 0.12907688;
      } else {
        result[2] += -0.14520733;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.94049072266)) {
    if (!(data[15].missing != -1) || (data[15].fvalue < (float)-12.627462387)) {
      result[3] += 0.13227814;
    } else {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.89682376385)) {
        result[3] += -0.11321458;
      } else {
        result[3] += -0.16307016;
      }
    }
  } else {
    if (!(data[10].missing != -1) || (data[10].fvalue < (float)-6.8915576935)) {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-16.218702316)) {
        result[3] += 0.15867294;
      } else {
        result[3] += -0.12474988;
      }
    } else {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.40079015493)) {
        result[3] += 0.025188852;
      } else {
        result[3] += 0.17525809;
      }
    }
  }
  if (!(data[17].missing != -1) || (data[17].fvalue < (float)2.658107996)) {
    if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.47460877895)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)4.4034609795)) {
        result[0] += 0.16421238;
      } else {
        result[0] += -0.0337074;
      }
    } else {
      if (!(data[14].missing != -1) || (data[14].fvalue < (float)0.89420998096)) {
        result[0] += -0.1332014;
      } else {
        result[0] += 0.07769094;
      }
    }
  } else {
    if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.48722171783)) {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-5.3725252151)) {
        result[0] += -0.08446148;
      } else {
        result[0] += 0.04517803;
      }
    } else {
      result[0] += -0.15942818;
    }
  }
  if (!(data[1].missing != -1) || (data[1].fvalue < (float)0.90798056126)) {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.13466648757)) {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.18682274222)) {
        result[1] += -0.07181563;
      } else {
        result[1] += 0.14901602;
      }
    } else {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)16.629283905)) {
        result[1] += -0.14155719;
      } else {
        result[1] += 0.016307011;
      }
    }
  } else {
    if (!(data[2].missing != -1) || (data[2].fvalue < (float)2.207587719)) {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.17451605201)) {
        result[1] += 0.13172275;
      } else {
        result[1] += -0.11516325;
      }
    } else {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.14339444041)) {
        result[1] += 0.026569344;
      } else {
        result[1] += 0.16317749;
      }
    }
  }
  if (!(data[5].missing != -1) || (data[5].fvalue < (float)1.5639111996)) {
    if (!(data[15].missing != -1) || (data[15].fvalue < (float)-3.498855114)) {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)8.7725496292)) {
        result[2] += -0.15018675;
      } else {
        result[2] += -0.04111139;
      }
    } else {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-4.0759553909)) {
        result[2] += 0.04683478;
      } else {
        result[2] += -0.13718909;
      }
    }
  } else {
    if (!(data[3].missing != -1) || (data[3].fvalue < (float)-4.751499176)) {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)9.4489126205)) {
        result[2] += 0.12748417;
      } else {
        result[2] += -0.04226589;
      }
    } else {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-1.5304143429)) {
        result[2] += -0.13889447;
      } else {
        result[2] += 0.16501002;
      }
    }
  }
  if (!(data[13].missing != -1) || (data[13].fvalue < (float)-7.4227428436)) {
    if (!(data[9].missing != -1) || (data[9].fvalue < (float)9.3577899933)) {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-8.1929702759)) {
        result[3] += -0.14388876;
      } else {
        result[3] += 0.1640235;
      }
    } else {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-15.409822464)) {
        result[3] += 0.1344355;
      } else {
        result[3] += -0.16161409;
      }
    }
  } else {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)0.89908427)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.93175828457)) {
        result[3] += -0.11902483;
      } else {
        result[3] += 0.12952702;
      }
    } else {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.98323988914)) {
        result[3] += -0.13854064;
      } else {
        result[3] += 0.10230802;
      }
    }
  }
  if (!(data[13].missing != -1) || (data[13].fvalue < (float)-2.5663666725)) {
    if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.549695611)) {
      if (!(data[2].missing != -1) || (data[2].fvalue < (float)3.8742897511)) {
        result[0] += 0.033741325;
      } else {
        result[0] += -0.09286133;
      }
    } else {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)0.0048219636083)) {
        result[0] += 0.060979437;
      } else {
        result[0] += -0.15777753;
      }
    }
  } else {
    if (!(data[6].missing != -1) || (data[6].fvalue < (float)2.9467101097)) {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)6.0962982178)) {
        result[0] += 0.14353088;
      } else {
        result[0] += -0.09244953;
      }
    } else {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.81181240082)) {
        result[0] += 0.18860424;
      } else {
        result[0] += -0.12934749;
      }
    }
  }
  if (!(data[2].missing != -1) || (data[2].fvalue < (float)2.8438801765)) {
    if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.051106870174)) {
      if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.20020779967)) {
        result[1] += -0.12465615;
      } else {
        result[1] += 0.11973529;
      }
    } else {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)6.495552063)) {
        result[1] += -0.15093303;
      } else {
        result[1] += -0.03440213;
      }
    }
  } else {
    if (!(data[13].missing != -1) || (data[13].fvalue < (float)-7.8023962975)) {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)9.9709787369)) {
        result[1] += -0.16144374;
      } else {
        result[1] += 0.06337751;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)0.31380069256)) {
        result[1] += -0.107314356;
      } else {
        result[1] += 0.099968396;
      }
    }
  }
  if (!(data[5].missing != -1) || (data[5].fvalue < (float)10.985957146)) {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)2.5755906105)) {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)1.2220623493)) {
        result[2] += -0.08456126;
      } else {
        result[2] += 0.10251699;
      }
    } else {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.26372998953)) {
        result[2] += 0.011022411;
      } else {
        result[2] += -0.13417946;
      }
    }
  } else {
    if (!(data[3].missing != -1) || (data[3].fvalue < (float)-6.7861976624)) {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)50.943088531)) {
        result[2] += 0.17555805;
      } else {
        result[2] += -0.103353985;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)12.054468155)) {
        result[2] += 0.07933949;
      } else {
        result[2] += -0.15609062;
      }
    }
  }
  if (!(data[13].missing != -1) || (data[13].fvalue < (float)-7.8774366379)) {
    if (!(data[9].missing != -1) || (data[9].fvalue < (float)9.3577899933)) {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-8.2351760864)) {
        result[3] += -0.120672256;
      } else {
        result[3] += 0.16825536;
      }
    } else {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-15.409822464)) {
        result[3] += 0.12592809;
      } else {
        result[3] += -0.15995732;
      }
    }
  } else {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.94056892395)) {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.89682376385)) {
        result[3] += -0.09421517;
      } else {
        result[3] += -0.15666777;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)3.3412189484)) {
        result[3] += 0.07989116;
      } else {
        result[3] += -0.12692265;
      }
    }
  }
  if (!(data[17].missing != -1) || (data[17].fvalue < (float)2.658107996)) {
    if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.47460877895)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)4.4034609795)) {
        result[0] += 0.15199497;
      } else {
        result[0] += -0.03068821;
      }
    } else {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-1.2358562946)) {
        result[0] += -0.12738511;
      } else {
        result[0] += 0.06456262;
      }
    }
  } else {
    if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.48722171783)) {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-5.3725252151)) {
        result[0] += -0.070054226;
      } else {
        result[0] += 0.033648085;
      }
    } else {
      result[0] += -0.15656917;
    }
  }
  if (!(data[1].missing != -1) || (data[1].fvalue < (float)13.197463036)) {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.10971010476)) {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)6.9325084686)) {
        result[1] += -0.14905365;
      } else {
        result[1] += 0.0071364045;
      }
    } else {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-3.5097436905)) {
        result[1] += 0.14174958;
      } else {
        result[1] += -0.086047605;
      }
    }
  } else {
    if (!(data[5].missing != -1) || (data[5].fvalue < (float)42.474334717)) {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-2.7398838997)) {
        result[1] += 0.14270134;
      } else {
        result[1] += -0.08671919;
      }
    } else {
      if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.19680944085)) {
        result[1] += -0.025975922;
      } else {
        result[1] += -0.17623064;
      }
    }
  }
  if (!(data[5].missing != -1) || (data[5].fvalue < (float)5.7702169418)) {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.55047816038)) {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.096947737038)) {
        result[2] += 0.031885754;
      } else {
        result[2] += -0.13725407;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)-0.60339772701)) {
        result[2] += 0.100029245;
      } else {
        result[2] += -0.16655788;
      }
    }
  } else {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)15.9220047)) {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-4.2806472778)) {
        result[2] += 0.16176099;
      } else {
        result[2] += -0.107045725;
      }
    } else {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)44.316440582)) {
        result[2] += -0.14568788;
      } else {
        result[2] += 0.14089142;
      }
    }
  }
  if (!(data[15].missing != -1) || (data[15].fvalue < (float)-5.6123609543)) {
    if (!(data[8].missing != -1) || (data[8].fvalue < (float)8.0509729385)) {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)5.1113777161)) {
        result[3] += 0.1527439;
      } else {
        result[3] += 0.014423072;
      }
    } else {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-20.950223923)) {
        result[3] += 0.17273448;
      } else {
        result[3] += -0.14436945;
      }
    }
  } else {
    if (!(data[3].missing != -1) || (data[3].fvalue < (float)-4.4155182838)) {
      if (!(data[2].missing != -1) || (data[2].fvalue < (float)-0.071500688791)) {
        result[3] += 0.033998184;
      } else {
        result[3] += -0.15146889;
      }
    } else {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.86864233017)) {
        result[3] += -0.14524348;
      } else {
        result[3] += 0.0571792;
      }
    }
  }
  if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.010620072484)) {
    if (!(data[5].missing != -1) || (data[5].fvalue < (float)6.2605228424)) {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)6.675403595)) {
        result[0] += 0.11761811;
      } else {
        result[0] += 0.30468014;
      }
    } else {
      if (!(data[2].missing != -1) || (data[2].fvalue < (float)3.4712245464)) {
        result[0] += 0.11624498;
      } else {
        result[0] += -0.13287587;
      }
    }
  } else {
    if (!(data[6].missing != -1) || (data[6].fvalue < (float)-0.0086477994919)) {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.37410649657)) {
        result[0] += 0.17195623;
      } else {
        result[0] += -0.02615049;
      }
    } else {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.549695611)) {
        result[0] += -0.027704692;
      } else {
        result[0] += -0.15326923;
      }
    }
  }
  if (!(data[2].missing != -1) || (data[2].fvalue < (float)3.7793622017)) {
    if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.081391453743)) {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)4.747979641)) {
        result[1] += -0.040080898;
      } else {
        result[1] += 0.10308423;
      }
    } else {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)17.632957458)) {
        result[1] += -0.13990039;
      } else {
        result[1] += 0.058672827;
      }
    }
  } else {
    if (!(data[3].missing != -1) || (data[3].fvalue < (float)-10.323783875)) {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.19745609164)) {
        result[1] += -0.15805009;
      } else {
        result[1] += 0.105236806;
      }
    } else {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)6.0272221565)) {
        result[1] += -0.0066878595;
      } else {
        result[1] += 0.116782054;
      }
    }
  }
  if (!(data[5].missing != -1) || (data[5].fvalue < (float)5.7702169418)) {
    if (!(data[15].missing != -1) || (data[15].fvalue < (float)-2.726297617)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.80220031738)) {
        result[2] += 0.039313734;
      } else {
        result[2] += -0.09903971;
      }
    } else {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-4.0759553909)) {
        result[2] += 0.14488733;
      } else {
        result[2] += -0.10009252;
      }
    }
  } else {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)15.9220047)) {
      if (!(data[3].missing != -1) || (data[3].fvalue < (float)-5.4031839371)) {
        result[2] += 0.15748206;
      } else {
        result[2] += -0.058169413;
      }
    } else {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-8.5819664001)) {
        result[2] += 0.09017746;
      } else {
        result[2] += -0.15669893;
      }
    }
  }
  if (!(data[13].missing != -1) || (data[13].fvalue < (float)-7.8774366379)) {
    if (!(data[9].missing != -1) || (data[9].fvalue < (float)9.3577899933)) {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-8.3908138275)) {
        result[3] += -0.12528531;
      } else {
        result[3] += 0.15712872;
      }
    } else {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-15.409822464)) {
        result[3] += 0.10929909;
      } else {
        result[3] += -0.1537296;
      }
    }
  } else {
    if (!(data[6].missing != -1) || (data[6].fvalue < (float)3.4923579693)) {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)0.61749362946)) {
        result[3] += -0.0080365185;
      } else {
        result[3] += -0.12795678;
      }
    } else {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-5.3618888855)) {
        result[3] += -0.09747256;
      } else {
        result[3] += 0.15369356;
      }
    }
  }
  if (!(data[17].missing != -1) || (data[17].fvalue < (float)2.658107996)) {
    if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.42744812369)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)4.4034609795)) {
        result[0] += 0.14434905;
      } else {
        result[0] += -0.0036169232;
      }
    } else {
      if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.08142657578)) {
        result[0] += -0.14765756;
      } else {
        result[0] += 0.070924304;
      }
    }
  } else {
    if (!(data[19].missing != -1) || (data[19].fvalue < (float)4.1361074448)) {
      if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.20116099715)) {
        result[0] += -0.011450024;
      } else {
        result[0] += -0.12148478;
      }
    } else {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-6.9615569115)) {
        result[0] += -0.16024077;
      } else {
        result[0] += 0.06679603;
      }
    }
  }
  if (!(data[1].missing != -1) || (data[1].fvalue < (float)0.90798056126)) {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.15963765979)) {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)-0.023107718676)) {
        result[1] += -0.14408347;
      } else {
        result[1] += 0.10395735;
      }
    } else {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)6.6972208023)) {
        result[1] += -0.14945965;
      } else {
        result[1] += -0.016874326;
      }
    }
  } else {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.11104912311)) {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)7.3774595261)) {
        result[1] += -0.11324281;
      } else {
        result[1] += 0.068409055;
      }
    } else {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.96415299177)) {
        result[1] += 0.14680144;
      } else {
        result[1] += -0.08778282;
      }
    }
  }
  if (!(data[5].missing != -1) || (data[5].fvalue < (float)2.1646842957)) {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.88273060322)) {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.16578151286)) {
        result[2] += -0.14813125;
      } else {
        result[2] += 0.045152575;
      }
    } else {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)8.7725496292)) {
        result[2] += -0.1315128;
      } else {
        result[2] += 0.050936967;
      }
    }
  } else {
    if (!(data[3].missing != -1) || (data[3].fvalue < (float)-5.5931129456)) {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)9.8121213913)) {
        result[2] += 0.1309115;
      } else {
        result[2] += -0.017019758;
      }
    } else {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.26833736897)) {
        result[2] += 0.113131724;
      } else {
        result[2] += -0.11272388;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.92937016487)) {
    if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.77557373047)) {
      if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.010639637709)) {
        result[3] += -0.12405727;
      } else {
        result[3] += 0.14389588;
      }
    } else {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-1.2667068243)) {
        result[3] += -0.15764584;
      } else {
        result[3] += 0.14380361;
      }
    }
  } else {
    if (!(data[10].missing != -1) || (data[10].fvalue < (float)-6.8545765877)) {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-8.3963737488)) {
        result[3] += -0.0033236782;
      } else {
        result[3] += -0.14374048;
      }
    } else {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.50352966785)) {
        result[3] += 0.024653928;
      } else {
        result[3] += 0.1513521;
      }
    }
  }
  if (!(data[17].missing != -1) || (data[17].fvalue < (float)2.658107996)) {
    if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.42744812369)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)4.4034609795)) {
        result[0] += 0.13874671;
      } else {
        result[0] += -0.004954664;
      }
    } else {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.17891338468)) {
        result[0] += 0.15452346;
      } else {
        result[0] += -0.09161476;
      }
    }
  } else {
    if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.48722171783)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.96851104498)) {
        result[0] += -0.02722758;
      } else {
        result[0] += 0.09842711;
      }
    } else {
      result[0] += -0.15327407;
    }
  }
  if (!(data[2].missing != -1) || (data[2].fvalue < (float)2.8438801765)) {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.19530634582)) {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-1.8943897486)) {
        result[1] += 0.10226945;
      } else {
        result[1] += -0.11922997;
      }
    } else {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-4.8186740875)) {
        result[1] += -0.05911528;
      } else {
        result[1] += -0.15952562;
      }
    }
  } else {
    if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.081391453743)) {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)2.9449634552)) {
        result[1] += -0.14177804;
      } else {
        result[1] += 0.1323078;
      }
    } else {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)7.4566049576)) {
        result[1] += -0.09708509;
      } else {
        result[1] += 0.058612;
      }
    }
  }
  if (!(data[5].missing != -1) || (data[5].fvalue < (float)9.9327125549)) {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.55047816038)) {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.1876321435)) {
        result[2] += 0.11694185;
      } else {
        result[2] += -0.038524926;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)-0.60339772701)) {
        result[2] += 0.076946355;
      } else {
        result[2] += -0.15277806;
      }
    }
  } else {
    if (!(data[3].missing != -1) || (data[3].fvalue < (float)-4.7494969368)) {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)15.9220047)) {
        result[2] += 0.16233335;
      } else {
        result[2] += 0.0012167251;
      }
    } else {
      result[2] += -0.13685733;
    }
  }
  if (!(data[15].missing != -1) || (data[15].fvalue < (float)-9.97290802)) {
    if (!(data[9].missing != -1) || (data[9].fvalue < (float)9.3577899933)) {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)17.889888763)) {
        result[3] += 0.1566187;
      } else {
        result[3] += -0.108229525;
      }
    } else {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-15.409822464)) {
        result[3] += 0.07632348;
      } else {
        result[3] += -0.14725028;
      }
    }
  } else {
    if (!(data[6].missing != -1) || (data[6].fvalue < (float)3.4923579693)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.98977148533)) {
        result[3] += -0.09008881;
      } else {
        result[3] += 0.1396794;
      }
    } else {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-5.3618888855)) {
        result[3] += -0.08751942;
      } else {
        result[3] += 0.13266478;
      }
    }
  }
  if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.0036641201004)) {
    if (!(data[5].missing != -1) || (data[5].fvalue < (float)3.225394249)) {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)6.675403595)) {
        result[0] += 0.10108008;
      } else {
        result[0] += 0.31610435;
      }
    } else {
      if (!(data[2].missing != -1) || (data[2].fvalue < (float)3.4712245464)) {
        result[0] += 0.120359965;
      } else {
        result[0] += -0.12632328;
      }
    }
  } else {
    if (!(data[6].missing != -1) || (data[6].fvalue < (float)0.1740745306)) {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.74332696199)) {
        result[0] += 0.10239475;
      } else {
        result[0] += -0.14177085;
      }
    } else {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.14508676529)) {
        result[0] += 0.0017878772;
      } else {
        result[0] += -0.08396221;
      }
    }
  }
  if (!(data[1].missing != -1) || (data[1].fvalue < (float)1.8009738922)) {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.10166999698)) {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)6.6930961609)) {
        result[1] += -0.14319898;
      } else {
        result[1] += 0.0064960513;
      }
    } else {
      if (!(data[3].missing != -1) || (data[3].fvalue < (float)-4.7440500259)) {
        result[1] += 0.16674355;
      } else {
        result[1] += -0.057647184;
      }
    }
  } else {
    if (!(data[5].missing != -1) || (data[5].fvalue < (float)10.673128128)) {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.82501971722)) {
        result[1] += -0.10082457;
      } else {
        result[1] += 0.08740241;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)18.987400055)) {
        result[1] += -0.14503925;
      } else {
        result[1] += 0.05789702;
      }
    }
  }
  if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.096947737038)) {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.27051591873)) {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.21788659692)) {
        result[2] += 0.021167789;
      } else {
        result[2] += 0.2097987;
      }
    } else {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-5.1237640381)) {
        result[2] += 0.035054605;
      } else {
        result[2] += -0.13602653;
      }
    }
  } else {
    if (!(data[14].missing != -1) || (data[14].fvalue < (float)0.9545238018)) {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.86284399033)) {
        result[2] += -0.031279307;
      } else {
        result[2] += -0.14376578;
      }
    } else {
      result[2] += 0.23329449;
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.90638494492)) {
    if (!(data[2].missing != -1) || (data[2].fvalue < (float)-0.34144294262)) {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)1.8903803825)) {
        result[3] += -0.10670944;
      } else {
        result[3] += 0.19846162;
      }
    } else {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)1.5623791218)) {
        result[3] += -0.022609742;
      } else {
        result[3] += -0.14757696;
      }
    }
  } else {
    if (!(data[10].missing != -1) || (data[10].fvalue < (float)-6.8545765877)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.97953343391)) {
        result[3] += -0.13015838;
      } else {
        result[3] += 0.04821222;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)0.90060776472)) {
        result[3] += 0.12297568;
      } else {
        result[3] += 0.0037527182;
      }
    }
  }
  if (!(data[17].missing != -1) || (data[17].fvalue < (float)2.658107996)) {
    if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.42744812369)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)4.4034609795)) {
        result[0] += 0.13030453;
      } else {
        result[0] += 0.010424035;
      }
    } else {
      if (!(data[14].missing != -1) || (data[14].fvalue < (float)0.83111983538)) {
        result[0] += -0.12848374;
      } else {
        result[0] += 0.074580245;
      }
    }
  } else {
    if (!(data[19].missing != -1) || (data[19].fvalue < (float)4.1361074448)) {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)0.58146560192)) {
        result[0] += 0.07372995;
      } else {
        result[0] += -0.07304131;
      }
    } else {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-6.9615569115)) {
        result[0] += -0.15311846;
      } else {
        result[0] += 0.058172025;
      }
    }
  }
  if (!(data[2].missing != -1) || (data[2].fvalue < (float)3.7793622017)) {
    if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.047235995531)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.94502031803)) {
        result[1] += 0.09853253;
      } else {
        result[1] += -0.12228767;
      }
    } else {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)4.6435952187)) {
        result[1] += -0.1450741;
      } else {
        result[1] += -0.034561206;
      }
    }
  } else {
    if (!(data[3].missing != -1) || (data[3].fvalue < (float)-10.323783875)) {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.19745609164)) {
        result[1] += -0.14691626;
      } else {
        result[1] += 0.08819652;
      }
    } else {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)2.9460761547)) {
        result[1] += -0.14606819;
      } else {
        result[1] += 0.07080401;
      }
    }
  }
  if (!(data[5].missing != -1) || (data[5].fvalue < (float)3.4830312729)) {
    if (!(data[15].missing != -1) || (data[15].fvalue < (float)-2.7648508549)) {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.26418974996)) {
        result[2] += -0.13904794;
      } else {
        result[2] += -0.021119174;
      }
    } else {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-2.562962532)) {
        result[2] += 0.14952958;
      } else {
        result[2] += -0.06767965;
      }
    }
  } else {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)9.4404287338)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.98292833567)) {
        result[2] += 0.12402617;
      } else {
        result[2] += -0.0742721;
      }
    } else {
      if (!(data[3].missing != -1) || (data[3].fvalue < (float)-8.5816478729)) {
        result[2] += 0.074707;
      } else {
        result[2] += -0.14220615;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.98702800274)) {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)0.90506601334)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.8687684536)) {
        result[3] += -0.14899673;
      } else {
        result[3] += 0.06898025;
      }
    } else {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-15.116667747)) {
        result[3] += 0.13040873;
      } else {
        result[3] += -0.10656675;
      }
    }
  } else {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.31551420689)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)2.1703882217)) {
        result[3] += -0.1136354;
      } else {
        result[3] += 0.06983236;
      }
    } else {
      result[3] += 0.15367338;
    }
  }
  if (!(data[4].missing != -1) || (data[4].fvalue < (float)-0.041614197195)) {
    if (!(data[5].missing != -1) || (data[5].fvalue < (float)2.5886926651)) {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)6.675403595)) {
        result[0] += 0.12065118;
      } else {
        result[0] += 0.3275981;
      }
    } else {
      if (!(data[2].missing != -1) || (data[2].fvalue < (float)3.4712245464)) {
        result[0] += 0.108142294;
      } else {
        result[0] += -0.11063038;
      }
    }
  } else {
    if (!(data[6].missing != -1) || (data[6].fvalue < (float)2.9340088367)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.89868831635)) {
        result[0] += -0.05263413;
      } else {
        result[0] += 0.040755138;
      }
    } else {
      if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.025438908488)) {
        result[0] += 0.11838298;
      } else {
        result[0] += -0.12590851;
      }
    }
  }
  if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.81690782309)) {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.47363108397)) {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-7.0617551804)) {
        result[1] += -0.13107046;
      } else {
        result[1] += 0.1025291;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)25.199026108)) {
        result[1] += -0.17153859;
      } else {
        result[1] += -0.037202206;
      }
    }
  } else {
    if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.34073540568)) {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)3.0823040009)) {
        result[1] += -0.12623794;
      } else {
        result[1] += 0.07470483;
      }
    } else {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.19041010737)) {
        result[1] += 0.084912725;
      } else {
        result[1] += -0.08976851;
      }
    }
  }
  if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.069190435112)) {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.27051591873)) {
      if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.031591996551)) {
        result[2] += -0.060374662;
      } else {
        result[2] += 0.14248087;
      }
    } else {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-5.1237640381)) {
        result[2] += 0.023594517;
      } else {
        result[2] += -0.118316814;
      }
    }
  } else {
    if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.01602595672)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.85728746653)) {
        result[2] += -0.114511535;
      } else {
        result[2] += 0.21174747;
      }
    } else {
      result[2] += -0.15076444;
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.98702800274)) {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)0.90506601334)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.8687684536)) {
        result[3] += -0.1465756;
      } else {
        result[3] += 0.056961846;
      }
    } else {
      if (!(data[3].missing != -1) || (data[3].fvalue < (float)-2.7492179871)) {
        result[3] += -0.1073561;
      } else {
        result[3] += 0.05547699;
      }
    }
  } else {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.31551420689)) {
      result[3] += -0.031850863;
    } else {
      result[3] += 0.15138172;
    }
  }
  if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.50442397594)) {
    if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.029339775443)) {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.41039037704)) {
        result[0] += 0.16580921;
      } else {
        result[0] += -0.07707479;
      }
    } else {
      if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.072104252875)) {
        result[0] += -0.073805764;
      } else {
        result[0] += 0.028438708;
      }
    }
  } else {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.099119320512)) {
      result[0] += -0.0118216565;
    } else {
      result[0] += -0.14956143;
    }
  }
  if (!(data[8].missing != -1) || (data[8].fvalue < (float)6.7056064606)) {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.11104912311)) {
      if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.034641586244)) {
        result[1] += 0.03214672;
      } else {
        result[1] += -0.1316447;
      }
    } else {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.94080078602)) {
        result[1] += 0.08484401;
      } else {
        result[1] += -0.09164647;
      }
    }
  } else {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)2.601546526)) {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)8.0114078522)) {
        result[1] += 0.098519966;
      } else {
        result[1] += -0.110233225;
      }
    } else {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)12.273612976)) {
        result[1] += 0.1174444;
      } else {
        result[1] += -0.021097444;
      }
    }
  }
  if (!(data[5].missing != -1) || (data[5].fvalue < (float)9.9327125549)) {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.55047816038)) {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.2523869276)) {
        result[2] += 0.16625938;
      } else {
        result[2] += -0.011320513;
      }
    } else {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)5.3266420364)) {
        result[2] += -0.05790369;
      } else {
        result[2] += -0.17094597;
      }
    }
  } else {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.14433291554)) {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)3.6192626953)) {
        result[2] += -0.06627764;
      } else {
        result[2] += 0.12664782;
      }
    } else {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.25738531351)) {
        result[2] += -0.0172286;
      } else {
        result[2] += -0.1292902;
      }
    }
  }
  if (!(data[15].missing != -1) || (data[15].fvalue < (float)-11.357503891)) {
    if (!(data[9].missing != -1) || (data[9].fvalue < (float)9.4829730988)) {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-7.3146238327)) {
        result[3] += -0.029635629;
      } else {
        result[3] += 0.15457709;
      }
    } else {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-15.409822464)) {
        result[3] += 0.056703035;
      } else {
        result[3] += -0.11561436;
      }
    }
  } else {
    if (!(data[11].missing != -1) || (data[11].fvalue < (float)-4.3559570312)) {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)0.62702935934)) {
        result[3] += 0.004912348;
      } else {
        result[3] += -0.1279884;
      }
    } else {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.86864233017)) {
        result[3] += -0.12116545;
      } else {
        result[3] += 0.059946742;
      }
    }
  }
  if (!(data[17].missing != -1) || (data[17].fvalue < (float)2.658107996)) {
    if (!(data[16].missing != -1) || (data[16].fvalue < (float)-0.016022240743)) {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)1.0573767424)) {
        result[0] += 0.08352398;
      } else {
        result[0] += -0.21723182;
      }
    } else {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)2.4937782288)) {
        result[0] += 0.13396977;
      } else {
        result[0] += 0.0071017114;
      }
    }
  } else {
    if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.48722171783)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.96851104498)) {
        result[0] += -0.021382937;
      } else {
        result[0] += 0.09285037;
      }
    } else {
      result[0] += -0.14915153;
    }
  }
  if (!(data[2].missing != -1) || (data[2].fvalue < (float)2.8438801765)) {
    if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.063613191247)) {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)0.71091473103)) {
        result[1] += 0.075377755;
      } else {
        result[1] += -0.058428217;
      }
    } else {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)17.768386841)) {
        result[1] += -0.12712191;
      } else {
        result[1] += 0.039650522;
      }
    }
  } else {
    if (!(data[15].missing != -1) || (data[15].fvalue < (float)-2.6503481865)) {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.23931825161)) {
        result[1] += -0.020033225;
      } else {
        result[1] += 0.086071596;
      }
    } else {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.89380294085)) {
        result[1] += 0.002004139;
      } else {
        result[1] += -0.1795568;
      }
    }
  }
  if (!(data[15].missing != -1) || (data[15].fvalue < (float)-2.3520476818)) {
    if (!(data[5].missing != -1) || (data[5].fvalue < (float)5.7702169418)) {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.34787201881)) {
        result[2] += -0.10166723;
      } else {
        result[2] += 0.0115845315;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)10.922595978)) {
        result[2] += 0.103633076;
      } else {
        result[2] += -0.028189352;
      }
    }
  } else {
    if (!(data[10].missing != -1) || (data[10].fvalue < (float)-2.5804185867)) {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.80136799812)) {
        result[2] += 0.33672896;
      } else {
        result[2] += 0.1131743;
      }
    } else {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)3.7239806652)) {
        result[2] += -0.13552694;
      } else {
        result[2] += 0.061004136;
      }
    }
  }
  if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.75246345997)) {
    if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.89699542522)) {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)2.2338867188)) {
        result[3] += 0.09138194;
      } else {
        result[3] += -0.12927967;
      }
    } else {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.97515273094)) {
        result[3] += -0.10363679;
      } else {
        result[3] += 0.022475678;
      }
    }
  } else {
    if (!(data[10].missing != -1) || (data[10].fvalue < (float)-7.9471173286)) {
      result[3] += -0.050997082;
    } else {
      result[3] += 0.1475481;
    }
  }
  if (!(data[13].missing != -1) || (data[13].fvalue < (float)-4.9178380966)) {
    if (!(data[14].missing != -1) || (data[14].fvalue < (float)0.61297738552)) {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-5.6124620438)) {
        result[0] += -0.15119654;
      } else {
        result[0] += -0.01405842;
      }
    } else {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)2.9149017334)) {
        result[0] += 0.10866437;
      } else {
        result[0] += -0.15056862;
      }
    }
  } else {
    if (!(data[15].missing != -1) || (data[15].fvalue < (float)-5.0163402557)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.953820467)) {
        result[0] += 0.10403011;
      } else {
        result[0] += 0.4025185;
      }
    } else {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.94152915478)) {
        result[0] += -0.029372526;
      } else {
        result[0] += 0.07476291;
      }
    }
  }
  if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.83201313019)) {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.13923540711)) {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.49132490158)) {
        result[1] += -0.04874404;
      } else {
        result[1] += -0.1578309;
      }
    } else {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-5.4050178528)) {
        result[1] += 0.12276246;
      } else {
        result[1] += -0.031942587;
      }
    }
  } else {
    if (!(data[8].missing != -1) || (data[8].fvalue < (float)7.441069603)) {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.19929212332)) {
        result[1] += -0.03940712;
      } else {
        result[1] += -0.494863;
      }
    } else {
      if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.63125801086)) {
        result[1] += 0.15830293;
      } else {
        result[1] += -0.10650941;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.81327068806)) {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.16529144347)) {
      result[2] += -0.1402307;
    } else {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.00088835298084)) {
        result[2] += -0.061625767;
      } else {
        result[2] += 0.132474;
      }
    }
  } else {
    if (!(data[11].missing != -1) || (data[11].fvalue < (float)-10.127515793)) {
      if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.54891759157)) {
        result[2] += 0.14068428;
      } else {
        result[2] += -0.022053534;
      }
    } else {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.35486292839)) {
        result[2] += 0.016363455;
      } else {
        result[2] += -0.07914962;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.90638494492)) {
    if (!(data[2].missing != -1) || (data[2].fvalue < (float)0.34746700525)) {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.50547277927)) {
        result[3] += -0.10449089;
      } else {
        result[3] += 0.33343932;
      }
    } else {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)9.8777008057)) {
        result[3] += -0.15127307;
      } else {
        result[3] += 0.041252077;
      }
    }
  } else {
    if (!(data[10].missing != -1) || (data[10].fvalue < (float)-6.8545765877)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.97953343391)) {
        result[3] += -0.1267113;
      } else {
        result[3] += 0.052788895;
      }
    } else {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.55012601614)) {
        result[3] += 0.015500808;
      } else {
        result[3] += 0.13561542;
      }
    }
  }
  if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.2055388689)) {
    if (!(data[9].missing != -1) || (data[9].fvalue < (float)6.770442009)) {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)4.1212129593)) {
        result[0] += -0.02135301;
      } else {
        result[0] += 0.12954348;
      }
    } else {
      if (!(data[14].missing != -1) || (data[14].fvalue < (float)0.41910797358)) {
        result[0] += -0.031217152;
      } else {
        result[0] += 0.20783019;
      }
    }
  } else {
    if (!(data[14].missing != -1) || (data[14].fvalue < (float)0.85030949116)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)-0.097471103072)) {
        result[0] += 0.064133026;
      } else {
        result[0] += -0.08831878;
      }
    } else {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)4.7850923538)) {
        result[0] += 0.13277148;
      } else {
        result[0] += -0.11278574;
      }
    }
  }
  if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.81690782309)) {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.47363108397)) {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-7.0617551804)) {
        result[1] += -0.11927772;
      } else {
        result[1] += 0.092059135;
      }
    } else {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)12.536029816)) {
        result[1] += -0.17306176;
      } else {
        result[1] += -0.040825855;
      }
    }
  } else {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)0.43856218457)) {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)-0.80530697107)) {
        result[1] += 0.09494277;
      } else {
        result[1] += -0.087633915;
      }
    } else {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.94688820839)) {
        result[1] += 0.08176732;
      } else {
        result[1] += -0.021039078;
      }
    }
  }
  if (!(data[5].missing != -1) || (data[5].fvalue < (float)0.91126871109)) {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.31782376766)) {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)8.2565307617)) {
        result[2] += -0.04231748;
      } else {
        result[2] += 0.23328784;
      }
    } else {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-9.9504108429)) {
        result[2] += 0.03794308;
      } else {
        result[2] += -0.15570998;
      }
    }
  } else {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)0.62550252676)) {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-5.416472435)) {
        result[2] += -0.016481686;
      } else {
        result[2] += 0.18168218;
      }
    } else {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.15920251608)) {
        result[2] += 0.03362532;
      } else {
        result[2] += -0.09697508;
      }
    }
  }
  if (!(data[15].missing != -1) || (data[15].fvalue < (float)-12.2628479)) {
    if (!(data[9].missing != -1) || (data[9].fvalue < (float)9.4829730988)) {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-7.3146238327)) {
        result[3] += -0.032559436;
      } else {
        result[3] += 0.14899419;
      }
    } else {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)3.8670945168)) {
        result[3] += -0.09415995;
      } else {
        result[3] += 0.049830522;
      }
    }
  } else {
    if (!(data[6].missing != -1) || (data[6].fvalue < (float)3.4923579693)) {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)0.61749362946)) {
        result[3] += 0.008114231;
      } else {
        result[3] += -0.097040765;
      }
    } else {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-3.621752739)) {
        result[3] += -0.019928604;
      } else {
        result[3] += 0.14009677;
      }
    }
  }
  if (!(data[10].missing != -1) || (data[10].fvalue < (float)-1.4621795416)) {
    if (!(data[10].missing != -1) || (data[10].fvalue < (float)-1.4902353287)) {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.07904933393)) {
        result[0] += 0.19594745;
      } else {
        result[0] += -0.0071707736;
      }
    } else {
      result[0] += -0.35399675;
    }
  } else {
    if (!(data[6].missing != -1) || (data[6].fvalue < (float)4.4677929878)) {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-4.0886831284)) {
        result[0] += 0.018096576;
      } else {
        result[0] += 0.16111368;
      }
    } else {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)0.57718962431)) {
        result[0] += -0.12856999;
      } else {
        result[0] += 0.10168173;
      }
    }
  }
  if (!(data[8].missing != -1) || (data[8].fvalue < (float)6.7056064606)) {
    if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.083473443985)) {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)5.6798267365)) {
        result[1] += 0.047055833;
      } else {
        result[1] += -0.12600203;
      }
    } else {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.3381652236)) {
        result[1] += -0.03688578;
      } else {
        result[1] += -0.1538266;
      }
    }
  } else {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)2.601546526)) {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)8.0114078522)) {
        result[1] += 0.08597374;
      } else {
        result[1] += -0.09425405;
      }
    } else {
      if (!(data[3].missing != -1) || (data[3].fvalue < (float)-10.559607506)) {
        result[1] += -0.06232821;
      } else {
        result[1] += 0.089208074;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.97446250916)) {
    if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.031851373613)) {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-6.7930641174)) {
        result[2] += 0.07728731;
      } else {
        result[2] += -0.14116426;
      }
    } else {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.62950819731)) {
        result[2] += 0.05402871;
      } else {
        result[2] += -0.0509809;
      }
    }
  } else {
    if (!(data[3].missing != -1) || (data[3].fvalue < (float)-9.6837348938)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.97963666916)) {
        result[2] += 0.015269298;
      } else {
        result[2] += 0.11738158;
      }
    } else {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)21.407741547)) {
        result[2] += -0.1482374;
      } else {
        result[2] += 0.05211511;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.90638494492)) {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.81136775017)) {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)1.5623791218)) {
        result[3] += 0.023013337;
      } else {
        result[3] += -0.1493414;
      }
    } else {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-5.0783700943)) {
        result[3] += -0.08705547;
      } else {
        result[3] += 0.21791425;
      }
    }
  } else {
    if (!(data[19].missing != -1) || (data[19].fvalue < (float)4.4334173203)) {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)3.4469685555)) {
        result[3] += 0.08774541;
      } else {
        result[3] += -0.056187417;
      }
    } else {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.40140360594)) {
        result[3] += -0.1400513;
      } else {
        result[3] += 0.056682102;
      }
    }
  }
  if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.50442397594)) {
    if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.027087427676)) {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.41039037704)) {
        result[0] += 0.14652242;
      } else {
        result[0] += -0.05850209;
      }
    } else {
      if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.072104252875)) {
        result[0] += -0.06568725;
      } else {
        result[0] += 0.025370922;
      }
    }
  } else {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.11331664026)) {
      result[0] += -0.013875424;
    } else {
      result[0] += -0.14359005;
    }
  }
  if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.79567074776)) {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)7.8559436798)) {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)-0.11156375706)) {
        result[1] += -0.043679807;
      } else {
        result[1] += -0.18311346;
      }
    } else {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-8.5748577118)) {
        result[1] += -0.099373125;
      } else {
        result[1] += 0.095733926;
      }
    }
  } else {
    if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.34073540568)) {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)3.0823040009)) {
        result[1] += -0.1127671;
      } else {
        result[1] += 0.052445307;
      }
    } else {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.19530634582)) {
        result[1] += 0.062008176;
      } else {
        result[1] += -0.07785485;
      }
    }
  }
  if (!(data[9].missing != -1) || (data[9].fvalue < (float)3.037784338)) {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.8974313736)) {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.11513610184)) {
        result[2] += 0.08503232;
      } else {
        result[2] += -0.08358995;
      }
    } else {
      result[2] += -0.15318672;
    }
  } else {
    if (!(data[15].missing != -1) || (data[15].fvalue < (float)-2.3676514626)) {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)4.3393888474)) {
        result[2] += -0.046894707;
      } else {
        result[2] += 0.054099564;
      }
    } else {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)0.76296979189)) {
        result[2] += -0.10778309;
      } else {
        result[2] += 0.16285682;
      }
    }
  }
  if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.75246345997)) {
    if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.89699542522)) {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)2.2338867188)) {
        result[3] += 0.076456144;
      } else {
        result[3] += -0.122179456;
      }
    } else {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.94736301899)) {
        result[3] += -0.1316482;
      } else {
        result[3] += -0.022955872;
      }
    }
  } else {
    if (!(data[11].missing != -1) || (data[11].fvalue < (float)-7.6095099449)) {
      result[3] += -0.00070988183;
    } else {
      result[3] += 0.1399913;
    }
  }
  if (!(data[4].missing != -1) || (data[4].fvalue < (float)-0.041364476085)) {
    if (!(data[5].missing != -1) || (data[5].fvalue < (float)2.5886926651)) {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-8.4113616943)) {
        result[0] += -0.09714032;
      } else {
        result[0] += 0.15559106;
      }
    } else {
      if (!(data[2].missing != -1) || (data[2].fvalue < (float)3.0314254761)) {
        result[0] += 0.080671474;
      } else {
        result[0] += -0.10795901;
      }
    }
  } else {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.96851104498)) {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)0.064710527658)) {
        result[0] += 0.058580223;
      } else {
        result[0] += -0.041581713;
      }
    } else {
      if (!(data[14].missing != -1) || (data[14].fvalue < (float)0.49843859673)) {
        result[0] += -0.119918056;
      } else {
        result[0] += 0.10808289;
      }
    }
  }
  if (!(data[17].missing != -1) || (data[17].fvalue < (float)12.027322769)) {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.13959243894)) {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)7.4566049576)) {
        result[1] += -0.11484174;
      } else {
        result[1] += 0.002272764;
      }
    } else {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-5.3710141182)) {
        result[1] += 0.11070124;
      } else {
        result[1] += -0.028217738;
      }
    }
  } else {
    if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.96888518333)) {
      if (!(data[14].missing != -1) || (data[14].fvalue < (float)-0.51776140928)) {
        result[1] += -0.0066050137;
      } else {
        result[1] += 0.17310295;
      }
    } else {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.20328423381)) {
        result[1] += -0.1769283;
      } else {
        result[1] += 0.09453659;
      }
    }
  }
  if (!(data[21].missing != -1) || (data[21].fvalue < (float)1.1567862034)) {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.5309523344)) {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)5.5700111389)) {
        result[2] += -0.029464755;
      } else {
        result[2] += 0.0727465;
      }
    } else {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)6.5684952736)) {
        result[2] += -0.14304785;
      } else {
        result[2] += -0.0068861456;
      }
    }
  } else {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)2.1131837368)) {
      if (!(data[14].missing != -1) || (data[14].fvalue < (float)0.015907650813)) {
        result[2] += 0.012926261;
      } else {
        result[2] += 0.15536147;
      }
    } else {
      result[2] += -0.10546101;
    }
  }
  if (!(data[10].missing != -1) || (data[10].fvalue < (float)-6.8545765877)) {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.97953343391)) {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-16.218702316)) {
        result[3] += 0.08196002;
      } else {
        result[3] += -0.15180658;
      }
    } else {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.29224139452)) {
        result[3] += 0.12690939;
      } else {
        result[3] += -0.08614099;
      }
    }
  } else {
    if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.063578590751)) {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-3.7876582146)) {
        result[3] += -0.15941313;
      } else {
        result[3] += 0.0073512234;
      }
    } else {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.87429308891)) {
        result[3] += -0.103830464;
      } else {
        result[3] += 0.062466715;
      }
    }
  }
  if (!(data[19].missing != -1) || (data[19].fvalue < (float)0.34850305319)) {
    if (!(data[2].missing != -1) || (data[2].fvalue < (float)2.7162108421)) {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.03417018801)) {
        result[0] += 0.15319169;
      } else {
        result[0] += -0.023311384;
      }
    } else {
      result[0] += -0.050622616;
    }
  } else {
    if (!(data[19].missing != -1) || (data[19].fvalue < (float)3.9817283154)) {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-1.4606099129)) {
        result[0] += -0.050629158;
      } else {
        result[0] += 0.102186136;
      }
    } else {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-6.9615569115)) {
        result[0] += -0.1433351;
      } else {
        result[0] += 0.05269275;
      }
    }
  }
  if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.81690782309)) {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.47363108397)) {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-7.0617551804)) {
        result[1] += -0.097967364;
      } else {
        result[1] += 0.07952051;
      }
    } else {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)12.536029816)) {
        result[1] += -0.16138929;
      } else {
        result[1] += -0.019236585;
      }
    }
  } else {
    if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.33523976803)) {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)0.31680852175)) {
        result[1] += -0.06425946;
      } else {
        result[1] += 0.05905421;
      }
    } else {
      if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.050295203924)) {
        result[1] += 0.062757246;
      } else {
        result[1] += -0.06979983;
      }
    }
  }
  if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.031851373613)) {
    if (!(data[15].missing != -1) || (data[15].fvalue < (float)-6.7930641174)) {
      result[2] += 0.05607223;
    } else {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)2.6819896698)) {
        result[2] += -0.046086468;
      } else {
        result[2] += -0.15591149;
      }
    }
  } else {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.35481101274)) {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)8.2568321228)) {
        result[2] += 0.023002278;
      } else {
        result[2] += 0.1667136;
      }
    } else {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.50414729118)) {
        result[2] += -0.1123087;
      } else {
        result[2] += 0.025869915;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.98702800274)) {
    if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.89699542522)) {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-2.6897780895)) {
        result[3] += 0.080568366;
      } else {
        result[3] += -0.083620906;
      }
    } else {
      if (!(data[3].missing != -1) || (data[3].fvalue < (float)-3.914768219)) {
        result[3] += -0.104186155;
      } else {
        result[3] += 0.016385626;
      }
    }
  } else {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.31551420689)) {
      result[3] += -0.054670636;
    } else {
      result[3] += 0.14123525;
    }
  }
  if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.50442397594)) {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.94105994701)) {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)7.7322797775)) {
        result[0] += -0.03407829;
      } else {
        result[0] += 0.10282872;
      }
    } else {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-7.4921970367)) {
        result[0] += -0.14538537;
      } else {
        result[0] += 0.0735742;
      }
    }
  } else {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.12538968027)) {
      result[0] += -0.020364655;
    } else {
      result[0] += -0.14141865;
    }
  }
  if (!(data[17].missing != -1) || (data[17].fvalue < (float)6.910531044)) {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.94548749924)) {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.80889695883)) {
        result[1] += -0.1570831;
      } else {
        result[1] += 0.033857636;
      }
    } else {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.041712097824)) {
        result[1] += -0.13716348;
      } else {
        result[1] += 0.041536175;
      }
    }
  } else {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.81171762943)) {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.23346443474)) {
        result[1] += -0.15457287;
      } else {
        result[1] += 0.06366366;
      }
    } else {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-3.7333035469)) {
        result[1] += 0.12076971;
      } else {
        result[1] += -0.15704608;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.9574662447)) {
    if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.26409578323)) {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-2.4555120468)) {
        result[2] += -0.06709268;
      } else {
        result[2] += 0.08773914;
      }
    } else {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.069163322449)) {
        result[2] += 0.091513544;
      } else {
        result[2] += -0.13625506;
      }
    }
  } else {
    if (!(data[3].missing != -1) || (data[3].fvalue < (float)-9.3527383804)) {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)15.243124008)) {
        result[2] += 0.118885525;
      } else {
        result[2] += -0.046895202;
      }
    } else {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.19790622592)) {
        result[2] += 0.074842416;
      } else {
        result[2] += -0.11196395;
      }
    }
  }
  if (!(data[6].missing != -1) || (data[6].fvalue < (float)3.4008908272)) {
    if (!(data[15].missing != -1) || (data[15].fvalue < (float)-12.2628479)) {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-7.6387057304)) {
        result[3] += -0.020846386;
      } else {
        result[3] += 0.12813823;
      }
    } else {
      if (!(data[2].missing != -1) || (data[2].fvalue < (float)3.2038240433)) {
        result[3] += -0.011833384;
      } else {
        result[3] += -0.11718649;
      }
    }
  } else {
    if (!(data[2].missing != -1) || (data[2].fvalue < (float)14.261818886)) {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)7.1851100922)) {
        result[3] += 0.11498352;
      } else {
        result[3] += -0.07655949;
      }
    } else {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-3.9896783829)) {
        result[3] += -0.16764224;
      } else {
        result[3] += -0.0051491046;
      }
    }
  }
  if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.07904933393)) {
    if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.92892444134)) {
      result[0] += 0.18996964;
    } else {
      result[0] += 0.016772829;
    }
  } else {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.24616658688)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)0.014066999778)) {
        result[0] += 0.13338801;
      } else {
        result[0] += -0.1090599;
      }
    } else {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)2.714299202)) {
        result[0] += 0.11084339;
      } else {
        result[0] += -0.0005837391;
      }
    }
  }
  if (!(data[1].missing != -1) || (data[1].fvalue < (float)0.85216331482)) {
    if (!(data[5].missing != -1) || (data[5].fvalue < (float)0.41952806711)) {
      if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.20514144003)) {
        result[1] += 0.02389053;
      } else {
        result[1] += -0.14416362;
      }
    } else {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.044043540955)) {
        result[1] += -0.14942567;
      } else {
        result[1] += 0.014952267;
      }
    }
  } else {
    if (!(data[5].missing != -1) || (data[5].fvalue < (float)3.5449728966)) {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.79978203773)) {
        result[1] += -0.14167073;
      } else {
        result[1] += 0.070619114;
      }
    } else {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)8.7558822632)) {
        result[1] += -0.09343009;
      } else {
        result[1] += 0.06522501;
      }
    }
  }
  if (!(data[9].missing != -1) || (data[9].fvalue < (float)3.037784338)) {
    if (!(data[15].missing != -1) || (data[15].fvalue < (float)-1.2831195593)) {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-5.3714723587)) {
        result[2] += 0.040724736;
      } else {
        result[2] += -0.14953546;
      }
    } else {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-1.3877460957)) {
        result[2] += 0.34504023;
      } else {
        result[2] += -0.10356864;
      }
    }
  } else {
    if (!(data[15].missing != -1) || (data[15].fvalue < (float)-2.3676514626)) {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)9.9327125549)) {
        result[2] += -0.029535687;
      } else {
        result[2] += 0.07524068;
      }
    } else {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)1.1343944073)) {
        result[2] += -0.062832996;
      } else {
        result[2] += 0.14764524;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.86886382103)) {
    if (!(data[8].missing != -1) || (data[8].fvalue < (float)1.2034702301)) {
      result[3] += 0.038957067;
    } else {
      result[3] += -0.13996522;
    }
  } else {
    if (!(data[10].missing != -1) || (data[10].fvalue < (float)-6.8545765877)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.97953343391)) {
        result[3] += -0.12733693;
      } else {
        result[3] += 0.053643662;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)0.7367028594)) {
        result[3] += 0.07238814;
      } else {
        result[3] += -0.017146153;
      }
    }
  }
  if (!(data[19].missing != -1) || (data[19].fvalue < (float)0.34850305319)) {
    if (!(data[6].missing != -1) || (data[6].fvalue < (float)1.7734860182)) {
      result[0] += 0.139943;
    } else {
      if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.13197743893)) {
        result[0] += -0.056145485;
      } else {
        result[0] += 0.06660649;
      }
    }
  } else {
    if (!(data[19].missing != -1) || (data[19].fvalue < (float)4.4716959)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.94110965729)) {
        result[0] += -0.058554616;
      } else {
        result[0] += 0.018449629;
      }
    } else {
      if (!(data[2].missing != -1) || (data[2].fvalue < (float)10.723083496)) {
        result[0] += 0.016938277;
      } else {
        result[0] += 0.20034024;
      }
    }
  }
  if (!(data[2].missing != -1) || (data[2].fvalue < (float)2.207587719)) {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.15959659219)) {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.16731595993)) {
        result[1] += -0.108214386;
      } else {
        result[1] += 0.1267485;
      }
    } else {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-5.3912811279)) {
        result[1] += 0.015941491;
      } else {
        result[1] += -0.13395607;
      }
    }
  } else {
    if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.20532885194)) {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.38442018628)) {
        result[1] += -0.009336687;
      } else {
        result[1] += 0.117128424;
      }
    } else {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)7.9366168976)) {
        result[1] += -0.18194562;
      } else {
        result[1] += 0.032270785;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.81327068806)) {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.16529144347)) {
      result[2] += -0.12968686;
    } else {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.073439635336)) {
        result[2] += -0.034924112;
      } else {
        result[2] += 0.11104825;
      }
    }
  } else {
    if (!(data[19].missing != -1) || (data[19].fvalue < (float)1.1278021336)) {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)10.975171089)) {
        result[2] += -0.14633068;
      } else {
        result[2] += 0.11143456;
      }
    } else {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.37969785929)) {
        result[2] += 0.054303806;
      } else {
        result[2] += -0.04525579;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.95398408175)) {
    if (!(data[11].missing != -1) || (data[11].fvalue < (float)-3.1226327419)) {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.67283886671)) {
        result[3] += -0.12861738;
      } else {
        result[3] += 0.032680575;
      }
    } else {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)0.4020935297)) {
        result[3] += -0.1268243;
      } else {
        result[3] += 0.089736775;
      }
    }
  } else {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)3.3412189484)) {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)2.5334818363)) {
        result[3] += 0.13668482;
      } else {
        result[3] += 0.0020537912;
      }
    } else {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.51421999931)) {
        result[3] += -0.14789872;
      } else {
        result[3] += 0.10475463;
      }
    }
  }
  if (!(data[4].missing != -1) || (data[4].fvalue < (float)-0.041364476085)) {
    if (!(data[5].missing != -1) || (data[5].fvalue < (float)3.2450819016)) {
      if (!(data[14].missing != -1) || (data[14].fvalue < (float)0.85364592075)) {
        result[0] += 0.1730621;
      } else {
        result[0] += -0.004966676;
      }
    } else {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.70431542397)) {
        result[0] += 0.008908851;
      } else {
        result[0] += -0.103907965;
      }
    }
  } else {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.96851104498)) {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)0.064710527658)) {
        result[0] += 0.050876014;
      } else {
        result[0] += -0.03475831;
      }
    } else {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-4.8965740204)) {
        result[0] += -0.0259948;
      } else {
        result[0] += 0.1253981;
      }
    }
  }
  if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.83201313019)) {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.23891124129)) {
      if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.058557655662)) {
        result[1] += 0.09629294;
      } else {
        result[1] += -0.15095314;
      }
    } else {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-7.3260111809)) {
        result[1] += 0.10238191;
      } else {
        result[1] += -0.019371126;
      }
    }
  } else {
    if (!(data[8].missing != -1) || (data[8].fvalue < (float)7.441069603)) {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.14232617617)) {
        result[1] += 0.088644795;
      } else {
        result[1] += -0.19099121;
      }
    } else {
      if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.60085260868)) {
        result[1] += 0.14591707;
      } else {
        result[1] += -0.07334294;
      }
    }
  }
  if (!(data[5].missing != -1) || (data[5].fvalue < (float)0.67677390575)) {
    if (!(data[15].missing != -1) || (data[15].fvalue < (float)-1.0982741117)) {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)9.3341779709)) {
        result[2] += -0.08476945;
      } else {
        result[2] += 0.08913859;
      }
    } else {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)1.9290201664)) {
        result[2] += 0.013642976;
      } else {
        result[2] += 0.20447654;
      }
    }
  } else {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)0.62507712841)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)0.17118686438)) {
        result[2] += 0.020601025;
      } else {
        result[2] += 0.16809633;
      }
    } else {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.15920251608)) {
        result[2] += 0.026199246;
      } else {
        result[2] += -0.08334212;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.86886382103)) {
    if (!(data[8].missing != -1) || (data[8].fvalue < (float)1.2034702301)) {
      result[3] += 0.04761572;
    } else {
      result[3] += -0.13700545;
    }
  } else {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.16397202015)) {
      if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.21044567227)) {
        result[3] += -0.09883758;
      } else {
        result[3] += 0.043703683;
      }
    } else {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-4.3559880257)) {
        result[3] += -0.061066214;
      } else {
        result[3] += 0.1060974;
      }
    }
  }
  if (!(data[10].missing != -1) || (data[10].fvalue < (float)-1.4621795416)) {
    if (!(data[10].missing != -1) || (data[10].fvalue < (float)-1.4902353287)) {
      if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.026904946193)) {
        result[0] += 0.09436799;
      } else {
        result[0] += -0.0069660647;
      }
    } else {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-1.4808607101)) {
        result[0] += -0.3501618;
      } else {
        result[0] += -0.054856163;
      }
    }
  } else {
    if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.50469696522)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)6.5293693542)) {
        result[0] += 0.14976034;
      } else {
        result[0] += -0.0034930066;
      }
    } else {
      result[0] += -0.059933532;
    }
  }
  if (!(data[2].missing != -1) || (data[2].fvalue < (float)0.90718519688)) {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.14755433798)) {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.16731595993)) {
        result[1] += -0.08873233;
      } else {
        result[1] += 0.11405198;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)-0.17038330436)) {
        result[1] += 0.039390504;
      } else {
        result[1] += -0.14146313;
      }
    }
  } else {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.13959243894)) {
      if (!(data[14].missing != -1) || (data[14].fvalue < (float)0.49287769198)) {
        result[1] += 0.044773795;
      } else {
        result[1] += -0.0702998;
      }
    } else {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-5.3710141182)) {
        result[1] += 0.114499636;
      } else {
        result[1] += -0.0063272296;
      }
    }
  }
  if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.031851373613)) {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.28905528784)) {
      result[2] += -0.14273486;
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)0.58146452904)) {
        result[2] += 0.07801205;
      } else {
        result[2] += -0.1095442;
      }
    }
  } else {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.5309523344)) {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.2523869276)) {
        result[2] += 0.12413744;
      } else {
        result[2] += 0.009555515;
      }
    } else {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)13.131614685)) {
        result[2] += -0.11069679;
      } else {
        result[2] += 0.057850413;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.95398408175)) {
    if (!(data[3].missing != -1) || (data[3].fvalue < (float)-6.7784328461)) {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-14.595529556)) {
        result[3] += 0.052129205;
      } else {
        result[3] += -0.166979;
      }
    } else {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.37646457553)) {
        result[3] += -0.07920714;
      } else {
        result[3] += 0.059924822;
      }
    }
  } else {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)3.4618990421)) {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)2.5334818363)) {
        result[3] += 0.12505284;
      } else {
        result[3] += 0.0075707035;
      }
    } else {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.51421999931)) {
        result[3] += -0.13975409;
      } else {
        result[3] += 0.09843688;
      }
    }
  }
  if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.50442397594)) {
    if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.9697484374)) {
      if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.029339775443)) {
        result[0] += 0.090197414;
      } else {
        result[0] += -0.0068137087;
      }
    } else {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)1.7835550308)) {
        result[0] += 0.19198972;
      } else {
        result[0] += -0.04218026;
      }
    }
  } else {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.13541701436)) {
      result[0] += -0.022723561;
    } else {
      result[0] += -0.13532041;
    }
  }
  if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.81690782309)) {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)7.1194877625)) {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.80865103006)) {
        result[1] += -0.1532783;
      } else {
        result[1] += -0.017675154;
      }
    } else {
      if (!(data[2].missing != -1) || (data[2].fvalue < (float)3.680826664)) {
        result[1] += -0.1199136;
      } else {
        result[1] += 0.06499652;
      }
    }
  } else {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.94688820839)) {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)2.6017765999)) {
        result[1] += 0.07836084;
      } else {
        result[1] += -0.013995457;
      }
    } else {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)5.915230751)) {
        result[1] += -0.13164304;
      } else {
        result[1] += 0.0213735;
      }
    }
  }
  if (!(data[13].missing != -1) || (data[13].fvalue < (float)-1.6389973164)) {
    if (!(data[8].missing != -1) || (data[8].fvalue < (float)3.1355018616)) {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-5.3714723587)) {
        result[2] += -0.00043621767;
      } else {
        result[2] += -0.14706132;
      }
    } else {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.24697522819)) {
        result[2] += -0.0381357;
      } else {
        result[2] += 0.036632337;
      }
    }
  } else {
    if (!(data[3].missing != -1) || (data[3].fvalue < (float)-2.3009517193)) {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)3.128490448)) {
        result[2] += 0.36976925;
      } else {
        result[2] += 0.08072728;
      }
    } else {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-1.3957045078)) {
        result[2] += 0.05386774;
      } else {
        result[2] += -0.10582273;
      }
    }
  }
  if (!(data[15].missing != -1) || (data[15].fvalue < (float)-11.357503891)) {
    if (!(data[9].missing != -1) || (data[9].fvalue < (float)9.4829730988)) {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-7.2893943787)) {
        result[3] += 0.0014369008;
      } else {
        result[3] += 0.13555716;
      }
    } else {
      result[3] += -0.017603751;
    }
  } else {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.71072697639)) {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.69291460514)) {
        result[3] += -0.011301024;
      } else {
        result[3] += 0.18992656;
      }
    } else {
      result[3] += -0.16265368;
    }
  }
  if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.07904933393)) {
    if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.90507495403)) {
      result[0] += 0.18550576;
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)-0.44292002916)) {
        result[0] += 0.105340466;
      } else {
        result[0] += -0.042878322;
      }
    }
  } else {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.13981294632)) {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.51114499569)) {
        result[0] += 0.06798599;
      } else {
        result[0] += -0.034441452;
      }
    } else {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-2.5664014816)) {
        result[0] += -0.085180864;
      } else {
        result[0] += 0.03195906;
      }
    }
  }
  if (!(data[15].missing != -1) || (data[15].fvalue < (float)-1.8341593742)) {
    if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.20844490826)) {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.63312101364)) {
        result[1] += 0.0021925059;
      } else {
        result[1] += 0.11887432;
      }
    } else {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)8.8063545227)) {
        result[1] += -0.14560765;
      } else {
        result[1] += 0.0380797;
      }
    }
  } else {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.033202081919)) {
      result[1] += -0.13314144;
    } else {
      result[1] += -0.033823617;
    }
  }
  if (!(data[21].missing != -1) || (data[21].fvalue < (float)1.1567862034)) {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.62894147635)) {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)5.3441438675)) {
        result[2] += -0.03129878;
      } else {
        result[2] += 0.050019126;
      }
    } else {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)13.16075325)) {
        result[2] += -0.15052028;
      } else {
        result[2] += 0.013982125;
      }
    }
  } else {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)2.1131837368)) {
      if (!(data[14].missing != -1) || (data[14].fvalue < (float)0.015907650813)) {
        result[2] += 0.009973148;
      } else {
        result[2] += 0.14216866;
      }
    } else {
      result[2] += -0.08350189;
    }
  }
  if (!(data[9].missing != -1) || (data[9].fvalue < (float)2.526506424)) {
    if (!(data[9].missing != -1) || (data[9].fvalue < (float)2.4525856972)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)2.5653216839)) {
        result[3] += -0.07424148;
      } else {
        result[3] += 0.08425455;
      }
    } else {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-2.9737699032)) {
        result[3] += 0.312552;
      } else {
        result[3] += 0.020344706;
      }
    }
  } else {
    if (!(data[13].missing != -1) || (data[13].fvalue < (float)-5.1298522949)) {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-5.2424001694)) {
        result[3] += -0.0017783078;
      } else {
        result[3] += 0.15354283;
      }
    } else {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.60807555914)) {
        result[3] += 0.1670458;
      } else {
        result[3] += -0.081339754;
      }
    }
  }
  if (!(data[2].missing != -1) || (data[2].fvalue < (float)14.266499519)) {
    if (!(data[6].missing != -1) || (data[6].fvalue < (float)2.9340088367)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.89864909649)) {
        result[0] += -0.036029838;
      } else {
        result[0] += 0.03361228;
      }
    } else {
      if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.025438908488)) {
        result[0] += 0.06817006;
      } else {
        result[0] += -0.10540614;
      }
    }
  } else {
    if (!(data[5].missing != -1) || (data[5].fvalue < (float)5.2415509224)) {
      if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.15676024556)) {
        result[0] += 0.05967134;
      } else {
        result[0] += 0.29329857;
      }
    } else {
      result[0] += -0.08969041;
    }
  }
  if (!(data[2].missing != -1) || (data[2].fvalue < (float)4.7397480011)) {
    if (!(data[5].missing != -1) || (data[5].fvalue < (float)0.67489218712)) {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)1.1959600449)) {
        result[1] += -0.022184381;
      } else {
        result[1] += 0.12423481;
      }
    } else {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.071426980197)) {
        result[1] += 0.04771411;
      } else {
        result[1] += -0.079509154;
      }
    }
  } else {
    if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.20532885194)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)6.3487610817)) {
        result[1] += 0.09449394;
      } else {
        result[1] += -0.07434858;
      }
    } else {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)7.4566049576)) {
        result[1] += -0.20613503;
      } else {
        result[1] += 0.02481486;
      }
    }
  }
  if (!(data[13].missing != -1) || (data[13].fvalue < (float)-1.6389973164)) {
    if (!(data[8].missing != -1) || (data[8].fvalue < (float)3.1355018616)) {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-5.3714723587)) {
        result[2] += 0.00020119897;
      } else {
        result[2] += -0.14372274;
      }
    } else {
      if (!(data[2].missing != -1) || (data[2].fvalue < (float)2.6836738586)) {
        result[2] += 0.042820416;
      } else {
        result[2] += -0.028057495;
      }
    }
  } else {
    if (!(data[3].missing != -1) || (data[3].fvalue < (float)-2.3009517193)) {
      if (!(data[3].missing != -1) || (data[3].fvalue < (float)-2.8969094753)) {
        result[2] += 0.081036665;
      } else {
        result[2] += 0.35812008;
      }
    } else {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)0.62292826176)) {
        result[2] += 0.05594931;
      } else {
        result[2] += -0.09998623;
      }
    }
  }
  if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.40199825168)) {
    if (!(data[19].missing != -1) || (data[19].fvalue < (float)4.4334173203)) {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)4.6306519508)) {
        result[3] += 0.062222864;
      } else {
        result[3] += -0.065213524;
      }
    } else {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-12.810281754)) {
        result[3] += 0.0752641;
      } else {
        result[3] += -0.15959212;
      }
    }
  } else {
    if (!(data[3].missing != -1) || (data[3].fvalue < (float)-4.2908773422)) {
      if (!(data[14].missing != -1) || (data[14].fvalue < (float)0.57444226742)) {
        result[3] += 0.08971783;
      } else {
        result[3] += -0.10369744;
      }
    } else {
      if (!(data[2].missing != -1) || (data[2].fvalue < (float)0.60949254036)) {
        result[3] += 0.0060625398;
      } else {
        result[3] += 0.18603389;
      }
    }
  }
  if (!(data[17].missing != -1) || (data[17].fvalue < (float)2.658107996)) {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.45566564798)) {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)1.825578928)) {
        result[0] += 0.10671582;
      } else {
        result[0] += -0.2808694;
      }
    } else {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)1.3552020788)) {
        result[0] += -0.04400033;
      } else {
        result[0] += 0.12137411;
      }
    }
  } else {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.38601085544)) {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.37593007088)) {
        result[0] += -0.021008927;
      } else {
        result[0] += -0.25512543;
      }
    } else {
      if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.23204217851)) {
        result[0] += 0.052663144;
      } else {
        result[0] += -0.05668495;
      }
    }
  }
  if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.81690782309)) {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)50.943088531)) {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-9.1039733887)) {
        result[1] += 0.009288065;
      } else {
        result[1] += -0.122702554;
      }
    } else {
      result[1] += 0.08531135;
    }
  } else {
    if (!(data[5].missing != -1) || (data[5].fvalue < (float)1.7542722225)) {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)0.43856218457)) {
        result[1] += -0.030334378;
      } else {
        result[1] += 0.06856658;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)18.833286285)) {
        result[1] += -0.05662839;
      } else {
        result[1] += 0.06205421;
      }
    }
  }
  if (!(data[5].missing != -1) || (data[5].fvalue < (float)4.1895170212)) {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)1.6831929684)) {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)0.67677390575)) {
        result[2] += -0.03929628;
      } else {
        result[2] += 0.066171385;
      }
    } else {
      if (!(data[2].missing != -1) || (data[2].fvalue < (float)0.64308589697)) {
        result[2] += 0.09153322;
      } else {
        result[2] += -0.14099486;
      }
    }
  } else {
    if (!(data[3].missing != -1) || (data[3].fvalue < (float)-5.9374027252)) {
      if (!(data[14].missing != -1) || (data[14].fvalue < (float)0.063880950212)) {
        result[2] += -0.06367471;
      } else {
        result[2] += 0.1086049;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)6.2168264389)) {
        result[2] += 0.02698684;
      } else {
        result[2] += -0.1623276;
      }
    }
  }
  if (!(data[19].missing != -1) || (data[19].fvalue < (float)0.63487172127)) {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.97853881121)) {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.52591490746)) {
        result[3] += -0.14103214;
      } else {
        result[3] += -0.021610565;
      }
    } else {
      result[3] += 0.050612986;
    }
  } else {
    if (!(data[9].missing != -1) || (data[9].fvalue < (float)1.400033474)) {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-1.6804827452)) {
        result[3] += 0.26153725;
      } else {
        result[3] += -0.01638925;
      }
    } else {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.87432408333)) {
        result[3] += -0.13046107;
      } else {
        result[3] += 0.015505159;
      }
    }
  }
  if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.50442397594)) {
    if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.9697484374)) {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-2.1318078041)) {
        result[0] += -0.0097740535;
      } else {
        result[0] += 0.06365928;
      }
    } else {
      if (!(data[3].missing != -1) || (data[3].fvalue < (float)-7.8042092323)) {
        result[0] += -0.08570635;
      } else {
        result[0] += 0.14814952;
      }
    }
  } else {
    if (!(data[11].missing != -1) || (data[11].fvalue < (float)-7.6259217262)) {
      result[0] += -0.033797868;
    } else {
      result[0] += -0.12869588;
    }
  }
  if (!(data[10].missing != -1) || (data[10].fvalue < (float)-7.3260111809)) {
    if (!(data[3].missing != -1) || (data[3].fvalue < (float)-7.9707565308)) {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.27673727274)) {
        result[1] += -0.105916604;
      } else {
        result[1] += 0.045049574;
      }
    } else {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)5.6603283882)) {
        result[1] += -0.029712113;
      } else {
        result[1] += 0.16851719;
      }
    }
  } else {
    if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.95852684975)) {
      if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.16203850508)) {
        result[1] += 0.02466367;
      } else {
        result[1] += -0.08189618;
      }
    } else {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.024628909305)) {
        result[1] += -0.14327264;
      } else {
        result[1] += 0.07550551;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.95364201069)) {
    if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.26409578323)) {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-2.4555120468)) {
        result[2] += -0.066348806;
      } else {
        result[2] += 0.065157756;
      }
    } else {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.080514013767)) {
        result[2] += 0.086318485;
      } else {
        result[2] += -0.113950066;
      }
    }
  } else {
    if (!(data[10].missing != -1) || (data[10].fvalue < (float)-6.4326343536)) {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-4.9930276871)) {
        result[2] += -0.04477296;
      } else {
        result[2] += 0.1022846;
      }
    } else {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.23533117771)) {
        result[2] += 0.003927288;
      } else {
        result[2] += -0.14031297;
      }
    }
  }
  if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.063578590751)) {
    if (!(data[6].missing != -1) || (data[6].fvalue < (float)3.0463981628)) {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.75711745024)) {
        result[3] += 0.06592444;
      } else {
        result[3] += -0.12423958;
      }
    } else {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.95753592253)) {
        result[3] += -0.05255271;
      } else {
        result[3] += 0.10983271;
      }
    }
  } else {
    if (!(data[10].missing != -1) || (data[10].fvalue < (float)-6.8545765877)) {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-8.3963737488)) {
        result[3] += 0.0015108048;
      } else {
        result[3] += -0.13976827;
      }
    } else {
      if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.013241525739)) {
        result[3] += -0.06943734;
      } else {
        result[3] += 0.05340442;
      }
    }
  }
  if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.07904933393)) {
    if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.90507495403)) {
      result[0] += 0.16481736;
    } else {
      result[0] += 0.048305728;
    }
  } else {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.24616658688)) {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-1.5693895817)) {
        result[0] += -0.104773104;
      } else {
        result[0] += 0.09346665;
      }
    } else {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.06917463243)) {
        result[0] += 0.0002677935;
      } else {
        result[0] += 0.10902966;
      }
    }
  }
  if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.74794781208)) {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.47000467777)) {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.3072758317)) {
        result[1] += -0.038083956;
      } else {
        result[1] += 0.039233007;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)14.848114014)) {
        result[1] += -0.14715055;
      } else {
        result[1] += -0.022683278;
      }
    }
  } else {
    if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.91890794039)) {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.24386464059)) {
        result[1] += 0.06814133;
      } else {
        result[1] += -0.1706411;
      }
    } else {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.97992086411)) {
        result[1] += 0.1511069;
      } else {
        result[1] += -0.014589106;
      }
    }
  }
  if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.031851373613)) {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.28905528784)) {
      result[2] += -0.13478605;
    } else {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.26798307896)) {
        result[2] += 0.07266883;
      } else {
        result[2] += -0.095916785;
      }
    }
  } else {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.5309523344)) {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.2523869276)) {
        result[2] += 0.11569509;
      } else {
        result[2] += 0.006207648;
      }
    } else {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)1.1567862034)) {
        result[2] += -0.08288309;
      } else {
        result[2] += 0.08651065;
      }
    }
  }
  if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.16397202015)) {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.80660933256)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)3.4318714142)) {
        result[3] += -0.114823654;
      } else {
        result[3] += 0.054310188;
      }
    } else {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.81964612007)) {
        result[3] += 0.17410429;
      } else {
        result[3] += -0.0012320939;
      }
    }
  } else {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.15429997444)) {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)1.8361639977)) {
        result[3] += -0.056198616;
      } else {
        result[3] += 0.24586016;
      }
    } else {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-3.4001612663)) {
        result[3] += -0.050537307;
      } else {
        result[3] += 0.063097104;
      }
    }
  }
  if (!(data[13].missing != -1) || (data[13].fvalue < (float)-6.9615569115)) {
    if (!(data[19].missing != -1) || (data[19].fvalue < (float)3.3348550797)) {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)3.2954740524)) {
        result[0] += -0.08243802;
      } else {
        result[0] += 0.13421191;
      }
    } else {
      result[0] += -0.13504387;
    }
  } else {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.95079785585)) {
      if (!(data[3].missing != -1) || (data[3].fvalue < (float)-10.399280548)) {
        result[0] += 0.23838778;
      } else {
        result[0] += -0.016779348;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)9.4466571808)) {
        result[0] += 0.020774027;
      } else {
        result[0] += 0.18841992;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.94688820839)) {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)0.85197162628)) {
      if (!(data[14].missing != -1) || (data[14].fvalue < (float)0.84429728985)) {
        result[1] += 0.016584203;
      } else {
        result[1] += -0.10440005;
      }
    } else {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)6.5552659035)) {
        result[1] += 0.08368981;
      } else {
        result[1] += -0.06484328;
      }
    }
  } else {
    if (!(data[13].missing != -1) || (data[13].fvalue < (float)-4.9845867157)) {
      if (!(data[3].missing != -1) || (data[3].fvalue < (float)-3.9951710701)) {
        result[1] += 0.04823397;
      } else {
        result[1] += -0.14658038;
      }
    } else {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)1.8537387848)) {
        result[1] += -0.018195288;
      } else {
        result[1] += -0.17348658;
      }
    }
  }
  if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.54805082083)) {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.37955161929)) {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)7.4613060951)) {
        result[2] += -0.013334129;
      } else {
        result[2] += 0.12936722;
      }
    } else {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-2.2836167812)) {
        result[2] += -0.12962227;
      } else {
        result[2] += 0.093057245;
      }
    }
  } else {
    if (!(data[10].missing != -1) || (data[10].fvalue < (float)-6.3345909119)) {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.81642460823)) {
        result[2] += 0.14347608;
      } else {
        result[2] += -0.0071062488;
      }
    } else {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-5.6333713531)) {
        result[2] += -0.13598034;
      } else {
        result[2] += -0.0055552763;
      }
    }
  }
  if (!(data[5].missing != -1) || (data[5].fvalue < (float)0.61749362946)) {
    if (!(data[5].missing != -1) || (data[5].fvalue < (float)0.25169926882)) {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)2.2137999535)) {
        result[3] += 0.053603105;
      } else {
        result[3] += -0.10550682;
      }
    } else {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-2.3682141304)) {
        result[3] += 0.15018095;
      } else {
        result[3] += -0.04742294;
      }
    }
  } else {
    if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.48149508238)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)-0.18715888262)) {
        result[3] += 0.07424544;
      } else {
        result[3] += -0.08442769;
      }
    } else {
      if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.084710970521)) {
        result[3] += -0.047945615;
      } else {
        result[3] += 0.1484672;
      }
    }
  }
  if (!(data[19].missing != -1) || (data[19].fvalue < (float)0.34850305319)) {
    if (!(data[6].missing != -1) || (data[6].fvalue < (float)1.7734860182)) {
      result[0] += 0.12626962;
    } else {
      result[0] += 0.009344331;
    }
  } else {
    if (!(data[19].missing != -1) || (data[19].fvalue < (float)3.9817283154)) {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.14486725628)) {
        result[0] += 0.01180235;
      } else {
        result[0] += -0.063674614;
      }
    } else {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)3.2753801346)) {
        result[0] += 0.10890536;
      } else {
        result[0] += -0.0020870832;
      }
    }
  }
  if (!(data[2].missing != -1) || (data[2].fvalue < (float)3.7793622017)) {
    if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.047235995531)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.8590337038)) {
        result[1] += 0.11989083;
      } else {
        result[1] += -0.065806024;
      }
    } else {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)4.6435952187)) {
        result[1] += -0.12424537;
      } else {
        result[1] += -0.012910929;
      }
    }
  } else {
    if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.20721331239)) {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.81663191319)) {
        result[1] += -0.108458586;
      } else {
        result[1] += 0.07031352;
      }
    } else {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)7.9366168976)) {
        result[1] += -0.15822947;
      } else {
        result[1] += 0.031044131;
      }
    }
  }
  if (!(data[13].missing != -1) || (data[13].fvalue < (float)-1.6389973164)) {
    if (!(data[13].missing != -1) || (data[13].fvalue < (float)-2.4125330448)) {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)3.1108427048)) {
        result[2] += -0.0854554;
      } else {
        result[2] += 0.01360915;
      }
    } else {
      if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.42387461662)) {
        result[2] += -0.13945301;
      } else {
        result[2] += 0.03242388;
      }
    }
  } else {
    if (!(data[13].missing != -1) || (data[13].fvalue < (float)-1.2763390541)) {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.80468952656)) {
        result[2] += 0.27565414;
      } else {
        result[2] += 0.027609328;
      }
    } else {
      result[2] += -0.08480108;
    }
  }
  if (!(data[19].missing != -1) || (data[19].fvalue < (float)0.63487172127)) {
    if (!(data[2].missing != -1) || (data[2].fvalue < (float)3.5935194492)) {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.44068497419)) {
        result[3] += -0.1343199;
      } else {
        result[3] += -0.03382347;
      }
    } else {
      result[3] += 0.040446807;
    }
  } else {
    if (!(data[19].missing != -1) || (data[19].fvalue < (float)0.77403235435)) {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)2.9008097649)) {
        result[3] += 0.21435425;
      } else {
        result[3] += -0.029361587;
      }
    } else {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.051054164767)) {
        result[3] += -0.082153484;
      } else {
        result[3] += 0.015467066;
      }
    }
  }
  if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.085634097457)) {
    if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.92736828327)) {
      result[0] += 0.14504018;
    } else {
      result[0] += 0.022487458;
    }
  } else {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.1397395581)) {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.51114499569)) {
        result[0] += 0.05905545;
      } else {
        result[0] += -0.03541626;
      }
    } else {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-2.5664014816)) {
        result[0] += -0.075800635;
      } else {
        result[0] += 0.026582083;
      }
    }
  }
  if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.74794781208)) {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.38748371601)) {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.3072758317)) {
        result[1] += -0.033850458;
      } else {
        result[1] += 0.05076625;
      }
    } else {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.097484953701)) {
        result[1] += -0.114735074;
      } else {
        result[1] += 0.08129211;
      }
    }
  } else {
    if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.91890794039)) {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.22628185153)) {
        result[1] += 0.062225044;
      } else {
        result[1] += -0.13389798;
      }
    } else {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.97896325588)) {
        result[1] += 0.14535393;
      } else {
        result[1] += -0.0055624023;
      }
    }
  }
  if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.34408006072)) {
    if (!(data[9].missing != -1) || (data[9].fvalue < (float)6.3958301544)) {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)6.1368846893)) {
        result[2] += -0.014813005;
      } else {
        result[2] += 0.12425571;
      }
    } else {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)9.8623905182)) {
        result[2] += -0.124264725;
      } else {
        result[2] += 0.03889913;
      }
    }
  } else {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.9392772913)) {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.080397084355)) {
        result[2] += 0.13161653;
      } else {
        result[2] += -0.10087403;
      }
    } else {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)7.5147204399)) {
        result[2] += -0.10366748;
      } else {
        result[2] += 0.0589025;
      }
    }
  }
  if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.063578590751)) {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.31349059939)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)0.74184381962)) {
        result[3] += -0.116613716;
      } else {
        result[3] += 0.03886631;
      }
    } else {
      result[3] += -0.13694151;
    }
  } else {
    if (!(data[10].missing != -1) || (data[10].fvalue < (float)-6.8545765877)) {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-8.3963737488)) {
        result[3] += 0.0057475604;
      } else {
        result[3] += -0.13318329;
      }
    } else {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)5.7135605812)) {
        result[3] += 0.047759417;
      } else {
        result[3] += -0.0578441;
      }
    }
  }
  if (!(data[17].missing != -1) || (data[17].fvalue < (float)2.658107996)) {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.45566564798)) {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)1.6293253899)) {
        result[0] += 0.09269746;
      } else {
        result[0] += -0.20977964;
      }
    } else {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)1.2153155804)) {
        result[0] += -0.042831153;
      } else {
        result[0] += 0.115993194;
      }
    }
  } else {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.38601085544)) {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.37593007088)) {
        result[0] += -0.015906371;
      } else {
        result[0] += -0.20236866;
      }
    } else {
      if (!(data[14].missing != -1) || (data[14].fvalue < (float)0.60332900286)) {
        result[0] += -0.025407368;
      } else {
        result[0] += 0.067167625;
      }
    }
  }
  if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.81690782309)) {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)7.1194877625)) {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.80539786816)) {
        result[1] += -0.13531412;
      } else {
        result[1] += -0.022453517;
      }
    } else {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-8.5748577118)) {
        result[1] += -0.08802847;
      } else {
        result[1] += 0.06398117;
      }
    }
  } else {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.94688820839)) {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)2.0301260948)) {
        result[1] += -0.003239344;
      } else {
        result[1] += 0.07842985;
      }
    } else {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)5.915230751)) {
        result[1] += -0.117393255;
      } else {
        result[1] += 0.014646738;
      }
    }
  }
  if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.031851373613)) {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.28905528784)) {
      result[2] += -0.12899275;
    } else {
      result[2] += -0.020034835;
    }
  } else {
    if (!(data[2].missing != -1) || (data[2].fvalue < (float)0.63902789354)) {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.12847390771)) {
        result[2] += -0.0736487;
      } else {
        result[2] += 0.15039417;
      }
    } else {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-4.3559880257)) {
        result[2] += 0.01403074;
      } else {
        result[2] += -0.13316804;
      }
    }
  }
  if (!(data[15].missing != -1) || (data[15].fvalue < (float)-16.004037857)) {
    result[3] += 0.11353461;
  } else {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.71072697639)) {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.69291460514)) {
        result[3] += -0.006889109;
      } else {
        result[3] += 0.15299024;
      }
    } else {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-7.8774366379)) {
        result[3] += 0.036634404;
      } else {
        result[3] += -0.15689701;
      }
    }
  }
  if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.50442397594)) {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)1.1141018867)) {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.8247512579)) {
        result[0] += 0.0033174688;
      } else {
        result[0] += 0.10760792;
      }
    } else {
      if (!(data[2].missing != -1) || (data[2].fvalue < (float)0.94877839088)) {
        result[0] += 0.013321338;
      } else {
        result[0] += -0.12323081;
      }
    }
  } else {
    result[0] += -0.10968655;
  }
  if (!(data[15].missing != -1) || (data[15].fvalue < (float)-1.8341593742)) {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.11104912311)) {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)7.4007663727)) {
        result[1] += -0.05904701;
      } else {
        result[1] += 0.019943954;
      }
    } else {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-5.4050178528)) {
        result[1] += 0.1165315;
      } else {
        result[1] += 0.0010672398;
      }
    }
  } else {
    if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.040803998709)) {
      result[1] += -0.034003284;
    } else {
      result[1] += -0.120429605;
    }
  }
  if (!(data[1].missing != -1) || (data[1].fvalue < (float)-0.58338439465)) {
    if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.30526143312)) {
      result[2] += -0.14017054;
    } else {
      result[2] += -0.021575883;
    }
  } else {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)0.63365375996)) {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)0.96617305279)) {
        result[2] += -0.00088349264;
      } else {
        result[2] += 0.12190316;
      }
    } else {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)3.9964408875)) {
        result[2] += -0.064744;
      } else {
        result[2] += 0.029742861;
      }
    }
  }
  if (!(data[9].missing != -1) || (data[9].fvalue < (float)1.400033474)) {
    if (!(data[13].missing != -1) || (data[13].fvalue < (float)-2.7182910442)) {
      result[3] += 0.2565279;
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)-0.11595402658)) {
        result[3] += 0.061013546;
      } else {
        result[3] += -0.07843445;
      }
    }
  } else {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.87432408333)) {
      result[3] += -0.12689127;
    } else {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)6.6064510345)) {
        result[3] += 0.019898735;
      } else {
        result[3] += -0.08303906;
      }
    }
  }
  if (!(data[6].missing != -1) || (data[6].fvalue < (float)1.8130292892)) {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.21280579269)) {
      if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.20357899368)) {
        result[0] += 0.14318341;
      } else {
        result[0] += 0.004839695;
      }
    } else {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.96302974224)) {
        result[0] += -0.0070481407;
      } else {
        result[0] += 0.09577698;
      }
    }
  } else {
    if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.11457057297)) {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)-0.042459327728)) {
        result[0] += 0.01226196;
      } else {
        result[0] += -0.15493089;
      }
    } else {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.17703226209)) {
        result[0] += 0.119850025;
      } else {
        result[0] += -0.030778894;
      }
    }
  }
  if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.69449448586)) {
    if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.49052599072)) {
      if (!(data[3].missing != -1) || (data[3].fvalue < (float)-10.191879272)) {
        result[1] += -0.119119346;
      } else {
        result[1] += 0.0021611743;
      }
    } else {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-4.0978441238)) {
        result[1] += 0.14522271;
      } else {
        result[1] += 0.0035273947;
      }
    }
  } else {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.33751410246)) {
      result[1] += -0.11438605;
    } else {
      result[1] += -0.018137852;
    }
  }
  if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.031851373613)) {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)0.53902101517)) {
      result[2] += -0.030734072;
    } else {
      result[2] += -0.12761062;
    }
  } else {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.51482903957)) {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)4.0148429871)) {
        result[2] += -0.03170585;
      } else {
        result[2] += 0.05183017;
      }
    } else {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)4.3508138657)) {
        result[2] += -0.13177049;
      } else {
        result[2] += 0.016126657;
      }
    }
  }
  if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.16397202015)) {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.65180277824)) {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.96280252934)) {
        result[3] += -0.1352241;
      } else {
        result[3] += 0.010457413;
      }
    } else {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.91489446163)) {
        result[3] += 0.06269466;
      } else {
        result[3] += -0.09053388;
      }
    }
  } else {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.15429997444)) {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)4.4505977631)) {
        result[3] += 0.20185547;
      } else {
        result[3] += -0.024032636;
      }
    } else {
      if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.34159779549)) {
        result[3] += -0.030784309;
      } else {
        result[3] += 0.07161553;
      }
    }
  }
  if (!(data[2].missing != -1) || (data[2].fvalue < (float)14.266499519)) {
    if (!(data[6].missing != -1) || (data[6].fvalue < (float)2.9340088367)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)2.888229847)) {
        result[0] += 0.0013421617;
      } else {
        result[0] += 0.14014938;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)-0.66740310192)) {
        result[0] += 0.09196067;
      } else {
        result[0] += -0.08655492;
      }
    }
  } else {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)0.46544075012)) {
      result[0] += 0.18157455;
    } else {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)1.0384190083)) {
        result[0] += 0.10843713;
      } else {
        result[0] += -0.042339128;
      }
    }
  }
  if (!(data[10].missing != -1) || (data[10].fvalue < (float)-7.4420337677)) {
    if (!(data[3].missing != -1) || (data[3].fvalue < (float)-7.9707565308)) {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.19683754444)) {
        result[1] += -0.082139745;
      } else {
        result[1] += 0.057476494;
      }
    } else {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.33880019188)) {
        result[1] += 0.1606194;
      } else {
        result[1] += 0.05075192;
      }
    }
  } else {
    if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.95852684975)) {
      if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.16203850508)) {
        result[1] += 0.021297595;
      } else {
        result[1] += -0.077163815;
      }
    } else {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)2.7932162285)) {
        result[1] += -0.014889767;
      } else {
        result[1] += -0.15255639;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.95364201069)) {
    if (!(data[19].missing != -1) || (data[19].fvalue < (float)16.547990799)) {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)1.7820982933)) {
        result[2] += -0.023854056;
      } else {
        result[2] += 0.053814303;
      }
    } else {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-7.4684662819)) {
        result[2] += 0.107917726;
      } else {
        result[2] += -0.14920966;
      }
    }
  } else {
    if (!(data[3].missing != -1) || (data[3].fvalue < (float)-9.3505973816)) {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.21799266338)) {
        result[2] += 0.10019364;
      } else {
        result[2] += -0.0057198354;
      }
    } else {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-4.0135602951)) {
        result[2] += -0.10393718;
      } else {
        result[2] += 0.008209207;
      }
    }
  }
  if (!(data[9].missing != -1) || (data[9].fvalue < (float)1.400033474)) {
    if (!(data[13].missing != -1) || (data[13].fvalue < (float)-2.7182910442)) {
      result[3] += 0.23433323;
    } else {
      result[3] += -0.011914483;
    }
  } else {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.87432408333)) {
      result[3] += -0.12346953;
    } else {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)6.6064510345)) {
        result[3] += 0.017285286;
      } else {
        result[3] += -0.073817365;
      }
    }
  }
  if (!(data[19].missing != -1) || (data[19].fvalue < (float)0.34850305319)) {
    if (!(data[6].missing != -1) || (data[6].fvalue < (float)1.7734860182)) {
      result[0] += 0.1167302;
    } else {
      result[0] += 0.011895056;
    }
  } else {
    if (!(data[19].missing != -1) || (data[19].fvalue < (float)5.5622968674)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.94110965729)) {
        result[0] += -0.042660687;
      } else {
        result[0] += 0.020022072;
      }
    } else {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-6.0804300308)) {
        result[0] += -0.09635269;
      } else {
        result[0] += 0.06514462;
      }
    }
  }
  if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.74794781208)) {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.47000467777)) {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)-0.041111759841)) {
        result[1] += -0.11770603;
      } else {
        result[1] += 0.010186801;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)14.848114014)) {
        result[1] += -0.13677894;
      } else {
        result[1] += -0.00609489;
      }
    }
  } else {
    if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.91890794039)) {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.24386464059)) {
        result[1] += 0.06510793;
      } else {
        result[1] += -0.12385871;
      }
    } else {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.97748696804)) {
        result[1] += 0.13462855;
      } else {
        result[1] += 0.007003292;
      }
    }
  }
  if (!(data[1].missing != -1) || (data[1].fvalue < (float)9.4404287338)) {
    if (!(data[5].missing != -1) || (data[5].fvalue < (float)3.9964408875)) {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-2.6595709324)) {
        result[2] += -0.030241612;
      } else {
        result[2] += 0.09481198;
      }
    } else {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-4.1290664673)) {
        result[2] += 0.095590346;
      } else {
        result[2] += -0.119000606;
      }
    }
  } else {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.36795830727)) {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-8.5380029678)) {
        result[2] += 0.09061673;
      } else {
        result[2] += -0.0799941;
      }
    } else {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-6.1672716141)) {
        result[2] += -0.013348116;
      } else {
        result[2] += -0.15054119;
      }
    }
  }
  if (!(data[19].missing != -1) || (data[19].fvalue < (float)0.63487172127)) {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.97124052048)) {
      result[3] += -0.11756275;
    } else {
      result[3] += 0.025951497;
    }
  } else {
    if (!(data[19].missing != -1) || (data[19].fvalue < (float)0.77403235435)) {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)2.9008097649)) {
        result[3] += 0.17862292;
      } else {
        result[3] += -0.032110266;
      }
    } else {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.36517095566)) {
        result[3] += -0.03042873;
      } else {
        result[3] += 0.04294607;
      }
    }
  }
  if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.085634097457)) {
    if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.90507495403)) {
      result[0] += 0.1384546;
    } else {
      result[0] += 0.040083975;
    }
  } else {
    if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.24616658688)) {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-1.5693895817)) {
        result[0] += -0.092078574;
      } else {
        result[0] += 0.08639853;
      }
    } else {
      if (!(data[14].missing != -1) || (data[14].fvalue < (float)0.84137403965)) {
        result[0] += -0.0030145792;
      } else {
        result[0] += 0.09039999;
      }
    }
  }
  if (!(data[2].missing != -1) || (data[2].fvalue < (float)3.7793622017)) {
    if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.047235995531)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.8590337038)) {
        result[1] += 0.10614293;
      } else {
        result[1] += -0.06109078;
      }
    } else {
      if (!(data[14].missing != -1) || (data[14].fvalue < (float)0.73058271408)) {
        result[1] += -0.00041077603;
      } else {
        result[1] += -0.1040402;
      }
    }
  } else {
    if (!(data[15].missing != -1) || (data[15].fvalue < (float)-2.7272429466)) {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.87924909592)) {
        result[1] += -0.032663103;
      } else {
        result[1] += 0.068471044;
      }
    } else {
      if (!(data[2].missing != -1) || (data[2].fvalue < (float)8.311214447)) {
        result[1] += -0.12822051;
      } else {
        result[1] += 0.05504227;
      }
    }
  }
  if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.34408006072)) {
    if (!(data[15].missing != -1) || (data[15].fvalue < (float)-2.3520476818)) {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.54805082083)) {
        result[2] += -0.08793487;
      } else {
        result[2] += 0.024235148;
      }
    } else {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-2.5804185867)) {
        result[2] += 0.07543018;
      } else {
        result[2] += -0.07682564;
      }
    }
  } else {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.90198898315)) {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.19559884071)) {
        result[2] += -0.07482433;
      } else {
        result[2] += 0.14898744;
      }
    } else {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)5.3441438675)) {
        result[2] += -0.12029664;
      } else {
        result[2] += 0.028450763;
      }
    }
  }
  if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.024123268202)) {
    result[3] += -0.10833656;
  } else {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.16397202015)) {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.65657484531)) {
        result[3] += -0.08008532;
      } else {
        result[3] += 0.026783384;
      }
    } else {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-4.6584448814)) {
        result[3] += -0.05887821;
      } else {
        result[3] += 0.06624426;
      }
    }
  }
  if (!(data[17].missing != -1) || (data[17].fvalue < (float)2.658107996)) {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.45566564798)) {
      if (!(data[17].missing != -1) || (data[17].fvalue < (float)1.825578928)) {
        result[0] += 0.08329144;
      } else {
        result[0] += -0.1589578;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)3.1762604713)) {
        result[0] += 0.10577929;
      } else {
        result[0] += -0.054841444;
      }
    }
  } else {
    if (!(data[15].missing != -1) || (data[15].fvalue < (float)-5.1035022736)) {
      if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.33275347948)) {
        result[0] += 0.054487597;
      } else {
        result[0] += -0.09535242;
      }
    } else {
      if (!(data[8].missing != -1) || (data[8].fvalue < (float)4.3556251526)) {
        result[0] += 0.008594375;
      } else {
        result[0] += -0.04954839;
      }
    }
  }
  if (!(data[9].missing != -1) || (data[9].fvalue < (float)2.0763444901)) {
    if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.41802924871)) {
      result[1] += -0.11432918;
    } else {
      result[1] += -0.027165564;
    }
  } else {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.11104912311)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)2.2747528553)) {
        result[1] += 0.011134524;
      } else {
        result[1] += -0.07336805;
      }
    } else {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)-0.042459327728)) {
        result[1] += -0.10665935;
      } else {
        result[1] += 0.063564956;
      }
    }
  }
  if (!(data[2].missing != -1) || (data[2].fvalue < (float)0.63902789354)) {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.12847390771)) {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)1.7057472467)) {
        result[2] += -0.11892458;
      } else {
        result[2] += 0.036726795;
      }
    } else {
      if (!(data[9].missing != -1) || (data[9].fvalue < (float)3.0380983353)) {
        result[2] += -0.038734104;
      } else {
        result[2] += 0.2043903;
      }
    }
  } else {
    if (!(data[3].missing != -1) || (data[3].fvalue < (float)-4.8432021141)) {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.11404527724)) {
        result[2] += 0.022243233;
      } else {
        result[2] += -0.09203752;
      }
    } else {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.16920220852)) {
        result[2] += 0.07960438;
      } else {
        result[2] += -0.12810172;
      }
    }
  }
  if (!(data[15].missing != -1) || (data[15].fvalue < (float)-14.652536392)) {
    result[3] += 0.10178096;
  } else {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.71072697639)) {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.78202831745)) {
        result[3] += 0.09525936;
      } else {
        result[3] += -0.009702671;
      }
    } else {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-7.6856269836)) {
        result[3] += -0.009893009;
      } else {
        result[3] += -0.15204798;
      }
    }
  }
  if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.48722171783)) {
    if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.9697484374)) {
      if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.029339775443)) {
        result[0] += 0.07418997;
      } else {
        result[0] += -0.0055579925;
      }
    } else {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)1.7835550308)) {
        result[0] += 0.14387986;
      } else {
        result[0] += -0.035454556;
      }
    }
  } else {
    if (!(data[17].missing != -1) || (data[17].fvalue < (float)2.5818948746)) {
      result[0] += 0.0038839949;
    } else {
      result[0] += -0.12007438;
    }
  }
  if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.74794781208)) {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.23144459724)) {
      if (!(data[3].missing != -1) || (data[3].fvalue < (float)-5.451628685)) {
        result[1] += -0.14573978;
      } else {
        result[1] += -0.00082117174;
      }
    } else {
      if (!(data[10].missing != -1) || (data[10].fvalue < (float)-7.3260111809)) {
        result[1] += 0.07667615;
      } else {
        result[1] += -0.02281472;
      }
    }
  } else {
    if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.91890794039)) {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.24386464059)) {
        result[1] += 0.06336889;
      } else {
        result[1] += -0.115453035;
      }
    } else {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.69696438313)) {
        result[1] += 0.13109535;
      } else {
        result[1] += 0.02329702;
      }
    }
  }
  if (!(data[1].missing != -1) || (data[1].fvalue < (float)9.4404287338)) {
    if (!(data[15].missing != -1) || (data[15].fvalue < (float)-4.9239282608)) {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)8.560918808)) {
        result[2] += -0.09319834;
      } else {
        result[2] += 0.045171387;
      }
    } else {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)2.5181155205)) {
        result[2] += -0.0018174971;
      } else {
        result[2] += 0.0914748;
      }
    }
  } else {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.36795830727)) {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-8.5380029678)) {
        result[2] += 0.0840279;
      } else {
        result[2] += -0.07657177;
      }
    } else {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-5.62911129)) {
        result[2] += -0.018861532;
      } else {
        result[2] += -0.1433667;
      }
    }
  }
  if (!(data[5].missing != -1) || (data[5].fvalue < (float)0.61749362946)) {
    if (!(data[5].missing != -1) || (data[5].fvalue < (float)0.32165300846)) {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)2.0923290253)) {
        result[3] += 0.04730028;
      } else {
        result[3] += -0.067315035;
      }
    } else {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)-0.1273599565)) {
        result[3] += -0.07021228;
      } else {
        result[3] += 0.14451489;
      }
    }
  } else {
    if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.069771870971)) {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.97285532951)) {
        result[3] += -0.14042489;
      } else {
        result[3] += 0.01312771;
      }
    } else {
      if (!(data[14].missing != -1) || (data[14].fvalue < (float)0.67829436064)) {
        result[3] += -0.06768655;
      } else {
        result[3] += 0.07764806;
      }
    }
  }
  if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.085634097457)) {
    if (!(data[6].missing != -1) || (data[6].fvalue < (float)1.6801629066)) {
      result[0] += 0.1262278;
    } else {
      result[0] += 0.027152596;
    }
  } else {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.1397395581)) {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.51114499569)) {
        result[0] += 0.04634621;
      } else {
        result[0] += -0.027617367;
      }
    } else {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)2.8168451786)) {
        result[0] += -0.069153726;
      } else {
        result[0] += 0.01978926;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.94672739506)) {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)13.014367104)) {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.33848887682)) {
        result[1] += 0.030060029;
      } else {
        result[1] += -0.0710191;
      }
    } else {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-8.5167350769)) {
        result[1] += -0.029811135;
      } else {
        result[1] += 0.119652085;
      }
    }
  } else {
    if (!(data[13].missing != -1) || (data[13].fvalue < (float)-4.9845867157)) {
      if (!(data[3].missing != -1) || (data[3].fvalue < (float)-4.163690567)) {
        result[1] += 0.042116437;
      } else {
        result[1] += -0.11507077;
      }
    } else {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)1.7542722225)) {
        result[1] += -0.0087043885;
      } else {
        result[1] += -0.14340723;
      }
    }
  }
  if (!(data[1].missing != -1) || (data[1].fvalue < (float)-0.58338439465)) {
    if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.17387917638)) {
      result[2] += -0.12856592;
    } else {
      result[2] += -0.031720564;
    }
  } else {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)0.62477421761)) {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)0.96617305279)) {
        result[2] += 0.0033026745;
      } else {
        result[2] += 0.10668152;
      }
    } else {
      if (!(data[5].missing != -1) || (data[5].fvalue < (float)2.1218132973)) {
        result[2] += -0.07123928;
      } else {
        result[2] += 0.007992287;
      }
    }
  }
  if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.78989106417)) {
    result[3] += -0.10884562;
  } else {
    if (!(data[9].missing != -1) || (data[9].fvalue < (float)1.400033474)) {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-2.7182910442)) {
        result[3] += 0.1926314;
      } else {
        result[3] += 0.030741911;
      }
    } else {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.95958673954)) {
        result[3] += -0.028338104;
      } else {
        result[3] += 0.031144656;
      }
    }
  }
  if (!(data[17].missing != -1) || (data[17].fvalue < (float)2.658107996)) {
    if (!(data[16].missing != -1) || (data[16].fvalue < (float)-0.012630512938)) {
      result[0] += -0.10582006;
    } else {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.7335780859)) {
        result[0] += -0.0457146;
      } else {
        result[0] += 0.08957176;
      }
    }
  } else {
    if (!(data[6].missing != -1) || (data[6].fvalue < (float)2.9340088367)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)2.7174620628)) {
        result[0] += -0.004050022;
      } else {
        result[0] += 0.10938751;
      }
    } else {
      if (!(data[19].missing != -1) || (data[19].fvalue < (float)5.8279724121)) {
        result[0] += -0.08529973;
      } else {
        result[0] += 0.04625221;
      }
    }
  }
  if (!(data[3].missing != -1) || (data[3].fvalue < (float)-4.1653499603)) {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.13923540711)) {
      if (!(data[14].missing != -1) || (data[14].fvalue < (float)0.49543356895)) {
        result[1] += 0.04575298;
      } else {
        result[1] += -0.05794617;
      }
    } else {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.28498408198)) {
        result[1] += -0.011853484;
      } else {
        result[1] += 0.13066196;
      }
    }
  } else {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.20766527951)) {
      if (!(data[20].missing != -1) || (data[20].fvalue < (float)0.18994891644)) {
        result[1] += -0.08765885;
      } else {
        result[1] += 0.09223558;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)15.952486992)) {
        result[1] += -0.1252692;
      } else {
        result[1] += 0.03625401;
      }
    }
  }
  if (!(data[1].missing != -1) || (data[1].fvalue < (float)9.4404287338)) {
    if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.24861437082)) {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-2.4555120468)) {
        result[2] += -0.06372092;
      } else {
        result[2] += 0.052335043;
      }
    } else {
      if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.93933653831)) {
        result[2] += 0.077133894;
      } else {
        result[2] += -0.015917717;
      }
    }
  } else {
    if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.36795830727)) {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-8.5380029678)) {
        result[2] += 0.077236876;
      } else {
        result[2] += -0.06850232;
      }
    } else {
      if (!(data[15].missing != -1) || (data[15].fvalue < (float)-5.1482791901)) {
        result[2] += -0.027785724;
      } else {
        result[2] += -0.13768251;
      }
    }
  }
  if (!(data[19].missing != -1) || (data[19].fvalue < (float)0.64196443558)) {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.96718305349)) {
      result[3] += -0.110491745;
    } else {
      result[3] += 0.010868375;
    }
  } else {
    if (!(data[9].missing != -1) || (data[9].fvalue < (float)1.7018022537)) {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-1.6804827452)) {
        result[3] += 0.14441347;
      } else {
        result[3] += -0.03151255;
      }
    } else {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.064125493169)) {
        result[3] += 0.011059126;
      } else {
        result[3] += -0.11978945;
      }
    }
  }
  if (!(data[11].missing != -1) || (data[11].fvalue < (float)-2.1010673046)) {
    if (!(data[11].missing != -1) || (data[11].fvalue < (float)-3.0003683567)) {
      if (!(data[11].missing != -1) || (data[11].fvalue < (float)-4.0844373703)) {
        result[0] += -0.006547457;
      } else {
        result[0] += 0.07568574;
      }
    } else {
      if (!(data[12].missing != -1) || (data[12].fvalue < (float)-0.15506982803)) {
        result[0] += 0.11548894;
      } else {
        result[0] += -0.11971418;
      }
    }
  } else {
    if (!(data[18].missing != -1) || (data[18].fvalue < (float)0.20290026069)) {
      if (!(data[6].missing != -1) || (data[6].fvalue < (float)6.5039310455)) {
        result[0] += 0.1280891;
      } else {
        result[0] += -0.030491615;
      }
    } else {
      if (!(data[3].missing != -1) || (data[3].fvalue < (float)-1.7996710539)) {
        result[0] += 0.0713704;
      } else {
        result[0] += -0.11083285;
      }
    }
  }
  if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.8273460865)) {
    if (!(data[1].missing != -1) || (data[1].fvalue < (float)4.3765792847)) {
      if (!(data[4].missing != -1) || (data[4].fvalue < (float)-0.038715831935)) {
        result[1] += -0.024862163;
      } else {
        result[1] += -0.12201077;
      }
    } else {
      if (!(data[2].missing != -1) || (data[2].fvalue < (float)4.0040197372)) {
        result[1] += -0.057924837;
      } else {
        result[1] += 0.05457749;
      }
    }
  } else {
    if (!(data[4].missing != -1) || (data[4].fvalue < (float)0.69449448586)) {
      if (!(data[16].missing != -1) || (data[16].fvalue < (float)0.20844490826)) {
        result[1] += 0.031014822;
      } else {
        result[1] += -0.03950224;
      }
    } else {
      if (!(data[1].missing != -1) || (data[1].fvalue < (float)7.9290304184)) {
        result[1] += -0.105458476;
      } else {
        result[1] += -0.024360796;
      }
    }
  }
  if (!(data[10].missing != -1) || (data[10].fvalue < (float)-2.5833954811)) {
    if (!(data[11].missing != -1) || (data[11].fvalue < (float)-2.6647055149)) {
      if (!(data[7].missing != -1) || (data[7].fvalue < (float)0.93293595314)) {
        result[2] += -0.037232433;
      } else {
        result[2] += 0.03240219;
      }
    } else {
      result[2] += 0.24705304;
    }
  } else {
    if (!(data[0].missing != -1) || (data[0].fvalue < (float)0.37334442139)) {
      result[2] += 0.029423838;
    } else {
      result[2] += -0.12169463;
    }
  }
  if (!(data[15].missing != -1) || (data[15].fvalue < (float)-16.004037857)) {
    result[3] += 0.10235723;
  } else {
    if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.71072697639)) {
      if (!(data[21].missing != -1) || (data[21].fvalue < (float)0.69291460514)) {
        result[3] += -0.004855276;
      } else {
        result[3] += 0.12976341;
      }
    } else {
      if (!(data[13].missing != -1) || (data[13].fvalue < (float)-7.6856269836)) {
        result[3] += -0.0026532328;
      } else {
        result[3] += -0.14586158;
      }
    }
  }
  
  // Apply base_scores
  result[0] += 0.5;
  result[1] += 0.5;
  result[2] += 0.5;
  result[3] += 0.5;
  
  // Apply postprocessor
  if (!pred_margin) { postprocess(result); }
}

// Apply postprocessor for a single target
static void postprocess_impl(float* target_result, int num_class) {
  float max_margin = target_result[0];
  double norm_const = 0.0;
  float t;
  for (int k = 1; k < num_class; ++k) {
    if (target_result[k] > max_margin) {
      max_margin = target_result[k];
    }
  }
  for (int k = 0; k < num_class; ++k) {
    t = my_exp(target_result[k] - max_margin);
    norm_const += t;
    target_result[k] = t;
  }
  for (int k = 0; k < num_class; ++k) {
    target_result[k] /= (float)norm_const;
  }
}

void postprocess(float* result) {
  // softmax
  postprocess_impl(&result[0], 4);
}

