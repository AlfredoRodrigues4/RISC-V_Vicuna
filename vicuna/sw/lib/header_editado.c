#include "header_editado.h"
#include <stddef.h>
#include <stdint.h>
#include <riscv_vector.h>

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


int16_t predict(union Entry* data) {
  //unsigned int tmp;
  //float result[4] = {0, 0, 0, 0};
  int16_t result[4] = {0, 0, 0, 0};


if (data[2].qvalue < 71)  {
if (data[18].qvalue < 26)  {
if (data[11].qvalue < -260)  {
        result[0] += 19;
      } else {
        result[0] += 36;
      }
    } else {
if (data[18].qvalue < 32)  {
        result[0] += 9;
      } else {
        result[0] += -11;
      }
    }
  } else {
if (data[17].qvalue < 218)  {
if (data[7].qvalue < 61)  {
        result[0] += 28;
      } else {
        result[0] += -11;
      }
    } else {
if (data[13].qvalue < -215)  {
        result[0] += -11;
      } else {
        result[0] += -4;
      }
    }
  }
if (data[1].qvalue < 736)  {
if (data[12].qvalue < -3)  {
if (data[9].qvalue < 402)  {
        result[1] += -10;
      } else {
        result[1] += 2;
      }
    } else {
if (data[3].qvalue < -185)  {
        result[1] += 31;
      } else {
        result[1] += -10;
      }
    }
  } else {
if (data[5].qvalue < 2024)  {
if (data[8].qvalue < 258)  {
        result[1] += -2;
      } else {
        result[1] += 36;
      }
    } else {
if (data[20].qvalue < 107)  {
        result[1] += -12;
      } else {
        result[1] += 26;
      }
    }
  }
if (data[3].qvalue < -676)  {
if (data[12].qvalue < -12)  {
if (data[20].qvalue < 100)  {
        result[2] += 37;
      } else {
        result[2] += -5;
      }
    } else {
if (data[1].qvalue < 619)  {
        result[2] += 11;
      } else {
        result[2] += -11;
      }
    }
  } else {
if (data[11].qvalue < -345)  {
if (data[12].qvalue < -9)  {
        result[2] += 6;
      } else {
        result[2] += -9;
      }
    } else {
if (data[10].qvalue < -267)  {
        result[2] += -7;
      } else {
        result[2] += -12;
      }
    }
  }
if (data[0].qvalue < 63)  {
if (data[15].qvalue < -638)  {
if (data[17].qvalue < 628)  {
        result[3] += 36;
      } else {
        result[3] += -7;
      }
    } else {
if (data[6].qvalue < 381)  {
        result[3] += -10;
      } else {
        result[3] += 7;
      }
    }
  } else {
if (data[3].qvalue < -636)  {
      result[3] += -10;
    } else {
      result[3] += 38;
    }
  }
if (data[2].qvalue < 88)  {
if (data[4].qvalue < 35)  {
if (data[6].qvalue < 181)  {
        result[0] += 20;
      } else {
        result[0] += 0;
      }
    } else {
if (data[3].qvalue < -70)  {
        result[0] += -12;
      } else {
        result[0] += 1;
      }
    }
  } else {
if (data[8].qvalue < 173)  {
if (data[7].qvalue < 59)  {
        result[0] += 21;
      } else {
        result[0] += -6;
      }
    } else {
if (data[4].qvalue < 0)  {
        result[0] += 3;
      } else {
        result[0] += -10;
      }
    }
  }
if (data[1].qvalue < 438)  {
if (data[21].qvalue < 9)  {
if (data[10].qvalue < -191)  {
        result[1] += 20;
      } else {
        result[1] += -7;
      }
    } else {
if (data[2].qvalue < 243)  {
        result[1] += -10;
      } else {
        result[1] += -1;
      }
    }
  } else {
if (data[5].qvalue < 1035)  {
if (data[9].qvalue < 272)  {
        result[1] += -2;
      } else {
        result[1] += 22;
      }
    } else {
if (data[1].qvalue < 1739)  {
        result[1] += -10;
      } else {
        result[1] += 17;
      }
    }
  }
if (data[11].qvalue < -521)  {
if (data[12].qvalue < -12)  {
if (data[3].qvalue < -520)  {
        result[2] += 22;
      } else {
        result[2] += -11;
      }
    } else {
if (data[1].qvalue < 60)  {
        result[2] += 18;
      } else {
        result[2] += -10;
      }
    }
  } else {
if (data[10].qvalue < -273)  {
if (data[0].qvalue < 52)  {
        result[2] += 16;
      } else {
        result[2] += -5;
      }
    } else {
if (data[10].qvalue < -267)  {
        result[2] += -7;
      } else {
        result[2] += -11;
      }
    }
  }
if (data[0].qvalue < 62)  {
if (data[15].qvalue < -638)  {
if (data[17].qvalue < 628)  {
        result[3] += 23;
      } else {
        result[3] += -5;
      }
    } else {
if (data[6].qvalue < 223)  {
        result[3] += -10;
      } else {
        result[3] += -1;
      }
    }
  } else {
if (data[3].qvalue < -562)  {
      result[3] += -11;
    } else {
if (data[4].qvalue < 32)  {
        result[3] += 12;
      } else {
        result[3] += 23;
      }
    }
  }
if (data[17].qvalue < 218)  {
if (data[4].qvalue < 27)  {
if (data[6].qvalue < 219)  {
        result[0] += 17;
      } else {
        result[0] += 0;
      }
    } else {
if (data[19].qvalue < -24)  {
        result[0] += 17;
      } else {
        result[0] += -9;
      }
    }
  } else {
if (data[2].qvalue < 88)  {
if (data[4].qvalue < 25)  {
        result[0] += 10;
      } else {
        result[0] += -8;
      }
    } else {
if (data[0].qvalue < 41)  {
        result[0] += 5;
      } else {
        result[0] += -9;
      }
    }
  }
if (data[1].qvalue < 479)  {
if (data[12].qvalue < -3)  {
if (data[9].qvalue < 436)  {
        result[1] += -9;
      } else {
        result[1] += 1;
      }
    } else {
if (data[3].qvalue < -231)  {
        result[1] += 18;
      } else {
        result[1] += -7;
      }
    }
  } else {
if (data[5].qvalue < 1199)  {
if (data[0].qvalue < 63)  {
        result[1] += 16;
      } else {
        result[1] += -11;
      }
    } else {
if (data[1].qvalue < 2553)  {
        result[1] += -10;
      } else {
        result[1] += 14;
      }
    }
  }
if (data[5].qvalue < 795)  {
if (data[11].qvalue < -345)  {
if (data[1].qvalue < 286)  {
        result[2] += 5;
      } else {
        result[2] += -10;
      }
    } else {
if (data[0].qvalue < 56)  {
        result[2] += -6;
      } else {
        result[2] += -10;
      }
    }
  } else {
if (data[3].qvalue < -434)  {
if (data[1].qvalue < 1730)  {
        result[2] += 21;
      } else {
        result[2] += -1;
      }
    } else {
if (data[1].qvalue < 418)  {
        result[2] += 13;
      } else {
        result[2] += -9;
      }
    }
  }
if (data[0].qvalue < 62)  {
if (data[15].qvalue < -638)  {
if (data[1].qvalue < 178)  {
        result[3] += 18;
      } else {
        result[3] += -6;
      }
    } else {
if (data[6].qvalue < 459)  {
        result[3] += -9;
      } else {
        result[3] += 6;
      }
    }
  } else {
if (data[17].qvalue < 505)  {
if (data[7].qvalue < 59)  {
        result[3] += -8;
      } else {
        result[3] += 17;
      }
    } else {
if (data[13].qvalue < -1169)  {
        result[3] += 12;
      } else {
        result[3] += -10;
      }
    }
  }
if (data[17].qvalue < 218)  {
if (data[4].qvalue < 27)  {
if (data[6].qvalue < 281)  {
        result[0] += 14;
      } else {
        result[0] += -1;
      }
    } else {
if (data[14].qvalue < 54)  {
        result[0] += -9;
      } else {
        result[0] += 7;
      }
    }
  } else {
if (data[2].qvalue < 63)  {
if (data[4].qvalue < 33)  {
        result[0] += 9;
      } else {
        result[0] += -10;
      }
    } else {
if (data[18].qvalue < 14)  {
        result[0] += -3;
      } else {
        result[0] += -10;
      }
    }
  }
if (data[1].qvalue < 167)  {
if (data[12].qvalue < -2)  {
if (data[10].qvalue < -468)  {
        result[1] += 1;
      } else {
        result[1] += -9;
      }
    } else {
if (data[11].qvalue < -116)  {
        result[1] += 15;
      } else {
        result[1] += -10;
      }
    }
  } else {
if (data[0].qvalue < 62)  {
if (data[5].qvalue < 898)  {
        result[1] += 12;
      } else {
        result[1] += 0;
      }
    } else {
if (data[17].qvalue < 539)  {
        result[1] += -11;
      } else {
        result[1] += 0;
      }
    }
  }
if (data[5].qvalue < 268)  {
if (data[0].qvalue < 57)  {
if (data[11].qvalue < -261)  {
        result[2] += 4;
      } else {
        result[2] += -9;
      }
    } else {
if (data[11].qvalue < -665)  {
        result[2] += 11;
      } else {
        result[2] += -10;
      }
    }
  } else {
if (data[1].qvalue < 768)  {
if (data[10].qvalue < -273)  {
        result[2] += 18;
      } else {
        result[2] += -10;
      }
    } else {
if (data[5].qvalue < 2140)  {
        result[2] += -11;
      } else {
        result[2] += 10;
      }
    }
  }
if (data[0].qvalue < 61)  {
if (data[15].qvalue < -796)  {
if (data[1].qvalue < 413)  {
        result[3] += 18;
      } else {
        result[3] += -6;
      }
    } else {
if (data[18].qvalue < 53)  {
        result[3] += -9;
      } else {
        result[3] += 13;
      }
    }
  } else {
if (data[17].qvalue < 486)  {
if (data[13].qvalue < -319)  {
        result[3] += 14;
      } else {
        result[3] += 2;
      }
    } else {
if (data[15].qvalue < -1094)  {
        result[3] += 15;
      } else {
        result[3] += -9;
      }
    }
  }
if (data[17].qvalue < 218)  {
if (data[4].qvalue < 27)  {
if (data[6].qvalue < 219)  {
        result[0] += 12;
      } else {
        result[0] += 0;
      }
    } else {
if (data[5].qvalue < 254)  {
        result[0] += -8;
      } else {
        result[0] += 8;
      }
    }
  } else {
if (data[2].qvalue < 123)  {
if (data[4].qvalue < 25)  {
        result[0] += 6;
      } else {
        result[0] += -7;
      }
    } else {
if (data[0].qvalue < 40)  {
        result[0] += 4;
      } else {
        result[0] += -8;
      }
    }
  }
if (data[1].qvalue < 129)  {
if (data[12].qvalue < -3)  {
if (data[8].qvalue < 873)  {
        result[1] += -9;
      } else {
        result[1] += 23;
      }
    } else {
if (data[9].qvalue < 214)  {
        result[1] += -7;
      } else {
        result[1] += 15;
      }
    }
  } else {
if (data[0].qvalue < 62)  {
if (data[11].qvalue < -224)  {
        result[1] += 9;
      } else {
        result[1] += -6;
      }
    } else {
if (data[17].qvalue < 862)  {
        result[1] += -9;
      } else {
        result[1] += 3;
      }
    }
  }
if (data[5].qvalue < 141)  {
if (data[0].qvalue < 55)  {
if (data[11].qvalue < -260)  {
        result[2] += 3;
      } else {
        result[2] += -9;
      }
    } else {
if (data[14].qvalue < 60)  {
        result[2] += -9;
      } else {
        result[2] += 24;
      }
    }
  } else {
if (data[1].qvalue < 736)  {
if (data[10].qvalue < -273)  {
        result[2] += 13;
      } else {
        result[2] += -8;
      }
    } else {
if (data[5].qvalue < 2024)  {
        result[2] += -10;
      } else {
        result[2] += 8;
      }
    }
  }
if (data[0].qvalue < 61)  {
if (data[15].qvalue < -796)  {
if (data[1].qvalue < 413)  {
        result[3] += 15;
      } else {
        result[3] += -6;
      }
    } else {
if (data[0].qvalue < 59)  {
        result[3] += -10;
      } else {
        result[3] += -6;
      }
    }
  } else {
if (data[17].qvalue < 486)  {
if (data[13].qvalue < -319)  {
        result[3] += 12;
      } else {
        result[3] += 2;
      }
    } else {
if (data[15].qvalue < -1094)  {
        result[3] += 13;
      } else {
        result[3] += -9;
      }
    }
  }
if (data[11].qvalue < -261)  {
if (data[2].qvalue < 136)  {
if (data[4].qvalue < 35)  {
        result[0] += 2;
      } else {
        result[0] += -10;
      }
    } else {
if (data[9].qvalue < 154)  {
        result[0] += 7;
      } else {
        result[0] += -8;
      }
    }
  } else {
if (data[18].qvalue < 32)  {
if (data[6].qvalue < 217)  {
        result[0] += 11;
      } else {
        result[0] += -1;
      }
    } else {
      result[0] += -10;
    }
  }
if (data[1].qvalue < 736)  {
if (data[16].qvalue < 5)  {
if (data[2].qvalue < 152)  {
        result[1] += -4;
      } else {
        result[1] += 9;
      }
    } else {
if (data[9].qvalue < 423)  {
        result[1] += -10;
      } else {
        result[1] += 1;
      }
    }
  } else {
if (data[5].qvalue < 2989)  {
if (data[11].qvalue < -175)  {
        result[1] += 11;
      } else {
        result[1] += -8;
      }
    } else {
      result[1] += -11;
    }
  }
if (data[5].qvalue < 144)  {
if (data[0].qvalue < 52)  {
if (data[11].qvalue < -260)  {
        result[2] += 7;
      } else {
        result[2] += -9;
      }
    } else {
if (data[14].qvalue < 60)  {
        result[2] += -8;
      } else {
        result[2] += 20;
      }
    }
  } else {
if (data[1].qvalue < 691)  {
if (data[10].qvalue < -267)  {
        result[2] += 11;
      } else {
        result[2] += -8;
      }
    } else {
if (data[3].qvalue < -549)  {
        result[2] += 5;
      } else {
        result[2] += -10;
      }
    }
  }
if (data[0].qvalue < 61)  {
if (data[15].qvalue < -731)  {
if (data[1].qvalue < 413)  {
        result[3] += 13;
      } else {
        result[3] += -6;
      }
    } else {
if (data[5].qvalue < 37)  {
        result[3] += -5;
      } else {
        result[3] += -10;
      }
    }
  } else {
if (data[10].qvalue < -467)  {
if (data[0].qvalue < 63)  {
        result[3] += -9;
      } else {
        result[3] += 7;
      }
    } else {
if (data[4].qvalue < 32)  {
        result[3] += 3;
      } else {
        result[3] += 13;
      }
    }
  }
if (data[11].qvalue < -261)  {
if (data[18].qvalue < 14)  {
if (data[2].qvalue < 245)  {
        result[0] += 3;
      } else {
        result[0] += -6;
      }
    } else {
if (data[6].qvalue < -6)  {
        result[0] += 6;
      } else {
        result[0] += -9;
      }
    }
  } else {
if (data[18].qvalue < 26)  {
if (data[6].qvalue < 191)  {
        result[0] += 10;
      } else {
        result[0] += 0;
      }
    } else {
if (data[18].qvalue < 32)  {
        result[0] += -1;
      } else {
        result[0] += -10;
      }
    }
  }
if (data[1].qvalue < 119)  {
if (data[12].qvalue < -2)  {
if (data[10].qvalue < -468)  {
        result[1] += 1;
      } else {
        result[1] += -8;
      }
    } else {
if (data[17].qvalue < 154)  {
        result[1] += -10;
      } else {
        result[1] += 11;
      }
    }
  } else {
if (data[12].qvalue < -9)  {
if (data[20].qvalue < 50)  {
        result[1] += -6;
      } else {
        result[1] += 8;
      }
    } else {
if (data[3].qvalue < -213)  {
        result[1] += 12;
      } else {
        result[1] += -5;
      }
    }
  }
if (data[5].qvalue < 369)  {
if (data[12].qvalue < -6)  {
if (data[20].qvalue < 19)  {
        result[2] += 6;
      } else {
        result[2] += -6;
      }
    } else {
if (data[14].qvalue < 61)  {
        result[2] += -10;
      } else {
        result[2] += 8;
      }
    }
  } else {
if (data[1].qvalue < 1019)  {
if (data[10].qvalue < -265)  {
        result[2] += 12;
      } else {
        result[2] += -9;
      }
    } else {
if (data[5].qvalue < 3030)  {
        result[2] += -9;
      } else {
        result[2] += 10;
      }
    }
  }
if (data[15].qvalue < -359)  {
if (data[8].qvalue < 515)  {
if (data[10].qvalue < -528)  {
        result[3] += -9;
      } else {
        result[3] += 10;
      }
    } else {
if (data[15].qvalue < -1340)  {
        result[3] += 13;
      } else {
        result[3] += -10;
      }
    }
  } else {
if (data[0].qvalue < 62)  {
if (data[1].qvalue < 57)  {
        result[3] += -6;
      } else {
        result[3] += -10;
      }
    } else {
if (data[19].qvalue < 180)  {
        result[3] += 11;
      } else {
        result[3] += -7;
      }
    }
  }
if (data[17].qvalue < 170)  {
if (data[4].qvalue < 30)  {
if (data[6].qvalue < 281)  {
        result[0] += 11;
      } else {
        result[0] += -1;
      }
    } else {
if (data[14].qvalue < 57)  {
        result[0] += -9;
      } else {
        result[0] += 6;
      }
    }
  } else {
if (data[11].qvalue < -343)  {
if (data[18].qvalue < 14)  {
        result[0] += -3;
      } else {
        result[0] += -10;
      }
    } else {
if (data[19].qvalue < 359)  {
        result[0] += -2;
      } else {
        result[0] += 11;
      }
    }
  }
if (data[2].qvalue < 182)  {
if (data[21].qvalue < 11)  {
if (data[18].qvalue < 27)  {
        result[1] += -5;
      } else {
        result[1] += 11;
      }
    } else {
if (data[17].qvalue < 400)  {
        result[1] += -9;
      } else {
        result[1] += -3;
      }
    }
  } else {
if (data[13].qvalue < -473)  {
if (data[17].qvalue < 867)  {
        result[1] += -7;
      } else {
        result[1] += 9;
      }
    } else {
if (data[8].qvalue < 207)  {
        result[1] += -8;
      } else {
        result[1] += 8;
      }
    }
  }
if (data[5].qvalue < 100)  {
if (data[15].qvalue < -223)  {
if (data[8].qvalue < 537)  {
        result[2] += -10;
      } else {
        result[2] += -4;
      }
    } else {
if (data[11].qvalue < -260)  {
        result[2] += 3;
      } else {
        result[2] += -9;
      }
    }
  } else {
if (data[12].qvalue < -9)  {
if (data[20].qvalue < 52)  {
        result[2] += 8;
      } else {
        result[2] += -3;
      }
    } else {
if (data[1].qvalue < 60)  {
        result[2] += 8;
      } else {
        result[2] += -9;
      }
    }
  }
if (data[0].qvalue < 60)  {
if (data[15].qvalue < -808)  {
      result[3] += 8;
    } else {
if (data[7].qvalue < 57)  {
        result[3] += -7;
      } else {
        result[3] += -10;
      }
    }
  } else {
if (data[10].qvalue < -441)  {
if (data[15].qvalue < -1037)  {
        result[3] += 10;
      } else {
        result[3] += -7;
      }
    } else {
if (data[4].qvalue < 25)  {
        result[3] += 1;
      } else {
        result[3] += 11;
      }
    }
  }
if (data[17].qvalue < 170)  {
if (data[4].qvalue < 30)  {
if (data[6].qvalue < 281)  {
        result[0] += 10;
      } else {
        result[0] += -2;
      }
    } else {
if (data[14].qvalue < 57)  {
        result[0] += -8;
      } else {
        result[0] += 4;
      }
    }
  } else {
if (data[18].qvalue < 31)  {
if (data[11].qvalue < -343)  {
        result[0] += -5;
      } else {
        result[0] += 2;
      }
    } else {
      result[0] += -10;
    }
  }
if (data[1].qvalue < 58)  {
if (data[21].qvalue < 8)  {
if (data[20].qvalue < 11)  {
        result[1] += -4;
      } else {
        result[1] += 9;
      }
    } else {
if (data[19].qvalue < 1064)  {
        result[1] += -9;
      } else {
        result[1] += 1;
      }
    }
  } else {
if (data[2].qvalue < 141)  {
if (data[21].qvalue < 11)  {
        result[1] += 8;
      } else {
        result[1] += -7;
      }
    } else {
if (data[12].qvalue < -9)  {
        result[1] += 1;
      } else {
        result[1] += 10;
      }
    }
  }
if (data[5].qvalue < 100)  {
if (data[15].qvalue < -223)  {
if (data[17].qvalue < 561)  {
        result[2] += -9;
      } else {
        result[2] += -2;
      }
    } else {
if (data[11].qvalue < -260)  {
        result[2] += 2;
      } else {
        result[2] += -8;
      }
    }
  } else {
if (data[3].qvalue < -304)  {
if (data[1].qvalue < 604)  {
        result[2] += 8;
      } else {
        result[2] += -2;
      }
    } else {
if (data[15].qvalue < -97)  {
        result[2] += -8;
      } else {
        result[2] += 10;
      }
    }
  }
if (data[13].qvalue < -475)  {
if (data[9].qvalue < 598)  {
if (data[10].qvalue < -524)  {
        result[3] += -9;
      } else {
        result[3] += 10;
      }
    } else {
if (data[15].qvalue < -986)  {
        result[3] += 8;
      } else {
        result[3] += -10;
      }
    }
  } else {
if (data[1].qvalue < 57)  {
if (data[0].qvalue < 59)  {
        result[3] += -7;
      } else {
        result[3] += 8;
      }
    } else {
if (data[7].qvalue < 62)  {
        result[3] += -8;
      } else {
        result[3] += 6;
      }
    }
  }
if (data[13].qvalue < -164)  {
if (data[4].qvalue < 35)  {
if (data[2].qvalue < 247)  {
        result[0] += 2;
      } else {
        result[0] += -5;
      }
    } else {
if (data[6].qvalue < 0)  {
        result[0] += 3;
      } else {
        result[0] += -10;
      }
    }
  } else {
if (data[6].qvalue < 188)  {
if (data[9].qvalue < 390)  {
        result[0] += 9;
      } else {
        result[0] += -5;
      }
    } else {
if (data[7].qvalue < 51)  {
        result[0] += 12;
      } else {
        result[0] += -8;
      }
    }
  }
if (data[2].qvalue < 182)  {
if (data[16].qvalue < 3)  {
if (data[18].qvalue < 12)  {
        result[1] += -7;
      } else {
        result[1] += 7;
      }
    } else {
if (data[17].qvalue < 415)  {
        result[1] += -9;
      } else {
        result[1] += -2;
      }
    }
  } else {
if (data[13].qvalue < -499)  {
if (data[8].qvalue < 638)  {
        result[1] += -10;
      } else {
        result[1] += 4;
      }
    } else {
if (data[1].qvalue < 20)  {
        result[1] += -6;
      } else {
        result[1] += 6;
      }
    }
  }
if (data[5].qvalue < 703)  {
if (data[1].qvalue < 164)  {
if (data[5].qvalue < 78)  {
        result[2] += -5;
      } else {
        result[2] += 6;
      }
    } else {
if (data[20].qvalue < 16)  {
        result[2] += 0;
      } else {
        result[2] += -8;
      }
    }
  } else {
if (data[3].qvalue < -434)  {
if (data[1].qvalue < 3260)  {
        result[2] += 11;
      } else {
        result[2] += -6;
      }
    } else {
if (data[1].qvalue < 771)  {
        result[2] += 5;
      } else {
        result[2] += -9;
      }
    }
  }
if (data[13].qvalue < -504)  {
if (data[9].qvalue < 598)  {
if (data[11].qvalue < -527)  {
        result[3] += -7;
      } else {
        result[3] += 10;
      }
    } else {
if (data[15].qvalue < -986)  {
        result[3] += 8;
      } else {
        result[3] += -10;
      }
    }
  } else {
if (data[0].qvalue < 60)  {
if (data[7].qvalue < 57)  {
        result[3] += -6;
      } else {
        result[3] += -10;
      }
    } else {
if (data[1].qvalue < 213)  {
        result[3] += 5;
      } else {
        result[3] += -8;
      }
    }
  }
if (data[17].qvalue < 170)  {
if (data[4].qvalue < 30)  {
if (data[6].qvalue < 281)  {
        result[0] += 9;
      } else {
        result[0] += -1;
      }
    } else {
if (data[10].qvalue < -79)  {
        result[0] += -8;
      } else {
        result[0] += 4;
      }
    }
  } else {
if (data[18].qvalue < 31)  {
if (data[11].qvalue < -343)  {
        result[0] += -4;
      } else {
        result[0] += 2;
      }
    } else {
      result[0] += -10;
    }
  }
if (data[1].qvalue < 844)  {
if (data[12].qvalue < -7)  {
if (data[8].qvalue < 443)  {
        result[1] += -9;
      } else {
        result[1] += 0;
      }
    } else {
if (data[10].qvalue < -224)  {
        result[1] += 9;
      } else {
        result[1] += -5;
      }
    }
  } else {
if (data[5].qvalue < 2718)  {
if (data[11].qvalue < -175)  {
        result[1] += 9;
      } else {
        result[1] += -5;
      }
    } else {
if (data[16].qvalue < 12)  {
        result[1] += -1;
      } else {
        result[1] += -11;
      }
    }
  }
if (data[5].qvalue < 369)  {
if (data[20].qvalue < 35)  {
if (data[12].qvalue < -6)  {
        result[2] += 2;
      } else {
        result[2] += -8;
      }
    } else {
if (data[1].qvalue < -38)  {
        result[2] += 6;
      } else {
        result[2] += -10;
      }
    }
  } else {
if (data[1].qvalue < 1019)  {
if (data[10].qvalue < -273)  {
        result[2] += 10;
      } else {
        result[2] += -6;
      }
    } else {
if (data[5].qvalue < 2836)  {
        result[2] += -9;
      } else {
        result[2] += 9;
      }
    }
  }
if (data[15].qvalue < -359)  {
if (data[8].qvalue < 515)  {
if (data[19].qvalue < 327)  {
        result[3] += 9;
      } else {
        result[3] += 0;
      }
    } else {
if (data[15].qvalue < -1340)  {
        result[3] += 11;
      } else {
        result[3] += -9;
      }
    }
  } else {
if (data[3].qvalue < -282)  {
if (data[2].qvalue < -4)  {
        result[3] += 2;
      } else {
        result[3] += -9;
      }
    } else {
if (data[0].qvalue < 55)  {
        result[3] += -9;
      } else {
        result[3] += 3;
      }
    }
  }
if (data[4].qvalue < 0)  {
if (data[5].qvalue < 400)  {
if (data[8].qvalue < 427)  {
        result[0] += 7;
      } else {
        result[0] += 19;
      }
    } else {
if (data[2].qvalue < 222)  {
        result[0] += 7;
      } else {
        result[0] += -8;
      }
    }
  } else {
if (data[6].qvalue < 0)  {
if (data[21].qvalue < 23)  {
        result[0] += 11;
      } else {
        result[0] += -1;
      }
    } else {
if (data[4].qvalue < 35)  {
        result[0] += -1;
      } else {
        result[0] += -9;
      }
    }
  }
if (data[2].qvalue < 241)  {
if (data[16].qvalue < 5)  {
if (data[1].qvalue < 303)  {
        result[1] += -2;
      } else {
        result[1] += 6;
      }
    } else {
if (data[19].qvalue < 1128)  {
        result[1] += -8;
      } else {
        result[1] += 3;
      }
    }
  } else {
if (data[3].qvalue < -660)  {
if (data[12].qvalue < -12)  {
        result[1] += -10;
      } else {
        result[1] += 6;
      }
    } else {
if (data[9].qvalue < 385)  {
        result[1] += 0;
      } else {
        result[1] += 7;
      }
    }
  }
if (data[5].qvalue < 369)  {
if (data[15].qvalue < -174)  {
if (data[0].qvalue < 51)  {
        result[2] += 2;
      } else {
        result[2] += -6;
      }
    } else {
if (data[11].qvalue < -260)  {
        result[2] += 9;
      } else {
        result[2] += -6;
      }
    }
  } else {
if (data[1].qvalue < 1019)  {
if (data[3].qvalue < -345)  {
        result[2] += 10;
      } else {
        result[2] += -3;
      }
    } else {
if (data[11].qvalue < -549)  {
        result[2] += 5;
      } else {
        result[2] += -10;
      }
    }
  }
if (data[13].qvalue < -504)  {
if (data[9].qvalue < 598)  {
if (data[10].qvalue < -537)  {
        result[3] += -8;
      } else {
        result[3] += 10;
      }
    } else {
if (data[15].qvalue < -986)  {
        result[3] += 6;
      } else {
        result[3] += -9;
      }
    }
  } else {
if (data[6].qvalue < 223)  {
if (data[5].qvalue < 39)  {
        result[3] += 0;
      } else {
        result[3] += -8;
      }
    } else {
if (data[10].qvalue < -343)  {
        result[3] += -6;
      } else {
        result[3] += 9;
      }
    }
  }
if (data[17].qvalue < 170)  {
if (data[4].qvalue < 27)  {
if (data[6].qvalue < 281)  {
        result[0] += 9;
      } else {
        result[0] += 0;
      }
    } else {
if (data[16].qvalue < 5)  {
        result[0] += -9;
      } else {
        result[0] += 4;
      }
    }
  } else {
if (data[19].qvalue < 264)  {
if (data[18].qvalue < 12)  {
        result[0] += 0;
      } else {
        result[0] += -7;
      }
    } else {
if (data[13].qvalue < -445)  {
        result[0] += -10;
      } else {
        result[0] += 4;
      }
    }
  }
if (data[1].qvalue < 58)  {
if (data[21].qvalue < 10)  {
if (data[1].qvalue < -1)  {
        result[1] += -9;
      } else {
        result[1] += 6;
      }
    } else {
if (data[19].qvalue < 428)  {
        result[1] += -9;
      } else {
        result[1] += -1;
      }
    }
  } else {
if (data[12].qvalue < -7)  {
if (data[8].qvalue < 472)  {
        result[1] += -7;
      } else {
        result[1] += 4;
      }
    } else {
if (data[0].qvalue < 61)  {
        result[1] += 9;
      } else {
        result[1] += -5;
      }
    }
  }
if (data[5].qvalue < 138)  {
if (data[0].qvalue < 56)  {
if (data[21].qvalue < 10)  {
        result[2] += -9;
      } else {
        result[2] += 2;
      }
    } else {
if (data[17].qvalue < 561)  {
        result[2] += -8;
      } else {
        result[2] += 3;
      }
    }
  } else {
if (data[3].qvalue < -357)  {
if (data[1].qvalue < 627)  {
        result[2] += 8;
      } else {
        result[2] += -1;
      }
    } else {
if (data[20].qvalue < 17)  {
        result[2] += 7;
      } else {
        result[2] += -7;
      }
    }
  }
if (data[0].qvalue < 59)  {
if (data[7].qvalue < 49)  {
if (data[18].qvalue < 0)  {
        result[3] += -7;
      } else {
        result[3] += 9;
      }
    } else {
if (data[11].qvalue < -81)  {
        result[3] += -10;
      } else {
        result[3] += 9;
      }
    }
  } else {
if (data[10].qvalue < -438)  {
if (data[15].qvalue < -537)  {
        result[3] += 0;
      } else {
        result[3] += -9;
      }
    } else {
if (data[4].qvalue < 32)  {
        result[3] += 1;
      } else {
        result[3] += 9;
      }
    }
  }
if (data[17].qvalue < 170)  {
if (data[4].qvalue < 27)  {
if (data[6].qvalue < 281)  {
        result[0] += 8;
      } else {
        result[0] += 0;
      }
    } else {
if (data[12].qvalue < -11)  {
        result[0] += 9;
      } else {
        result[0] += -5;
      }
    }
  } else {
if (data[18].qvalue < 31)  {
if (data[0].qvalue < 61)  {
        result[0] += -1;
      } else {
        result[0] += 6;
      }
    } else {
      result[0] += -9;
    }
  }
if (data[2].qvalue < 182)  {
if (data[21].qvalue < 12)  {
if (data[13].qvalue < -121)  {
        result[1] += 6;
      } else {
        result[1] += -7;
      }
    } else {
if (data[11].qvalue < -308)  {
        result[1] += -3;
      } else {
        result[1] += -10;
      }
    }
  } else {
if (data[16].qvalue < 5)  {
if (data[8].qvalue < 188)  {
        result[1] += -9;
      } else {
        result[1] += 8;
      }
    } else {
if (data[8].qvalue < 477)  {
        result[1] += -6;
      } else {
        result[1] += 3;
      }
    }
  }
if (data[5].qvalue < 635)  {
if (data[20].qvalue < 35)  {
if (data[12].qvalue < -12)  {
        result[2] += 7;
      } else {
        result[2] += -2;
      }
    } else {
if (data[1].qvalue < -38)  {
        result[2] += 4;
      } else {
        result[2] += -9;
      }
    }
  } else {
if (data[3].qvalue < -303)  {
if (data[1].qvalue < 1019)  {
        result[2] += 10;
      } else {
        result[2] += 0;
      }
    } else {
      result[2] += -8;
    }
  }
if (data[15].qvalue < -638)  {
if (data[9].qvalue < 598)  {
if (data[19].qvalue < 1144)  {
        result[3] += 10;
      } else {
        result[3] += -6;
      }
    } else {
if (data[15].qvalue < -986)  {
        result[3] += 4;
      } else {
        result[3] += -9;
      }
    }
  } else {
if (data[6].qvalue < 223)  {
if (data[0].qvalue < 63)  {
        result[3] += -5;
      } else {
        result[3] += 8;
      }
    } else {
if (data[10].qvalue < -343)  {
        result[3] += -5;
      } else {
        result[3] += 8;
      }
    }
  }
if (data[4].qvalue < 0)  {
if (data[5].qvalue < 206)  {
if (data[8].qvalue < 427)  {
        result[0] += 6;
      } else {
        result[0] += 20;
      }
    } else {
if (data[2].qvalue < 222)  {
        result[0] += 7;
      } else {
        result[0] += -8;
      }
    }
  } else {
if (data[6].qvalue < 11)  {
if (data[20].qvalue < 47)  {
        result[0] += 6;
      } else {
        result[0] += -9;
      }
    } else {
if (data[12].qvalue < -9)  {
        result[0] += 0;
      } else {
        result[0] += -5;
      }
    }
  }
if (data[1].qvalue < 115)  {
if (data[12].qvalue < -6)  {
if (data[19].qvalue < 428)  {
        result[1] += -9;
      } else {
        result[1] += 0;
      }
    } else {
if (data[3].qvalue < -303)  {
        result[1] += 10;
      } else {
        result[1] += -3;
      }
    }
  } else {
if (data[5].qvalue < 683)  {
if (data[7].qvalue < 52)  {
        result[1] += -6;
      } else {
        result[1] += 5;
      }
    } else {
if (data[1].qvalue < 1215)  {
        result[1] += -9;
      } else {
        result[1] += 3;
      }
    }
  }
if (data[12].qvalue < -6)  {
if (data[20].qvalue < 17)  {
if (data[21].qvalue < 13)  {
        result[2] += 1;
      } else {
        result[2] += 13;
      }
    } else {
if (data[11].qvalue < -327)  {
        result[2] += 2;
      } else {
        result[2] += -8;
      }
    }
  } else {
if (data[14].qvalue < 61)  {
if (data[7].qvalue < 55)  {
        result[2] += -2;
      } else {
        result[2] += -9;
      }
    } else {
      result[2] += 14;
    }
  }
if (data[0].qvalue < 58)  {
if (data[2].qvalue < -21)  {
if (data[19].qvalue < 120)  {
        result[3] += -6;
      } else {
        result[3] += 12;
      }
    } else {
if (data[8].qvalue < 99)  {
        result[3] += -1;
      } else {
        result[3] += -9;
      }
    }
  } else {
if (data[10].qvalue < -438)  {
if (data[0].qvalue < 62)  {
        result[3] += -8;
      } else {
        result[3] += 3;
      }
    } else {
if (data[1].qvalue < 57)  {
        result[3] += 7;
      } else {
        result[3] += 0;
      }
    }
  }
if (data[17].qvalue < 170)  {
if (data[4].qvalue < 27)  {
if (data[6].qvalue < 281)  {
        result[0] += 8;
      } else {
        result[0] += 0;
      }
    } else {
if (data[14].qvalue < 53)  {
        result[0] += -8;
      } else {
        result[0] += 4;
      }
    }
  } else {
if (data[19].qvalue < 264)  {
if (data[19].qvalue < 37)  {
        result[0] += 4;
      } else {
        result[0] += -4;
      }
    } else {
if (data[13].qvalue < -445)  {
        result[0] += -9;
      } else {
        result[0] += 3;
      }
    }
  }
if (data[2].qvalue < 241)  {
if (data[16].qvalue < 3)  {
if (data[0].qvalue < 60)  {
        result[1] += 6;
      } else {
        result[1] += -7;
      }
    } else {
if (data[9].qvalue < 297)  {
        result[1] += -9;
      } else {
        result[1] += -2;
      }
    }
  } else {
if (data[3].qvalue < -660)  {
if (data[12].qvalue < -12)  {
        result[1] += -9;
      } else {
        result[1] += 5;
      }
    } else {
if (data[8].qvalue < 188)  {
        result[1] += -9;
      } else {
        result[1] += 4;
      }
    }
  }
if (data[5].qvalue < 222)  {
if (data[15].qvalue < -176)  {
if (data[4].qvalue < 16)  {
        result[2] += -8;
      } else {
        result[2] += -1;
      }
    } else {
if (data[13].qvalue < -164)  {
        result[2] += 9;
      } else {
        result[2] += -4;
      }
    }
  } else {
if (data[1].qvalue < 604)  {
if (data[0].qvalue < 62)  {
        result[2] += 7;
      } else {
        result[2] += -4;
      }
    } else {
if (data[3].qvalue < -549)  {
        result[2] += 4;
      } else {
        result[2] += -9;
      }
    }
  }
if (data[0].qvalue < 63)  {
if (data[1].qvalue < 57)  {
if (data[0].qvalue < 55)  {
        result[3] += -9;
      } else {
        result[3] += 4;
      }
    } else {
if (data[15].qvalue < -967)  {
        result[3] += 8;
      } else {
        result[3] += -6;
      }
    }
  } else {
if (data[12].qvalue < -20)  {
if (data[6].qvalue < 138)  {
        result[3] += -7;
      } else {
        result[3] += 4;
      }
    } else {
      result[3] += 9;
    }
  }
if (data[4].qvalue < -2)  {
if (data[5].qvalue < 165)  {
if (data[8].qvalue < 427)  {
        result[0] += 7;
      } else {
        result[0] += 20;
      }
    } else {
if (data[2].qvalue < 222)  {
        result[0] += 6;
      } else {
        result[0] += -7;
      }
    }
  } else {
if (data[6].qvalue < 187)  {
if (data[0].qvalue < 57)  {
        result[0] += -3;
      } else {
        result[0] += 2;
      }
    } else {
if (data[16].qvalue < 1)  {
        result[0] += 7;
      } else {
        result[0] += -8;
      }
    }
  }
if (data[7].qvalue < 52)  {
if (data[12].qvalue < -30)  {
if (data[13].qvalue < -451)  {
        result[1] += -8;
      } else {
        result[1] += 6;
      }
    } else {
if (data[1].qvalue < 1612)  {
        result[1] += -10;
      } else {
        result[1] += -2;
      }
    }
  } else {
if (data[4].qvalue < 21)  {
if (data[8].qvalue < 197)  {
        result[1] += -8;
      } else {
        result[1] += 4;
      }
    } else {
if (data[21].qvalue < 12)  {
        result[1] += 5;
      } else {
        result[1] += -5;
      }
    }
  }
if (data[12].qvalue < -4)  {
if (data[20].qvalue < 17)  {
if (data[16].qvalue < 2)  {
        result[2] += -3;
      } else {
        result[2] += 9;
      }
    } else {
if (data[11].qvalue < -327)  {
        result[2] += 1;
      } else {
        result[2] += -7;
      }
    }
  } else {
if (data[4].qvalue < 1)  {
if (data[0].qvalue < 54)  {
        result[2] += -7;
      } else {
        result[2] += 13;
      }
    } else {
      result[2] += -9;
    }
  }
if (data[0].qvalue < 63)  {
if (data[1].qvalue < 57)  {
if (data[0].qvalue < 55)  {
        result[3] += -9;
      } else {
        result[3] += 3;
      }
    } else {
if (data[3].qvalue < -175)  {
        result[3] += -6;
      } else {
        result[3] += 3;
      }
    }
  } else {
if (data[12].qvalue < -20)  {
      result[3] += -2;
    } else {
      result[3] += 9;
    }
  }
if (data[18].qvalue < 32)  {
if (data[16].qvalue < 1)  {
if (data[4].qvalue < 26)  {
        result[0] += 10;
      } else {
        result[0] += -4;
      }
    } else {
if (data[16].qvalue < 4)  {
        result[0] += -4;
      } else {
        result[0] += 1;
      }
    }
  } else {
if (data[21].qvalue < 6)  {
      result[0] += 0;
    } else {
      result[0] += -9;
    }
  }
if (data[8].qvalue < 429)  {
if (data[12].qvalue < -7)  {
if (data[16].qvalue < 2)  {
        result[1] += 2;
      } else {
        result[1] += -8;
      }
    } else {
if (data[0].qvalue < 60)  {
        result[1] += 5;
      } else {
        result[1] += -5;
      }
    }
  } else {
if (data[1].qvalue < 166)  {
if (data[9].qvalue < 512)  {
        result[1] += 6;
      } else {
        result[1] += -7;
      }
    } else {
if (data[5].qvalue < 785)  {
        result[1] += 7;
      } else {
        result[1] += -1;
      }
    }
  }
if (data[5].qvalue < 635)  {
if (data[20].qvalue < 35)  {
if (data[12].qvalue < -16)  {
        result[2] += 10;
      } else {
        result[2] += 0;
      }
    } else {
if (data[9].qvalue < 340)  {
        result[2] += -3;
      } else {
        result[2] += -10;
      }
    }
  } else {
if (data[12].qvalue < -9)  {
if (data[9].qvalue < 231)  {
        result[2] += -4;
      } else {
        result[2] += 8;
      }
    } else {
if (data[21].qvalue < 16)  {
        result[2] += -1;
      } else {
        result[2] += -8;
      }
    }
  }
if (data[15].qvalue < -726)  {
if (data[9].qvalue < 606)  {
if (data[10].qvalue < -468)  {
        result[3] += -1;
      } else {
        result[3] += 9;
      }
    } else {
if (data[15].qvalue < -986)  {
        result[3] += 3;
      } else {
        result[3] += -7;
      }
    }
  } else {
if (data[11].qvalue < -278)  {
if (data[5].qvalue < 40)  {
        result[3] += 0;
      } else {
        result[3] += -8;
      }
    } else {
if (data[0].qvalue < 55)  {
        result[3] += -7;
      } else {
        result[3] += 3;
      }
    }
  }
if (data[17].qvalue < 170)  {
if (data[16].qvalue < -1)  {
if (data[19].qvalue < 67)  {
        result[0] += 5;
      } else {
        result[0] += -13;
      }
    } else {
if (data[6].qvalue < 159)  {
        result[0] += 8;
      } else {
        result[0] += 0;
      }
    }
  } else {
if (data[18].qvalue < 31)  {
if (data[0].qvalue < 61)  {
        result[0] += -1;
      } else {
        result[0] += 5;
      }
    } else {
      result[0] += -9;
    }
  }
if (data[2].qvalue < 182)  {
if (data[16].qvalue < 4)  {
if (data[5].qvalue < 45)  {
        result[1] += 4;
      } else {
        result[1] += -3;
      }
    } else {
if (data[19].qvalue < 1137)  {
        result[1] += -8;
      } else {
        result[1] += 2;
      }
    }
  } else {
if (data[15].qvalue < -169)  {
if (data[12].qvalue < -15)  {
        result[1] += -1;
      } else {
        result[1] += 5;
      }
    } else {
if (data[7].qvalue < 57)  {
        result[1] += 0;
      } else {
        result[1] += -11;
      }
    }
  }
if (data[15].qvalue < -150)  {
if (data[5].qvalue < 369)  {
if (data[4].qvalue < 22)  {
        result[2] += -6;
      } else {
        result[2] += 0;
      }
    } else {
if (data[1].qvalue < 699)  {
        result[2] += 6;
      } else {
        result[2] += -1;
      }
    }
  } else {
if (data[10].qvalue < -165)  {
if (data[7].qvalue < 51)  {
        result[2] += 21;
      } else {
        result[2] += 7;
      }
    } else {
if (data[5].qvalue < 238)  {
        result[2] += -8;
      } else {
        result[2] += 3;
      }
    }
  }
if (data[4].qvalue < 48)  {
if (data[7].qvalue < 57)  {
if (data[5].qvalue < 142)  {
        result[3] += 5;
      } else {
        result[3] += -8;
      }
    } else {
if (data[0].qvalue < 62)  {
        result[3] += -6;
      } else {
        result[3] += 1;
      }
    }
  } else {
if (data[10].qvalue < -508)  {
      result[3] += -3;
    } else {
      result[3] += 9;
    }
  }
if (data[13].qvalue < -314)  {
if (data[14].qvalue < 39)  {
if (data[10].qvalue < -359)  {
        result[0] += -9;
      } else {
        result[0] += 0;
      }
    } else {
if (data[6].qvalue < 186)  {
        result[0] += 6;
      } else {
        result[0] += -9;
      }
    }
  } else {
if (data[15].qvalue < -321)  {
if (data[0].qvalue < 61)  {
        result[0] += 6;
      } else {
        result[0] += 25;
      }
    } else {
if (data[0].qvalue < 60)  {
        result[0] += -1;
      } else {
        result[0] += 4;
      }
    }
  }
if (data[20].qvalue < 53)  {
if (data[12].qvalue < -8)  {
if (data[21].qvalue < 31)  {
        result[1] += -3;
      } else {
        result[1] += -10;
      }
    } else {
if (data[10].qvalue < -345)  {
        result[1] += 7;
      } else {
        result[1] += -2;
      }
    }
  } else {
if (data[8].qvalue < 476)  {
if (data[12].qvalue < -12)  {
        result[1] += -2;
      } else {
        result[1] += -31;
      }
    } else {
if (data[16].qvalue < 40)  {
        result[1] += 10;
      } else {
        result[1] += -6;
      }
    }
  }
if (data[0].qvalue < 52)  {
if (data[21].qvalue < 10)  {
      result[2] += -8;
    } else {
if (data[4].qvalue < 0)  {
        result[2] += -3;
      } else {
        result[2] += 8;
      }
    }
  } else {
if (data[11].qvalue < -648)  {
if (data[18].qvalue < 35)  {
        result[2] += 9;
      } else {
        result[2] += -1;
      }
    } else {
if (data[20].qvalue < 22)  {
        result[2] += 1;
      } else {
        result[2] += -5;
      }
    }
  }
if (data[0].qvalue < 58)  {
if (data[2].qvalue < 22)  {
if (data[20].qvalue < 32)  {
        result[3] += -6;
      } else {
        result[3] += 21;
      }
    } else {
if (data[6].qvalue < 632)  {
        result[3] += -9;
      } else {
        result[3] += 2;
      }
    }
  } else {
if (data[10].qvalue < -438)  {
if (data[0].qvalue < 62)  {
        result[3] += -8;
      } else {
        result[3] += 3;
      }
    } else {
if (data[4].qvalue < 35)  {
        result[3] += 0;
      } else {
        result[3] += 8;
      }
    }
  }
if (data[18].qvalue < 13)  {
if (data[9].qvalue < 433)  {
if (data[1].qvalue < 263)  {
        result[0] += -1;
      } else {
        result[0] += 8;
      }
    } else {
if (data[14].qvalue < 26)  {
        result[0] += -1;
      } else {
        result[0] += 13;
      }
    }
  } else {
if (data[14].qvalue < 54)  {
if (data[6].qvalue < -6)  {
        result[0] += 4;
      } else {
        result[0] += -5;
      }
    } else {
if (data[8].qvalue < 306)  {
        result[0] += 8;
      } else {
        result[0] += -7;
      }
    }
  }
if (data[7].qvalue < 52)  {
if (data[12].qvalue < -30)  {
if (data[13].qvalue < -451)  {
        result[1] += -7;
      } else {
        result[1] += 5;
      }
    } else {
if (data[5].qvalue < 802)  {
        result[1] += -11;
      } else {
        result[1] += -2;
      }
    }
  } else {
if (data[1].qvalue < 28)  {
if (data[5].qvalue < -51)  {
        result[1] += 6;
      } else {
        result[1] += -5;
      }
    } else {
if (data[0].qvalue < 60)  {
        result[1] += 5;
      } else {
        result[1] += -1;
      }
    }
  }
if (data[5].qvalue < 58)  {
if (data[21].qvalue < 20)  {
if (data[9].qvalue < 528)  {
        result[2] += -2;
      } else {
        result[2] += 14;
      }
    } else {
if (data[10].qvalue < -636)  {
        result[2] += 2;
      } else {
        result[2] += -9;
      }
    }
  } else {
if (data[1].qvalue < 40)  {
if (data[13].qvalue < -346)  {
        result[2] += -1;
      } else {
        result[2] += 11;
      }
    } else {
if (data[12].qvalue < -10)  {
        result[2] += 2;
      } else {
        result[2] += -6;
      }
    }
  }
if (data[15].qvalue < -784)  {
if (data[9].qvalue < 606)  {
if (data[10].qvalue < -468)  {
        result[3] += -2;
      } else {
        result[3] += 9;
      }
    } else {
if (data[19].qvalue < 247)  {
        result[3] += -6;
      } else {
        result[3] += 3;
      }
    }
  } else {
if (data[6].qvalue < 223)  {
if (data[5].qvalue < 39)  {
        result[3] += 0;
      } else {
        result[3] += -6;
      }
    } else {
if (data[10].qvalue < -231)  {
        result[3] += -1;
      } else {
        result[3] += 8;
      }
    }
  }
if (data[10].qvalue < -93)  {
if (data[10].qvalue < -95)  {
if (data[21].qvalue < 5)  {
        result[0] += 12;
      } else {
        result[0] += 0;
      }
    } else {
      result[0] += -22;
    }
  } else {
if (data[6].qvalue < 285)  {
if (data[15].qvalue < -261)  {
        result[0] += 1;
      } else {
        result[0] += 10;
      }
    } else {
if (data[5].qvalue < 36)  {
        result[0] += -8;
      } else {
        result[0] += 6;
      }
    }
  }
if (data[8].qvalue < 429)  {
if (data[16].qvalue < 5)  {
if (data[19].qvalue < 363)  {
        result[1] += 3;
      } else {
        result[1] += -8;
      }
    } else {
if (data[21].qvalue < 21)  {
        result[1] += -2;
      } else {
        result[1] += -9;
      }
    }
  } else {
if (data[1].qvalue < 166)  {
if (data[9].qvalue < 512)  {
        result[1] += 5;
      } else {
        result[1] += -6;
      }
    } else {
if (data[3].qvalue < -675)  {
        result[1] += -3;
      } else {
        result[1] += 5;
      }
    }
  }
if (data[0].qvalue < 62)  {
if (data[16].qvalue < 2)  {
if (data[15].qvalue < -434)  {
        result[2] += 4;
      } else {
        result[2] += -9;
      }
    } else {
if (data[20].qvalue < 40)  {
        result[2] += 3;
      } else {
        result[2] += -3;
      }
    }
  } else {
if (data[3].qvalue < -619)  {
if (data[0].qvalue < 62)  {
        result[2] += 0;
      } else {
        result[2] += 7;
      }
    } else {
if (data[5].qvalue < 1370)  {
        result[2] += -9;
      } else {
        result[2] += 3;
      }
    }
  }
if (data[0].qvalue < 58)  {
if (data[20].qvalue < 51)  {
if (data[8].qvalue < 99)  {
        result[3] += 1;
      } else {
        result[3] += -9;
      }
    } else {
if (data[10].qvalue < -325)  {
        result[3] += -5;
      } else {
        result[3] += 13;
      }
    }
  } else {
if (data[19].qvalue < 283)  {
if (data[1].qvalue < 220)  {
        result[3] += 5;
      } else {
        result[3] += -3;
      }
    } else {
if (data[4].qvalue < 25)  {
        result[3] += -8;
      } else {
        result[3] += 3;
      }
    }
  }
if (data[18].qvalue < 32)  {
if (data[16].qvalue < 1)  {
if (data[4].qvalue < 26)  {
        result[0] += 9;
      } else {
        result[0] += -3;
      }
    } else {
if (data[16].qvalue < 4)  {
        result[0] += -4;
      } else {
        result[0] += 1;
      }
    }
  } else {
if (data[21].qvalue < 7)  {
      result[0] += 0;
    } else {
      result[0] += -9;
    }
  }
if (data[7].qvalue < 50)  {
if (data[1].qvalue < 502)  {
if (data[4].qvalue < -7)  {
        result[1] += -2;
      } else {
        result[1] += -11;
      }
    } else {
if (data[11].qvalue < -548)  {
        result[1] += -6;
      } else {
        result[1] += 6;
      }
    }
  } else {
if (data[4].qvalue < 21)  {
if (data[8].qvalue < 197)  {
        result[1] += -7;
      } else {
        result[1] += 3;
      }
    } else {
if (data[21].qvalue < 12)  {
        result[1] += 3;
      } else {
        result[1] += -4;
      }
    }
  }
if (data[9].qvalue < 194)  {
if (data[0].qvalue < 57)  {
if (data[12].qvalue < -7)  {
        result[2] += 5;
      } else {
        result[2] += -5;
      }
    } else {
      result[2] += -9;
    }
  } else {
if (data[15].qvalue < -151)  {
if (data[5].qvalue < 277)  {
        result[2] += -3;
      } else {
        result[2] += 3;
      }
    } else {
if (data[19].qvalue < 48)  {
        result[2] += -6;
      } else {
        result[2] += 10;
      }
    }
  }
if (data[4].qvalue < 48)  {
if (data[7].qvalue < 57)  {
if (data[5].qvalue < 142)  {
        result[3] += 4;
      } else {
        result[3] += -7;
      }
    } else {
if (data[0].qvalue < 60)  {
        result[3] += -8;
      } else {
        result[3] += -1;
      }
    }
  } else {
if (data[11].qvalue < -487)  {
      result[3] += 0;
    } else {
      result[3] += 8;
    }
  }
if (data[4].qvalue < -2)  {
if (data[5].qvalue < 165)  {
if (data[11].qvalue < -538)  {
        result[0] += -6;
      } else {
        result[0] += 9;
      }
    } else {
if (data[2].qvalue < 194)  {
        result[0] += 5;
      } else {
        result[0] += -6;
      }
    }
  } else {
if (data[0].qvalue < 61)  {
if (data[5].qvalue < 4)  {
        result[0] += 3;
      } else {
        result[0] += -2;
      }
    } else {
if (data[14].qvalue < 31)  {
        result[0] += -7;
      } else {
        result[0] += 6;
      }
    }
  }
if (data[17].qvalue < 769)  {
if (data[12].qvalue < -8)  {
if (data[8].qvalue < 477)  {
        result[1] += -7;
      } else {
        result[1] += 0;
      }
    } else {
if (data[10].qvalue < -343)  {
        result[1] += 7;
      } else {
        result[1] += -1;
      }
    }
  } else {
if (data[7].qvalue < 62)  {
if (data[14].qvalue < -33)  {
        result[1] += 0;
      } else {
        result[1] += 11;
      }
    } else {
if (data[12].qvalue < -13)  {
        result[1] += -11;
      } else {
        result[1] += 6;
      }
    }
  }
if (data[21].qvalue < 74)  {
if (data[20].qvalue < 33)  {
if (data[17].qvalue < 356)  {
        result[2] += -1;
      } else {
        result[2] += 4;
      }
    } else {
if (data[19].qvalue < 420)  {
        result[2] += -9;
      } else {
        result[2] += 0;
      }
    }
  } else {
if (data[20].qvalue < 135)  {
if (data[14].qvalue < 1)  {
        result[2] += 0;
      } else {
        result[2] += 9;
      }
    } else {
      result[2] += -6;
    }
  }
if (data[10].qvalue < -438)  {
if (data[0].qvalue < 62)  {
if (data[15].qvalue < -1037)  {
        result[3] += 5;
      } else {
        result[3] += -9;
      }
    } else {
if (data[21].qvalue < 18)  {
        result[3] += 8;
      } else {
        result[3] += -5;
      }
    }
  } else {
if (data[16].qvalue < 4)  {
if (data[10].qvalue < -242)  {
        result[3] += -10;
      } else {
        result[3] += 0;
      }
    } else {
if (data[0].qvalue < 55)  {
        result[3] += -6;
      } else {
        result[3] += 3;
      }
    }
  }
if (data[19].qvalue < 22)  {
if (data[2].qvalue < 173)  {
if (data[12].qvalue < -2)  {
        result[0] += 9;
      } else {
        result[0] += -1;
      }
    } else {
      result[0] += -3;
    }
  } else {
if (data[19].qvalue < 254)  {
if (data[10].qvalue < -93)  {
        result[0] += -3;
      } else {
        result[0] += 6;
      }
    } else {
if (data[13].qvalue < -445)  {
        result[0] += -9;
      } else {
        result[0] += 3;
      }
    }
  }
if (data[7].qvalue < 52)  {
if (data[12].qvalue < -30)  {
if (data[13].qvalue < -451)  {
        result[1] += -6;
      } else {
        result[1] += 5;
      }
    } else {
if (data[5].qvalue < 802)  {
        result[1] += -10;
      } else {
        result[1] += -1;
      }
    }
  } else {
if (data[4].qvalue < 21)  {
if (data[1].qvalue < 20)  {
        result[1] += -4;
      } else {
        result[1] += 3;
      }
    } else {
if (data[16].qvalue < 3)  {
        result[1] += 4;
      } else {
        result[1] += -4;
      }
    }
  }
if (data[16].qvalue < 2)  {
if (data[15].qvalue < -434)  {
      result[2] += 3;
    } else {
if (data[17].qvalue < 171)  {
        result[2] += -2;
      } else {
        result[2] += -9;
      }
    }
  } else {
if (data[20].qvalue < 22)  {
if (data[8].qvalue < 528)  {
        result[2] += 1;
      } else {
        result[2] += 10;
      }
    } else {
if (data[21].qvalue < 32)  {
        result[2] += -7;
      } else {
        result[2] += 1;
      }
    }
  }
if (data[0].qvalue < 63)  {
if (data[7].qvalue < 57)  {
if (data[13].qvalue < -172)  {
        result[3] += 5;
      } else {
        result[3] += -5;
      }
    } else {
if (data[3].qvalue < -250)  {
        result[3] += -6;
      } else {
        result[3] += 1;
      }
    }
  } else {
if (data[12].qvalue < -20)  {
      result[3] += -3;
    } else {
      result[3] += 9;
    }
  }
if (data[18].qvalue < 32)  {
if (data[0].qvalue < 60)  {
if (data[9].qvalue < 494)  {
        result[0] += -2;
      } else {
        result[0] += 6;
      }
    } else {
if (data[10].qvalue < -479)  {
        result[0] += -9;
      } else {
        result[0] += 4;
      }
    }
  } else {
if (data[21].qvalue < 8)  {
      result[0] += -1;
    } else {
      result[0] += -9;
    }
  }
if (data[17].qvalue < 442)  {
if (data[0].qvalue < 60)  {
if (data[7].qvalue < 51)  {
        result[1] += -10;
      } else {
        result[1] += 2;
      }
    } else {
if (data[12].qvalue < -2)  {
        result[1] += -8;
      } else {
        result[1] += 2;
      }
    }
  } else {
if (data[20].qvalue < 51)  {
if (data[12].qvalue < -14)  {
        result[1] += -9;
      } else {
        result[1] += 4;
      }
    } else {
if (data[13].qvalue < -238)  {
        result[1] += 7;
      } else {
        result[1] += -10;
      }
    }
  }
if (data[0].qvalue < 61)  {
if (data[4].qvalue < 16)  {
if (data[15].qvalue < -157)  {
        result[2] += -4;
      } else {
        result[2] += 5;
      }
    } else {
if (data[12].qvalue < -4)  {
        result[2] += 5;
      } else {
        result[2] += -8;
      }
    }
  } else {
if (data[3].qvalue < -598)  {
if (data[8].qvalue < 975)  {
        result[2] += 7;
      } else {
        result[2] += -3;
      }
    } else {
if (data[20].qvalue < 12)  {
        result[2] += 4;
      } else {
        result[2] += -7;
      }
    }
  }
if (data[6].qvalue < 217)  {
if (data[15].qvalue < -784)  {
if (data[11].qvalue < -488)  {
        result[3] += -1;
      } else {
        result[3] += 8;
      }
    } else {
if (data[2].qvalue < 205)  {
        result[3] += 0;
      } else {
        result[3] += -7;
      }
    }
  } else {
if (data[2].qvalue < 912)  {
if (data[17].qvalue < 459)  {
        result[3] += 7;
      } else {
        result[3] += -4;
      }
    } else {
if (data[10].qvalue < -255)  {
        result[3] += -10;
      } else {
        result[3] += 0;
      }
    }
  }
if (data[21].qvalue < 5)  {
if (data[7].qvalue < 59)  {
      result[0] += 12;
    } else {
      result[0] += 1;
    }
  } else {
if (data[20].qvalue < 15)  {
if (data[6].qvalue < 0)  {
        result[0] += 8;
      } else {
        result[0] += -6;
      }
    } else {
if (data[17].qvalue < 173)  {
        result[0] += 7;
      } else {
        result[0] += 0;
      }
    }
  }
if (data[1].qvalue < 54)  {
if (data[5].qvalue < 26)  {
if (data[16].qvalue < 13)  {
        result[1] += 1;
      } else {
        result[1] += -9;
      }
    } else {
if (data[12].qvalue < -2)  {
        result[1] += -9;
      } else {
        result[1] += 0;
      }
    }
  } else {
if (data[5].qvalue < 226)  {
if (data[7].qvalue < 51)  {
        result[1] += -9;
      } else {
        result[1] += 4;
      }
    } else {
if (data[17].qvalue < 560)  {
        result[1] += -5;
      } else {
        result[1] += 4;
      }
    }
  }
if (data[9].qvalue < 194)  {
if (data[15].qvalue < -82)  {
if (data[11].qvalue < -343)  {
        result[2] += 2;
      } else {
        result[2] += -9;
      }
    } else {
if (data[13].qvalue < -88)  {
        result[2] += 22;
      } else {
        result[2] += -6;
      }
    }
  } else {
if (data[15].qvalue < -151)  {
if (data[5].qvalue < 635)  {
        result[2] += -1;
      } else {
        result[2] += 4;
      }
    } else {
if (data[19].qvalue < 72)  {
        result[2] += -4;
      } else {
        result[2] += 9;
      }
    }
  }
if (data[0].qvalue < 55)  {
if (data[8].qvalue < 77)  {
      result[3] += 2;
    } else {
      result[3] += -8;
    }
  } else {
if (data[10].qvalue < -438)  {
if (data[0].qvalue < 62)  {
        result[3] += -8;
      } else {
        result[3] += 3;
      }
    } else {
if (data[1].qvalue < 47)  {
        result[3] += 4;
      } else {
        result[3] += -1;
      }
    }
  }
if (data[19].qvalue < 22)  {
if (data[6].qvalue < 113)  {
      result[0] += 8;
    } else {
if (data[16].qvalue < 8)  {
        result[0] += -3;
      } else {
        result[0] += 4;
      }
    }
  } else {
if (data[19].qvalue < 286)  {
if (data[0].qvalue < 60)  {
        result[0] += -3;
      } else {
        result[0] += 1;
      }
    } else {
if (data[2].qvalue < 686)  {
        result[0] += 1;
      } else {
        result[0] += 12;
      }
    }
  }
if (data[2].qvalue < 141)  {
if (data[21].qvalue < 10)  {
if (data[20].qvalue < 10)  {
        result[1] += -6;
      } else {
        result[1] += 8;
      }
    } else {
if (data[11].qvalue < -345)  {
        result[1] += 1;
      } else {
        result[1] += -8;
      }
    }
  } else {
if (data[16].qvalue < 13)  {
if (data[20].qvalue < 24)  {
        result[1] += 0;
      } else {
        result[1] += 7;
      }
    } else {
if (data[8].qvalue < 507)  {
        result[1] += -11;
      } else {
        result[1] += 2;
      }
    }
  }
if (data[0].qvalue < 52)  {
if (data[21].qvalue < 10)  {
      result[2] += -8;
    } else {
if (data[4].qvalue < 4)  {
        result[2] += -2;
      } else {
        result[2] += 7;
      }
    }
  } else {
if (data[19].qvalue < 72)  {
if (data[9].qvalue < 702)  {
        result[2] += -9;
      } else {
        result[2] += 7;
      }
    } else {
if (data[20].qvalue < 24)  {
        result[2] += 3;
      } else {
        result[2] += -2;
      }
    }
  }
if (data[0].qvalue < 61)  {
if (data[11].qvalue < -199)  {
if (data[21].qvalue < 43)  {
        result[3] += -8;
      } else {
        result[3] += 2;
      }
    } else {
if (data[6].qvalue < 25)  {
        result[3] += -8;
      } else {
        result[3] += 5;
      }
    }
  } else {
if (data[1].qvalue < 213)  {
if (data[19].qvalue < 162)  {
        result[3] += 8;
      } else {
        result[3] += 0;
      }
    } else {
if (data[4].qvalue < 32)  {
        result[3] += -9;
      } else {
        result[3] += 6;
      }
    }
  }
if (data[4].qvalue < -2)  {
if (data[5].qvalue < 207)  {
if (data[14].qvalue < 54)  {
        result[0] += 11;
      } else {
        result[0] += 0;
      }
    } else {
if (data[20].qvalue < 45)  {
        result[0] += 0;
      } else {
        result[0] += -6;
      }
    }
  } else {
if (data[0].qvalue < 61)  {
if (data[5].qvalue < 4)  {
        result[0] += 3;
      } else {
        result[0] += -2;
      }
    } else {
if (data[13].qvalue < -313)  {
        result[0] += -1;
      } else {
        result[0] += 8;
      }
    }
  }
if (data[20].qvalue < 53)  {
if (data[12].qvalue < -15)  {
if (data[16].qvalue < 3)  {
        result[1] += 6;
      } else {
        result[1] += -9;
      }
    } else {
if (data[10].qvalue < -468)  {
        result[1] += 6;
      } else {
        result[1] += -1;
      }
    }
  } else {
if (data[8].qvalue < 476)  {
if (data[4].qvalue < 9)  {
        result[1] += 5;
      } else {
        result[1] += -12;
      }
    } else {
if (data[16].qvalue < 38)  {
        result[1] += 9;
      } else {
        result[1] += -4;
      }
    }
  }
if (data[5].qvalue < 43)  {
if (data[15].qvalue < -70)  {
if (data[8].qvalue < 597)  {
        result[2] += -5;
      } else {
        result[2] += 5;
      }
    } else {
if (data[8].qvalue < 123)  {
        result[2] += 0;
      } else {
        result[2] += 13;
      }
    }
  } else {
if (data[1].qvalue < 40)  {
if (data[6].qvalue < 10)  {
        result[2] += 1;
      } else {
        result[2] += 10;
      }
    } else {
if (data[12].qvalue < -10)  {
        result[2] += 1;
      } else {
        result[2] += -5;
      }
    }
  }
if (data[0].qvalue < 55)  {
if (data[8].qvalue < 77)  {
      result[3] += 3;
    } else {
      result[3] += -8;
    }
  } else {
if (data[12].qvalue < -10)  {
if (data[16].qvalue < 13)  {
        result[3] += -6;
      } else {
        result[3] += 2;
      }
    } else {
if (data[11].qvalue < -278)  {
        result[3] += -3;
      } else {
        result[3] += 6;
      }
    }
  }
if (data[10].qvalue < -93)  {
if (data[10].qvalue < -95)  {
if (data[16].qvalue < 1)  {
        result[0] += 6;
      } else {
        result[0] += 0;
      }
    } else {
if (data[10].qvalue < -94)  {
        result[0] += -22;
      } else {
        result[0] += -3;
      }
    }
  } else {
if (data[4].qvalue < 32)  {
if (data[6].qvalue < 417)  {
        result[0] += 9;
      } else {
        result[0] += 0;
      }
    } else {
      result[0] += -3;
    }
  }
if (data[2].qvalue < 58)  {
if (data[21].qvalue < 9)  {
if (data[20].qvalue < 10)  {
        result[1] += -5;
      } else {
        result[1] += 7;
      }
    } else {
if (data[1].qvalue < -10)  {
        result[1] += 2;
      } else {
        result[1] += -9;
      }
    }
  } else {
if (data[12].qvalue < -8)  {
if (data[14].qvalue < 31)  {
        result[1] += 2;
      } else {
        result[1] += -4;
      }
    } else {
if (data[10].qvalue < -343)  {
        result[1] += 7;
      } else {
        result[1] += 0;
      }
    }
  }
if (data[16].qvalue < 2)  {
if (data[21].qvalue < 18)  {
      result[2] += -9;
    } else {
if (data[1].qvalue < 37)  {
        result[2] += 4;
      } else {
        result[2] += -7;
      }
    }
  } else {
if (data[20].qvalue < 33)  {
if (data[12].qvalue < -16)  {
        result[2] += 7;
      } else {
        result[2] += 0;
      }
    } else {
if (data[5].qvalue < 840)  {
        result[2] += -7;
      } else {
        result[2] += 3;
      }
    }
  }
if (data[0].qvalue < 61)  {
if (data[3].qvalue < -433)  {
if (data[15].qvalue < -934)  {
        result[3] += 3;
      } else {
        result[3] += -10;
      }
    } else {
if (data[20].qvalue < 24)  {
        result[3] += -5;
      } else {
        result[3] += 3;
      }
    }
  } else {
if (data[1].qvalue < 221)  {
if (data[19].qvalue < 162)  {
        result[3] += 8;
      } else {
        result[3] += 0;
      }
    } else {
if (data[4].qvalue < 32)  {
        result[3] += -8;
      } else {
        result[3] += 6;
      }
    }
  }
if (data[18].qvalue < 32)  {
if (data[7].qvalue < 62)  {
if (data[16].qvalue < 1)  {
        result[0] += 5;
      } else {
        result[0] += 0;
      }
    } else {
if (data[6].qvalue < 114)  {
        result[0] += 12;
      } else {
        result[0] += -2;
      }
    }
  } else {
if (data[21].qvalue < 8)  {
      result[0] += -1;
    } else {
      result[0] += -8;
    }
  }
if (data[7].qvalue < 52)  {
if (data[1].qvalue < 455)  {
if (data[7].qvalue < 51)  {
        result[1] += -9;
      } else {
        result[1] += -1;
      }
    } else {
if (data[2].qvalue < 235)  {
        result[1] += -7;
      } else {
        result[1] += 4;
      }
    }
  } else {
if (data[0].qvalue < 60)  {
if (data[19].qvalue < 166)  {
        result[1] += 5;
      } else {
        result[1] += 0;
      }
    } else {
if (data[9].qvalue < 378)  {
        result[1] += -8;
      } else {
        result[1] += 1;
      }
    }
  }
if (data[13].qvalue < -104)  {
if (data[8].qvalue < 200)  {
if (data[11].qvalue < -343)  {
        result[2] += 0;
      } else {
        result[2] += -9;
      }
    } else {
if (data[4].qvalue < 15)  {
        result[2] += -2;
      } else {
        result[2] += 2;
      }
    }
  } else {
if (data[3].qvalue < -147)  {
if (data[17].qvalue < 200)  {
        result[2] += 23;
      } else {
        result[2] += 5;
      }
    } else {
if (data[13].qvalue < -89)  {
        result[2] += 3;
      } else {
        result[2] += -6;
      }
    }
  }
if (data[15].qvalue < -726)  {
if (data[9].qvalue < 606)  {
if (data[10].qvalue < -466)  {
        result[3] += 0;
      } else {
        result[3] += 8;
      }
    } else {
      result[3] += -1;
    }
  } else {
if (data[21].qvalue < 45)  {
if (data[21].qvalue < 44)  {
        result[3] += 0;
      } else {
        result[3] += 12;
      }
    } else {
      result[3] += -10;
    }
  }
if (data[21].qvalue < 5)  {
if (data[7].qvalue < 57)  {
      result[0] += 11;
    } else {
if (data[1].qvalue < -28)  {
        result[0] += 6;
      } else {
        result[0] += -2;
      }
    }
  } else {
if (data[12].qvalue < -8)  {
if (data[21].qvalue < 32)  {
        result[0] += 4;
      } else {
        result[0] += -2;
      }
    } else {
if (data[13].qvalue < -164)  {
        result[0] += -5;
      } else {
        result[0] += 2;
      }
    }
  }
if (data[15].qvalue < -117)  {
if (data[16].qvalue < 13)  {
if (data[20].qvalue < 40)  {
        result[1] += 0;
      } else {
        result[1] += 7;
      }
    } else {
if (data[17].qvalue < 563)  {
        result[1] += -9;
      } else {
        result[1] += 2;
      }
    }
  } else {
if (data[12].qvalue < -2)  {
      result[1] += -8;
    } else {
      result[1] += -2;
    }
  }
if (data[21].qvalue < 74)  {
if (data[20].qvalue < 40)  {
if (data[17].qvalue < 342)  {
        result[2] += -2;
      } else {
        result[2] += 3;
      }
    } else {
if (data[5].qvalue < 842)  {
        result[2] += -9;
      } else {
        result[2] += 0;
      }
    }
  } else {
if (data[20].qvalue < 135)  {
if (data[14].qvalue < 1)  {
        result[2] += 0;
      } else {
        result[2] += 9;
      }
    } else {
      result[2] += -5;
    }
  }
if (data[9].qvalue < 161)  {
if (data[9].qvalue < 156)  {
if (data[6].qvalue < 164)  {
        result[3] += -4;
      } else {
        result[3] += 5;
      }
    } else {
if (data[10].qvalue < -190)  {
        result[3] += 20;
      } else {
        result[3] += 1;
      }
    }
  } else {
if (data[13].qvalue < -328)  {
if (data[13].qvalue < -335)  {
        result[3] += 0;
      } else {
        result[3] += 9;
      }
    } else {
if (data[7].qvalue < 38)  {
        result[3] += 10;
      } else {
        result[3] += -5;
      }
    }
  }
if (data[2].qvalue < 913)  {
if (data[6].qvalue < 187)  {
if (data[0].qvalue < 57)  {
        result[0] += -2;
      } else {
        result[0] += 2;
      }
    } else {
if (data[16].qvalue < 1)  {
        result[0] += 4;
      } else {
        result[0] += -6;
      }
    }
  } else {
if (data[5].qvalue < 335)  {
if (data[18].qvalue < 10)  {
        result[0] += 3;
      } else {
        result[0] += 18;
      }
    } else {
      result[0] += -5;
    }
  }
if (data[2].qvalue < 303)  {
if (data[5].qvalue < 43)  {
if (data[1].qvalue < 76)  {
        result[1] += -1;
      } else {
        result[1] += 7;
      }
    } else {
if (data[4].qvalue < 4)  {
        result[1] += 3;
      } else {
        result[1] += -5;
      }
    }
  } else {
if (data[16].qvalue < 13)  {
if (data[6].qvalue < 406)  {
        result[1] += 6;
      } else {
        result[1] += -4;
      }
    } else {
if (data[8].qvalue < 477)  {
        result[1] += -13;
      } else {
        result[1] += 1;
      }
    }
  }
if (data[13].qvalue < -104)  {
if (data[8].qvalue < 200)  {
if (data[11].qvalue < -343)  {
        result[2] += 0;
      } else {
        result[2] += -9;
      }
    } else {
if (data[2].qvalue < 171)  {
        result[2] += 2;
      } else {
        result[2] += -1;
      }
    }
  } else {
if (data[3].qvalue < -147)  {
if (data[3].qvalue < -185)  {
        result[2] += 5;
      } else {
        result[2] += 22;
      }
    } else {
if (data[19].qvalue < 39)  {
        result[2] += 3;
      } else {
        result[2] += -6;
      }
    }
  }
if (data[4].qvalue < 25)  {
if (data[19].qvalue < 283)  {
if (data[8].qvalue < 296)  {
        result[3] += 3;
      } else {
        result[3] += -4;
      }
    } else {
if (data[15].qvalue < -819)  {
        result[3] += 4;
      } else {
        result[3] += -10;
      }
    }
  } else {
if (data[3].qvalue < -274)  {
if (data[14].qvalue < 36)  {
        result[3] += 5;
      } else {
        result[3] += -6;
      }
    } else {
if (data[2].qvalue < 39)  {
        result[3] += 0;
      } else {
        result[3] += 11;
      }
    }
  }
if (data[17].qvalue < 170)  {
if (data[0].qvalue < 29)  {
if (data[17].qvalue < 116)  {
        result[0] += 6;
      } else {
        result[0] += -17;
      }
    } else {
if (data[9].qvalue < 86)  {
        result[0] += -2;
      } else {
        result[0] += 7;
      }
    }
  } else {
if (data[20].qvalue < 24)  {
if (data[20].qvalue < 24)  {
        result[0] += -1;
      } else {
        result[0] += -16;
      }
    } else {
if (data[18].qvalue < 14)  {
        result[0] += 3;
      } else {
        result[0] += -3;
      }
    }
  }
if (data[7].qvalue < 52)  {
if (data[1].qvalue < 3260)  {
if (data[15].qvalue < -582)  {
        result[1] += 0;
      } else {
        result[1] += -7;
      }
    } else {
      result[1] += 5;
    }
  } else {
if (data[5].qvalue < 112)  {
if (data[1].qvalue < 28)  {
        result[1] += -1;
      } else {
        result[1] += 4;
      }
    } else {
if (data[1].qvalue < 1205)  {
        result[1] += -3;
      } else {
        result[1] += 3;
      }
    }
  }
if (data[5].qvalue < 268)  {
if (data[1].qvalue < 107)  {
if (data[5].qvalue < 43)  {
        result[2] += -2;
      } else {
        result[2] += 4;
      }
    } else {
if (data[2].qvalue < 41)  {
        result[2] += 5;
      } else {
        result[2] += -9;
      }
    }
  } else {
if (data[3].qvalue < -379)  {
if (data[14].qvalue < 4)  {
        result[2] += -4;
      } else {
        result[2] += 6;
      }
    } else {
if (data[1].qvalue < 397)  {
        result[2] += 1;
      } else {
        result[2] += -10;
      }
    }
  }
if (data[19].qvalue < 40)  {
if (data[0].qvalue < 62)  {
if (data[4].qvalue < 33)  {
        result[3] += -9;
      } else {
        result[3] += -1;
      }
    } else {
      result[3] += 3;
    }
  } else {
if (data[9].qvalue < 89)  {
if (data[13].qvalue < -107)  {
        result[3] += 16;
      } else {
        result[3] += -1;
      }
    } else {
if (data[0].qvalue < 55)  {
        result[3] += -8;
      } else {
        result[3] += 0;
      }
    }
  }
if (data[18].qvalue < 32)  {
if (data[7].qvalue < 62)  {
if (data[11].qvalue < -136)  {
        result[0] += 0;
      } else {
        result[0] += 4;
      }
    } else {
if (data[3].qvalue < -499)  {
        result[0] += -5;
      } else {
        result[0] += 9;
      }
    }
  } else {
if (data[11].qvalue < -488)  {
      result[0] += -2;
    } else {
      result[0] += -8;
    }
  }
if (data[10].qvalue < -468)  {
if (data[3].qvalue < -510)  {
if (data[12].qvalue < -17)  {
        result[1] += -6;
      } else {
        result[1] += 2;
      }
    } else {
if (data[17].qvalue < 362)  {
        result[1] += -1;
      } else {
        result[1] += 10;
      }
    }
  } else {
if (data[7].qvalue < 61)  {
if (data[16].qvalue < 10)  {
        result[1] += 1;
      } else {
        result[1] += -5;
      }
    } else {
if (data[12].qvalue < -1)  {
        result[1] += -9;
      } else {
        result[1] += 4;
      }
    }
  }
if (data[0].qvalue < 61)  {
if (data[4].qvalue < 16)  {
if (data[15].qvalue < -157)  {
        result[2] += -4;
      } else {
        result[2] += 4;
      }
    } else {
if (data[12].qvalue < -5)  {
        result[2] += 5;
      } else {
        result[2] += -7;
      }
    }
  } else {
if (data[10].qvalue < -411)  {
if (data[13].qvalue < -319)  {
        result[2] += -2;
      } else {
        result[2] += 6;
      }
    } else {
if (data[20].qvalue < 15)  {
        result[2] += 0;
      } else {
        result[2] += -8;
      }
    }
  }
if (data[16].qvalue < 4)  {
if (data[6].qvalue < 194)  {
if (data[7].qvalue < 48)  {
        result[3] += 4;
      } else {
        result[3] += -7;
      }
    } else {
if (data[0].qvalue < 61)  {
        result[3] += -3;
      } else {
        result[3] += 7;
      }
    }
  } else {
if (data[10].qvalue < -438)  {
if (data[15].qvalue < -537)  {
        result[3] += 0;
      } else {
        result[3] += -8;
      }
    } else {
if (data[18].qvalue < 0)  {
        result[3] += -4;
      } else {
        result[3] += 3;
      }
    }
  }
if (data[21].qvalue < 5)  {
if (data[7].qvalue < 57)  {
      result[0] += 10;
    } else {
      result[0] += 3;
    }
  } else {
if (data[20].qvalue < 15)  {
if (data[13].qvalue < -100)  {
        result[0] += -6;
      } else {
        result[0] += 5;
      }
    } else {
if (data[12].qvalue < -4)  {
        result[0] += 0;
      } else {
        result[0] += 6;
      }
    }
  }
if (data[20].qvalue < 47)  {
if (data[21].qvalue < 30)  {
if (data[20].qvalue < 19)  {
        result[1] += -2;
      } else {
        result[1] += 2;
      }
    } else {
if (data[1].qvalue < 950)  {
        result[1] += -9;
      } else {
        result[1] += -1;
      }
    }
  } else {
if (data[7].qvalue < 58)  {
if (data[4].qvalue < 15)  {
        result[1] += 4;
      } else {
        result[1] += -10;
      }
    } else {
if (data[0].qvalue < 62)  {
        result[1] += 9;
      } else {
        result[1] += 0;
      }
    }
  }
if (data[16].qvalue < 2)  {
if (data[21].qvalue < 18)  {
      result[2] += -8;
    } else {
if (data[20].qvalue < 17)  {
        result[2] += 4;
      } else {
        result[2] += -6;
      }
    }
  } else {
if (data[20].qvalue < 33)  {
if (data[12].qvalue < -16)  {
        result[2] += 7;
      } else {
        result[2] += 0;
      }
    } else {
if (data[21].qvalue < 74)  {
        result[2] += -5;
      } else {
        result[2] += 5;
      }
    }
  }
if (data[12].qvalue < -10)  {
if (data[20].qvalue < 51)  {
if (data[6].qvalue < 219)  {
        result[3] += -7;
      } else {
        result[3] += 3;
      }
    } else {
if (data[20].qvalue < 52)  {
        result[3] += 11;
      } else {
        result[3] += 0;
      }
    }
  } else {
if (data[12].qvalue < -9)  {
if (data[19].qvalue < 117)  {
        result[3] += -3;
      } else {
        result[3] += 15;
      }
    } else {
if (data[10].qvalue < -217)  {
        result[3] += -3;
      } else {
        result[3] += 4;
      }
    }
  }
if (data[13].qvalue < -445)  {
if (data[19].qvalue < 213)  {
if (data[19].qvalue < 210)  {
        result[0] += -5;
      } else {
        result[0] += 8;
      }
    } else {
      result[0] += -8;
    }
  } else {
if (data[0].qvalue < 60)  {
if (data[3].qvalue < -665)  {
        result[0] += 15;
      } else {
        result[0] += -1;
      }
    } else {
if (data[1].qvalue < 604)  {
        result[0] += 1;
      } else {
        result[0] += 12;
      }
    }
  }
if (data[0].qvalue < 60)  {
if (data[1].qvalue < 54)  {
if (data[14].qvalue < 54)  {
        result[1] += 1;
      } else {
        result[1] += -6;
      }
    } else {
if (data[19].qvalue < 419)  {
        result[1] += 5;
      } else {
        result[1] += -4;
      }
    }
  } else {
if (data[13].qvalue < -319)  {
if (data[3].qvalue < -255)  {
        result[1] += 3;
      } else {
        result[1] += -9;
      }
    } else {
if (data[5].qvalue < 118)  {
        result[1] += -1;
      } else {
        result[1] += -11;
      }
    }
  }
if (data[21].qvalue < 35)  {
if (data[20].qvalue < 24)  {
if (data[17].qvalue < 477)  {
        result[2] += 0;
      } else {
        result[2] += 8;
      }
    } else {
if (data[15].qvalue < -146)  {
        result[2] += -8;
      } else {
        result[2] += 5;
      }
    }
  } else {
if (data[10].qvalue < -405)  {
if (data[20].qvalue < 52)  {
        result[2] += 9;
      } else {
        result[2] += 0;
      }
    } else {
if (data[15].qvalue < -360)  {
        result[2] += -8;
      } else {
        result[2] += 0;
      }
    }
  }
if (data[5].qvalue < 39)  {
if (data[5].qvalue < 16)  {
if (data[19].qvalue < 141)  {
        result[3] += 3;
      } else {
        result[3] += -6;
      }
    } else {
if (data[13].qvalue < -151)  {
        result[3] += 9;
      } else {
        result[3] += -3;
      }
    }
  } else {
if (data[18].qvalue < 30)  {
if (data[6].qvalue < -11)  {
        result[3] += 4;
      } else {
        result[3] += -5;
      }
    } else {
if (data[16].qvalue < 5)  {
        result[3] += -3;
      } else {
        result[3] += 9;
      }
    }
  }
if (data[19].qvalue < 22)  {
if (data[6].qvalue < 113)  {
      result[0] += 8;
    } else {
      result[0] += 0;
    }
  } else {
if (data[19].qvalue < 254)  {
if (data[12].qvalue < -9)  {
        result[0] += 0;
      } else {
        result[0] += -4;
      }
    } else {
if (data[9].qvalue < 209)  {
        result[0] += 6;
      } else {
        result[0] += 0;
      }
    }
  }
if (data[2].qvalue < 241)  {
if (data[16].qvalue < 3)  {
if (data[0].qvalue < 54)  {
        result[1] += 7;
      } else {
        result[1] += -4;
      }
    } else {
if (data[9].qvalue < 297)  {
        result[1] += -7;
      } else {
        result[1] += 0;
      }
    }
  } else {
if (data[16].qvalue < 13)  {
if (data[7].qvalue < 52)  {
        result[1] += -6;
      } else {
        result[1] += 4;
      }
    } else {
if (data[8].qvalue < 507)  {
        result[1] += -10;
      } else {
        result[1] += 1;
      }
    }
  }
if (data[13].qvalue < -104)  {
if (data[13].qvalue < -154)  {
if (data[9].qvalue < 199)  {
        result[2] += -5;
      } else {
        result[2] += 0;
      }
    } else {
if (data[18].qvalue < 27)  {
        result[2] += -8;
      } else {
        result[2] += 2;
      }
    }
  } else {
if (data[13].qvalue < -81)  {
if (data[7].qvalue < 51)  {
        result[2] += 17;
      } else {
        result[2] += 1;
      }
    } else {
      result[2] += -5;
    }
  }
if (data[19].qvalue < 40)  {
if (data[2].qvalue < 229)  {
if (data[4].qvalue < 28)  {
        result[3] += -8;
      } else {
        result[3] += -2;
      }
    } else {
      result[3] += 2;
    }
  } else {
if (data[19].qvalue < 49)  {
if (data[9].qvalue < 185)  {
        result[3] += 13;
      } else {
        result[3] += -1;
      }
    } else {
if (data[4].qvalue < 3)  {
        result[3] += -5;
      } else {
        result[3] += 0;
      }
    }
  }
if (data[21].qvalue < 5)  {
if (data[7].qvalue < 59)  {
      result[0] += 9;
    } else {
      result[0] += 1;
    }
  } else {
if (data[12].qvalue < -8)  {
if (data[21].qvalue < 32)  {
        result[0] += 3;
      } else {
        result[0] += -2;
      }
    } else {
if (data[13].qvalue < -164)  {
        result[0] += -4;
      } else {
        result[0] += 1;
      }
    }
  }
if (data[20].qvalue < 47)  {
if (data[21].qvalue < 24)  {
if (data[20].qvalue < 19)  {
        result[1] += -2;
      } else {
        result[1] += 3;
      }
    } else {
if (data[12].qvalue < -6)  {
        result[1] += -7;
      } else {
        result[1] += 5;
      }
    }
  } else {
if (data[7].qvalue < 58)  {
if (data[4].qvalue < 14)  {
        result[1] += 3;
      } else {
        result[1] += -8;
      }
    } else {
if (data[0].qvalue < 62)  {
        result[1] += 9;
      } else {
        result[1] += 0;
      }
    }
  }
if (data[4].qvalue < 22)  {
if (data[9].qvalue < 409)  {
if (data[9].qvalue < 392)  {
        result[2] += 0;
      } else {
        result[2] += 7;
      }
    } else {
if (data[9].qvalue < 631)  {
        result[2] += -7;
      } else {
        result[2] += 2;
      }
    }
  } else {
if (data[0].qvalue < 60)  {
if (data[12].qvalue < -5)  {
        result[2] += 8;
      } else {
        result[2] += -6;
      }
    } else {
if (data[17].qvalue < 480)  {
        result[2] += -6;
      } else {
        result[2] += 3;
      }
    }
  }
if (data[16].qvalue < 4)  {
if (data[20].qvalue < 20)  {
if (data[6].qvalue < 47)  {
        result[3] += -7;
      } else {
        result[3] += 2;
      }
    } else {
      result[3] += -8;
    }
  } else {
if (data[10].qvalue < -438)  {
if (data[15].qvalue < -537)  {
        result[3] += 0;
      } else {
        result[3] += -8;
      }
    } else {
if (data[5].qvalue < 365)  {
        result[3] += 3;
      } else {
        result[3] += -3;
      }
    }
  }
if (data[17].qvalue < 170)  {
if (data[0].qvalue < 29)  {
if (data[8].qvalue < 104)  {
        result[0] += 5;
      } else {
        result[0] += -13;
      }
    } else {
if (data[8].qvalue < 77)  {
        result[0] += -2;
      } else {
        result[0] += 7;
      }
    }
  } else {
if (data[20].qvalue < 24)  {
if (data[20].qvalue < 24)  {
        result[0] += -1;
      } else {
        result[0] += -12;
      }
    } else {
if (data[14].qvalue < 38)  {
        result[0] += -1;
      } else {
        result[0] += 4;
      }
    }
  }
if (data[7].qvalue < 52)  {
if (data[1].qvalue < 455)  {
if (data[7].qvalue < 51)  {
        result[1] += -8;
      } else {
        result[1] += -1;
      }
    } else {
if (data[11].qvalue < -548)  {
        result[1] += -5;
      } else {
        result[1] += 4;
      }
    }
  } else {
if (data[0].qvalue < 60)  {
if (data[1].qvalue < 129)  {
        result[1] += 0;
      } else {
        result[1] += 5;
      }
    } else {
if (data[9].qvalue < 378)  {
        result[1] += -7;
      } else {
        result[1] += 0;
      }
    }
  }
if (data[16].qvalue < 2)  {
if (data[21].qvalue < 18)  {
      result[2] += -8;
    } else {
      result[2] += -1;
    }
  } else {
if (data[2].qvalue < 40)  {
if (data[12].qvalue < -8)  {
        result[2] += -4;
      } else {
        result[2] += 9;
      }
    } else {
if (data[11].qvalue < -278)  {
        result[2] += 0;
      } else {
        result[2] += -8;
      }
    }
  }
if (data[15].qvalue < -1024)  {
    result[3] += 7;
  } else {
if (data[21].qvalue < 45)  {
if (data[21].qvalue < 44)  {
        result[3] += 0;
      } else {
        result[3] += 9;
      }
    } else {
if (data[13].qvalue < -504)  {
        result[3] += 2;
      } else {
        result[3] += -10;
      }
    }
  }
if (data[18].qvalue < 32)  {
if (data[21].qvalue < 71)  {
if (data[21].qvalue < 52)  {
        result[0] += 0;
      } else {
        result[0] += 6;
      }
    } else {
if (data[2].qvalue < 60)  {
        result[0] += 0;
      } else {
        result[0] += -7;
      }
    }
  } else {
    result[0] += -7;
  }
if (data[15].qvalue < -117)  {
if (data[12].qvalue < -7)  {
if (data[8].qvalue < 473)  {
        result[1] += -3;
      } else {
        result[1] += 1;
      }
    } else {
if (data[10].qvalue < -345)  {
        result[1] += 7;
      } else {
        result[1] += 0;
      }
    }
  } else {
if (data[16].qvalue < 2)  {
      result[1] += -2;
    } else {
      result[1] += -7;
    }
  }
if (data[1].qvalue < -37)  {
if (data[4].qvalue < 19)  {
      result[2] += -8;
    } else {
      result[2] += -1;
    }
  } else {
if (data[1].qvalue < 40)  {
if (data[5].qvalue < 61)  {
        result[2] += 0;
      } else {
        result[2] += 7;
      }
    } else {
if (data[5].qvalue < 255)  {
        result[2] += -4;
      } else {
        result[2] += 1;
      }
    }
  }
if (data[9].qvalue < 89)  {
if (data[13].qvalue < -173)  {
      result[3] += 16;
    } else {
if (data[1].qvalue < -7)  {
        result[3] += 3;
      } else {
        result[3] += -5;
      }
    }
  } else {
if (data[0].qvalue < 55)  {
      result[3] += -8;
    } else {
if (data[19].qvalue < 422)  {
        result[3] += 1;
      } else {
        result[3] += -5;
      }
    }
  }
if (data[6].qvalue < 116)  {
if (data[21].qvalue < 13)  {
if (data[18].qvalue < 13)  {
        result[0] += 9;
      } else {
        result[0] += 0;
      }
    } else {
if (data[7].qvalue < 61)  {
        result[0] += 0;
      } else {
        result[0] += 6;
      }
    }
  } else {
if (data[4].qvalue < 7)  {
if (data[4].qvalue < -2)  {
        result[0] += 0;
      } else {
        result[0] += -9;
      }
    } else {
if (data[4].qvalue < 11)  {
        result[0] += 7;
      } else {
        result[0] += -1;
      }
    }
  }
if (data[4].qvalue < 44)  {
if (data[18].qvalue < 31)  {
if (data[3].qvalue < -652)  {
        result[1] += -7;
      } else {
        result[1] += 0;
      }
    } else {
if (data[13].qvalue < -262)  {
        result[1] += 9;
      } else {
        result[1] += 0;
      }
    }
  } else {
if (data[20].qvalue < 21)  {
      result[1] += -7;
    } else {
      result[1] += -1;
    }
  }
if (data[16].qvalue < 2)  {
if (data[1].qvalue < 34)  {
      result[2] += -1;
    } else {
      result[2] += -8;
    }
  } else {
if (data[20].qvalue < 32)  {
if (data[9].qvalue < 256)  {
        result[2] += -2;
      } else {
        result[2] += 3;
      }
    } else {
if (data[5].qvalue < 278)  {
        result[2] += -8;
      } else {
        result[2] += 1;
      }
    }
  }
if (data[12].qvalue < -10)  {
if (data[20].qvalue < 41)  {
if (data[7].qvalue < 61)  {
        result[3] += -8;
      } else {
        result[3] += 0;
      }
    } else {
if (data[7].qvalue < 58)  {
        result[3] += 4;
      } else {
        result[3] += -5;
      }
    }
  } else {
if (data[12].qvalue < -9)  {
if (data[17].qvalue < 284)  {
        result[3] += 12;
      } else {
        result[3] += -1;
      }
    } else {
if (data[18].qvalue < 21)  {
        result[3] += -1;
      } else {
        result[3] += 4;
      }
    }
  }
if (data[2].qvalue < 913)  {
if (data[6].qvalue < 187)  {
if (data[6].qvalue < 184)  {
        result[0] += 0;
      } else {
        result[0] += 8;
      }
    } else {
if (data[1].qvalue < -42)  {
        result[0] += 5;
      } else {
        result[0] += -5;
      }
    }
  } else {
if (data[1].qvalue < 29)  {
      result[0] += 11;
    } else {
if (data[5].qvalue < 66)  {
        result[0] += 6;
      } else {
        result[0] += -2;
      }
    }
  }
if (data[10].qvalue < -476)  {
if (data[3].qvalue < -510)  {
if (data[12].qvalue < -12)  {
        result[1] += -5;
      } else {
        result[1] += 3;
      }
    } else {
if (data[4].qvalue < 21)  {
        result[1] += 10;
      } else {
        result[1] += 3;
      }
    }
  } else {
if (data[7].qvalue < 61)  {
if (data[16].qvalue < 10)  {
        result[1] += 1;
      } else {
        result[1] += -4;
      }
    } else {
if (data[19].qvalue < 178)  {
        result[1] += 0;
      } else {
        result[1] += -9;
      }
    }
  }
if (data[0].qvalue < 61)  {
if (data[19].qvalue < 1059)  {
if (data[19].qvalue < 114)  {
        result[2] += -1;
      } else {
        result[2] += 3;
      }
    } else {
if (data[13].qvalue < -477)  {
        result[2] += 6;
      } else {
        result[2] += -9;
      }
    }
  } else {
if (data[3].qvalue < -598)  {
if (data[12].qvalue < -13)  {
        result[2] += 6;
      } else {
        result[2] += 0;
      }
    } else {
if (data[15].qvalue < -256)  {
        result[2] += -6;
      } else {
        result[2] += 0;
      }
    }
  }
if (data[9].qvalue < 89)  {
if (data[13].qvalue < -173)  {
      result[3] += 14;
    } else {
      result[3] += 0;
    }
  } else {
if (data[0].qvalue < 55)  {
      result[3] += -7;
    } else {
if (data[19].qvalue < 422)  {
        result[3] += 1;
      } else {
        result[3] += -4;
      }
    }
  }
if (data[19].qvalue < 22)  {
if (data[6].qvalue < 113)  {
      result[0] += 7;
    } else {
      result[0] += 0;
    }
  } else {
if (data[19].qvalue < 355)  {
if (data[0].qvalue < 60)  {
        result[0] += -2;
      } else {
        result[0] += 1;
      }
    } else {
if (data[15].qvalue < -389)  {
        result[0] += -6;
      } else {
        result[0] += 4;
      }
    }
  }
if (data[20].qvalue < 47)  {
if (data[21].qvalue < 30)  {
if (data[4].qvalue < -2)  {
        result[1] += -7;
      } else {
        result[1] += 0;
      }
    } else {
if (data[1].qvalue < 950)  {
        result[1] += -8;
      } else {
        result[1] += 0;
      }
    }
  } else {
if (data[7].qvalue < 58)  {
if (data[4].qvalue < 15)  {
        result[1] += 4;
      } else {
        result[1] += -7;
      }
    } else {
if (data[0].qvalue < 62)  {
        result[1] += 8;
      } else {
        result[1] += 0;
      }
    }
  }
if (data[1].qvalue < 604)  {
if (data[5].qvalue < 255)  {
if (data[11].qvalue < -170)  {
        result[2] += -1;
      } else {
        result[2] += 6;
      }
    } else {
if (data[11].qvalue < -264)  {
        result[2] += 6;
      } else {
        result[2] += -7;
      }
    }
  } else {
if (data[12].qvalue < -23)  {
if (data[11].qvalue < -546)  {
        result[2] += 5;
      } else {
        result[2] += -5;
      }
    } else {
if (data[15].qvalue < -394)  {
        result[2] += 0;
      } else {
        result[2] += -9;
      }
    }
  }
if (data[19].qvalue < 40)  {
if (data[0].qvalue < 62)  {
      result[3] += -7;
    } else {
      result[3] += 1;
    }
  } else {
if (data[19].qvalue < 49)  {
if (data[9].qvalue < 185)  {
        result[3] += 11;
      } else {
        result[3] += -2;
      }
    } else {
if (data[4].qvalue < 23)  {
        result[3] += -1;
      } else {
        result[3] += 2;
      }
    }
  }
if (data[21].qvalue < 5)  {
if (data[7].qvalue < 57)  {
      result[0] += 8;
    } else {
      result[0] += 2;
    }
  } else {
if (data[20].qvalue < 15)  {
if (data[13].qvalue < -100)  {
        result[0] += -5;
      } else {
        result[0] += 5;
      }
    } else {
if (data[14].qvalue < 53)  {
        result[0] += 0;
      } else {
        result[0] += 5;
      }
    }
  }
if (data[2].qvalue < 241)  {
if (data[16].qvalue < 3)  {
if (data[0].qvalue < 54)  {
        result[1] += 6;
      } else {
        result[1] += -3;
      }
    } else {
if (data[14].qvalue < 46)  {
        result[1] += 0;
      } else {
        result[1] += -6;
      }
    }
  } else {
if (data[15].qvalue < -174)  {
if (data[7].qvalue < 56)  {
        result[1] += -2;
      } else {
        result[1] += 4;
      }
    } else {
if (data[2].qvalue < 531)  {
        result[1] += -8;
      } else {
        result[1] += 3;
      }
    }
  }
if (data[4].qvalue < 22)  {
if (data[15].qvalue < -150)  {
if (data[21].qvalue < 35)  {
        result[2] += -5;
      } else {
        result[2] += 1;
      }
    } else {
if (data[10].qvalue < -165)  {
        result[2] += 4;
      } else {
        result[2] += -4;
      }
    }
  } else {
if (data[0].qvalue < 57)  {
if (data[21].qvalue < 12)  {
        result[2] += -4;
      } else {
        result[2] += 9;
      }
    } else {
if (data[17].qvalue < 342)  {
        result[2] += -7;
      } else {
        result[2] += 1;
      }
    }
  }
if (data[16].qvalue < 1)  {
    result[3] += -6;
  } else {
if (data[12].qvalue < -10)  {
if (data[20].qvalue < 42)  {
        result[3] += -5;
      } else {
        result[3] += 1;
      }
    } else {
if (data[10].qvalue < -298)  {
        result[3] += -3;
      } else {
        result[3] += 4;
      }
    }
  }
if (data[17].qvalue < 170)  {
if (data[0].qvalue < 29)  {
if (data[17].qvalue < 116)  {
        result[0] += 5;
      } else {
        result[0] += -10;
      }
    } else {
if (data[1].qvalue < 203)  {
        result[0] += 6;
      } else {
        result[0] += -3;
      }
    }
  } else {
if (data[15].qvalue < -326)  {
if (data[18].qvalue < 21)  {
        result[0] += 3;
      } else {
        result[0] += -6;
      }
    } else {
if (data[8].qvalue < 278)  {
        result[0] += 0;
      } else {
        result[0] += -3;
      }
    }
  }
if (data[9].qvalue < 132)  {
if (data[18].qvalue < 26)  {
      result[1] += -7;
    } else {
      result[1] += -1;
    }
  } else {
if (data[12].qvalue < -7)  {
if (data[6].qvalue < 145)  {
        result[1] += 0;
      } else {
        result[1] += -4;
      }
    } else {
if (data[4].qvalue < -2)  {
        result[1] += -6;
      } else {
        result[1] += 4;
      }
    }
  }
if (data[2].qvalue < 40)  {
if (data[12].qvalue < -8)  {
if (data[5].qvalue < 109)  {
        result[2] += -7;
      } else {
        result[2] += 2;
      }
    } else {
if (data[9].qvalue < 194)  {
        result[2] += -2;
      } else {
        result[2] += 13;
      }
    }
  } else {
if (data[3].qvalue < -309)  {
if (data[12].qvalue < -7)  {
        result[2] += 1;
      } else {
        result[2] += -5;
      }
    } else {
if (data[20].qvalue < 10)  {
        result[2] += 5;
      } else {
        result[2] += -8;
      }
    }
  }
if (data[15].qvalue < -937)  {
    result[3] += 6;
  } else {
if (data[21].qvalue < 45)  {
if (data[7].qvalue < 50)  {
        result[3] += 6;
      } else {
        result[3] += 0;
      }
    } else {
if (data[13].qvalue < -491)  {
        result[3] += 0;
      } else {
        result[3] += -9;
      }
    }
  }
if (data[18].qvalue < 31)  {
if (data[7].qvalue < 62)  {
if (data[16].qvalue < 1)  {
        result[0] += 4;
      } else {
        result[0] += 0;
      }
    } else {
if (data[6].qvalue < 114)  {
        result[0] += 9;
      } else {
        result[0] += -2;
      }
    }
  } else {
if (data[17].qvalue < 165)  {
      result[0] += 0;
    } else {
      result[0] += -7;
    }
  }
if (data[20].qvalue < 47)  {
if (data[12].qvalue < -14)  {
if (data[3].qvalue < -348)  {
        result[1] += -9;
      } else {
        result[1] += 0;
      }
    } else {
if (data[10].qvalue < -468)  {
        result[1] += 4;
      } else {
        result[1] += -1;
      }
    }
  } else {
if (data[7].qvalue < 58)  {
if (data[4].qvalue < 15)  {
        result[1] += 4;
      } else {
        result[1] += -7;
      }
    } else {
if (data[21].qvalue < 44)  {
        result[1] += 8;
      } else {
        result[1] += 1;
      }
    }
  }
if (data[1].qvalue < 604)  {
if (data[15].qvalue < -315)  {
if (data[19].qvalue < 547)  {
        result[2] += -5;
      } else {
        result[2] += 2;
      }
    } else {
if (data[5].qvalue < 161)  {
        result[2] += 0;
      } else {
        result[2] += 5;
      }
    }
  } else {
if (data[12].qvalue < -23)  {
if (data[11].qvalue < -546)  {
        result[2] += 5;
      } else {
        result[2] += -4;
      }
    } else {
if (data[15].qvalue < -360)  {
        result[2] += -1;
      } else {
        result[2] += -9;
      }
    }
  }
if (data[5].qvalue < 39)  {
if (data[5].qvalue < 20)  {
if (data[19].qvalue < 133)  {
        result[3] += 3;
      } else {
        result[3] += -4;
      }
    } else {
if (data[6].qvalue < -8)  {
        result[3] += -4;
      } else {
        result[3] += 9;
      }
    }
  } else {
if (data[16].qvalue < 4)  {
if (data[0].qvalue < 62)  {
        result[3] += -8;
      } else {
        result[3] += 0;
      }
    } else {
if (data[14].qvalue < 43)  {
        result[3] += -4;
      } else {
        result[3] += 4;
      }
    }
  }
if (data[21].qvalue < 5)  {
if (data[6].qvalue < 107)  {
      result[0] += 8;
    } else {
      result[0] += 1;
    }
  } else {
if (data[12].qvalue < -8)  {
if (data[21].qvalue < 32)  {
        result[0] += 2;
      } else {
        result[0] += -1;
      }
    } else {
if (data[19].qvalue < 180)  {
        result[0] += -4;
      } else {
        result[0] += 1;
      }
    }
  }
if (data[0].qvalue < 60)  {
if (data[1].qvalue < 832)  {
if (data[21].qvalue < 21)  {
        result[1] += 1;
      } else {
        result[1] += -4;
      }
    } else {
if (data[11].qvalue < -545)  {
        result[1] += -1;
      } else {
        result[1] += 7;
      }
    }
  } else {
if (data[13].qvalue < -319)  {
if (data[3].qvalue < -266)  {
        result[1] += 2;
      } else {
        result[1] += -7;
      }
    } else {
if (data[5].qvalue < 112)  {
        result[1] += 0;
      } else {
        result[1] += -9;
      }
    }
  }
if (data[1].qvalue < -37)  {
if (data[18].qvalue < 11)  {
      result[2] += -8;
    } else {
      result[2] += -2;
    }
  } else {
if (data[1].qvalue < 39)  {
if (data[5].qvalue < 61)  {
        result[2] += 0;
      } else {
        result[2] += 6;
      }
    } else {
if (data[5].qvalue < 135)  {
        result[2] += -4;
      } else {
        result[2] += 0;
      }
    }
  }
if (data[0].qvalue < 50)  {
    result[3] += -6;
  } else {
if (data[9].qvalue < 89)  {
if (data[13].qvalue < -173)  {
        result[3] += 12;
      } else {
        result[3] += 1;
      }
    } else {
if (data[0].qvalue < 61)  {
        result[3] += -1;
      } else {
        result[3] += 1;
      }
    }
  }
if (data[17].qvalue < 170)  {
if (data[16].qvalue < 0)  {
      result[0] += -6;
    } else {
if (data[7].qvalue < 46)  {
        result[0] += -2;
      } else {
        result[0] += 5;
      }
    }
  } else {
if (data[6].qvalue < 187)  {
if (data[6].qvalue < 173)  {
        result[0] += 0;
      } else {
        result[0] += 7;
      }
    } else {
if (data[19].qvalue < 372)  {
        result[0] += -5;
      } else {
        result[0] += 2;
      }
    }
  }
if (data[3].qvalue < -266)  {
if (data[12].qvalue < -8)  {
if (data[14].qvalue < 31)  {
        result[1] += 2;
      } else {
        result[1] += -3;
      }
    } else {
if (data[20].qvalue < 18)  {
        result[1] += 0;
      } else {
        result[1] += 8;
      }
    }
  } else {
if (data[21].qvalue < 13)  {
if (data[20].qvalue < 12)  {
        result[1] += -5;
      } else {
        result[1] += 5;
      }
    } else {
if (data[1].qvalue < 1020)  {
        result[1] += -8;
      } else {
        result[1] += 2;
      }
    }
  }
if (data[1].qvalue < 604)  {
if (data[4].qvalue < 15)  {
if (data[15].qvalue < -157)  {
        result[2] += -4;
      } else {
        result[2] += 3;
      }
    } else {
if (data[0].qvalue < 60)  {
        result[2] += 4;
      } else {
        result[2] += -1;
      }
    }
  } else {
if (data[12].qvalue < -23)  {
if (data[11].qvalue < -546)  {
        result[2] += 4;
      } else {
        result[2] += -4;
      }
    } else {
if (data[15].qvalue < -329)  {
        result[2] += -1;
      } else {
        result[2] += -8;
      }
    }
  }
if (data[19].qvalue < 41)  {
if (data[0].qvalue < 61)  {
      result[3] += -7;
    } else {
      result[3] += 0;
    }
  } else {
if (data[9].qvalue < 108)  {
if (data[13].qvalue < -107)  {
        result[3] += 9;
      } else {
        result[3] += -2;
      }
    } else {
if (data[12].qvalue < -4)  {
        result[3] += 0;
      } else {
        result[3] += -7;
      }
    }
  }
if (data[11].qvalue < -134)  {
if (data[11].qvalue < -192)  {
if (data[11].qvalue < -261)  {
        result[0] += 0;
      } else {
        result[0] += 4;
      }
    } else {
if (data[12].qvalue < -9)  {
        result[0] += 7;
      } else {
        result[0] += -7;
      }
    }
  } else {
if (data[18].qvalue < 12)  {
if (data[6].qvalue < 416)  {
        result[0] += 8;
      } else {
        result[0] += -1;
      }
    } else {
if (data[3].qvalue < -115)  {
        result[0] += 4;
      } else {
        result[0] += -7;
      }
    }
  }
if (data[7].qvalue < 52)  {
if (data[1].qvalue < 280)  {
if (data[4].qvalue < -2)  {
        result[1] += -1;
      } else {
        result[1] += -7;
      }
    } else {
if (data[2].qvalue < 256)  {
        result[1] += -3;
      } else {
        result[1] += 3;
      }
    }
  } else {
if (data[4].qvalue < 44)  {
if (data[16].qvalue < 13)  {
        result[1] += 1;
      } else {
        result[1] += -2;
      }
    } else {
if (data[1].qvalue < 507)  {
        result[1] += -6;
      } else {
        result[1] += -1;
      }
    }
  }
if (data[10].qvalue < -165)  {
if (data[11].qvalue < -170)  {
if (data[7].qvalue < 59)  {
        result[2] += -2;
      } else {
        result[2] += 2;
      }
    } else {
      result[2] += 15;
    }
  } else {
if (data[0].qvalue < 23)  {
      result[2] += 1;
    } else {
      result[2] += -7;
    }
  }
if (data[15].qvalue < -1024)  {
    result[3] += 6;
  } else {
if (data[21].qvalue < 45)  {
if (data[21].qvalue < 44)  {
        result[3] += 0;
      } else {
        result[3] += 8;
      }
    } else {
if (data[13].qvalue < -491)  {
        result[3] += 0;
      } else {
        result[3] += -9;
      }
    }
  }
  

  // De notar que quando adiciona 32 de uma certa forma ou de outra o codigo gerado para o RVV fica diferente
  // Ele aqui usa RVV para somar 2 a 2, assim ao invés de fazer 4 instrucoes de forma sequencial, com "so 2" intrucoes 
  // RVV ele faz tudo  
  // Apply base_scores
  result[0] += 32;
  result[1] += 32;
  result[2] += 32;
  result[3] += 32;
  // for(int i=0;i<4;i++) {
  //   result[i] += 32;
  // }

 // printf("%f, %f, %f, %f \r\n", result[0], result[1], result[2], result[3]);
  int resultado_class;
  //resultado_class = argmax_float(result, 4);
  resultado_class = argmax(result, 4);
  return resultado_class;
}

int argmax(int16_t *x, int size) {
    int16_t max_index = 0;
    for (int i = 1; i < size; ++i) {
        if (x[i] > x[max_index])
            max_index = i;
    }
    return max_index;
}

/*
int argmax_float(float *x, int size) {
    int max_index = 0;
    for (int i = 1; i < size; ++i) {
        if (x[i] > x[max_index])
            max_index = i;
    }
    return max_index;
}
*/


