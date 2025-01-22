/* Generated automatically from machmode.def and config/i386/i386-modes.def
   by genmodes.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "real.h"

const char *const mode_name[NUM_MACHINE_MODES] =
{
  "VOID",
  "BLK",
  "CC",
  "CCGC",
  "CCGOC",
  "CCNO",
  "CCGZ",
  "CCA",
  "CCC",
  "CCO",
  "CCP",
  "CCS",
  "CCZ",
  "CCFP",
  "BI",
  "QI",
  "HI",
  "SI",
  "DI",
  "TI",
  "OI",
  "XI",
  "P2QI",
  "P2HI",
  "POI",
  "QQ",
  "HQ",
  "SQ",
  "DQ",
  "TQ",
  "UQQ",
  "UHQ",
  "USQ",
  "UDQ",
  "UTQ",
  "HA",
  "SA",
  "DA",
  "TA",
  "UHA",
  "USA",
  "UDA",
  "UTA",
  "HF",
  "BF",
  "SF",
  "DF",
  "XF",
  "TF",
  "SD",
  "DD",
  "TD",
  "CQI",
  "CP2QI",
  "CHI",
  "CP2HI",
  "CSI",
  "CDI",
  "CTI",
  "CPOI",
  "COI",
  "CXI",
  "BC",
  "HC",
  "SC",
  "DC",
  "XC",
  "TC",
  "V2QI",
  "V4QI",
  "V2HI",
  "V1SI",
  "V8QI",
  "V4HI",
  "V2SI",
  "V1DI",
  "V12QI",
  "V6HI",
  "V14QI",
  "V16QI",
  "V8HI",
  "V4SI",
  "V2DI",
  "V1TI",
  "V32QI",
  "V16HI",
  "V8SI",
  "V4DI",
  "V2TI",
  "V64QI",
  "V32HI",
  "V16SI",
  "V8DI",
  "V4TI",
  "V128QI",
  "V64HI",
  "V32SI",
  "V16DI",
  "V8TI",
  "V64SI",
  "V2HF",
  "V2BF",
  "V4BF",
  "V4HF",
  "V2SF",
  "V6HF",
  "V8BF",
  "V8HF",
  "V4SF",
  "V2DF",
  "V16BF",
  "V16HF",
  "V8SF",
  "V4DF",
  "V2TF",
  "V32BF",
  "V32HF",
  "V16SF",
  "V8DF",
  "V4TF",
  "V64BF",
  "V64HF",
  "V32SF",
  "V16DF",
  "V8TF",
  "V128BF",
  "V128HF",
  "V64SF",
  "V32DF",
  "V16TF",
};

const unsigned char mode_class[NUM_MACHINE_MODES] =
{
  MODE_RANDOM,             /* VOID */
  MODE_RANDOM,             /* BLK */
  MODE_CC,                 /* CC */
  MODE_CC,                 /* CCGC */
  MODE_CC,                 /* CCGOC */
  MODE_CC,                 /* CCNO */
  MODE_CC,                 /* CCGZ */
  MODE_CC,                 /* CCA */
  MODE_CC,                 /* CCC */
  MODE_CC,                 /* CCO */
  MODE_CC,                 /* CCP */
  MODE_CC,                 /* CCS */
  MODE_CC,                 /* CCZ */
  MODE_CC,                 /* CCFP */
  MODE_INT,                /* BI */
  MODE_INT,                /* QI */
  MODE_INT,                /* HI */
  MODE_INT,                /* SI */
  MODE_INT,                /* DI */
  MODE_INT,                /* TI */
  MODE_INT,                /* OI */
  MODE_INT,                /* XI */
  MODE_PARTIAL_INT,        /* P2QI */
  MODE_PARTIAL_INT,        /* P2HI */
  MODE_PARTIAL_INT,        /* POI */
  MODE_FRACT,              /* QQ */
  MODE_FRACT,              /* HQ */
  MODE_FRACT,              /* SQ */
  MODE_FRACT,              /* DQ */
  MODE_FRACT,              /* TQ */
  MODE_UFRACT,             /* UQQ */
  MODE_UFRACT,             /* UHQ */
  MODE_UFRACT,             /* USQ */
  MODE_UFRACT,             /* UDQ */
  MODE_UFRACT,             /* UTQ */
  MODE_ACCUM,              /* HA */
  MODE_ACCUM,              /* SA */
  MODE_ACCUM,              /* DA */
  MODE_ACCUM,              /* TA */
  MODE_UACCUM,             /* UHA */
  MODE_UACCUM,             /* USA */
  MODE_UACCUM,             /* UDA */
  MODE_UACCUM,             /* UTA */
  MODE_FLOAT,              /* HF */
  MODE_FLOAT,              /* BF */
  MODE_FLOAT,              /* SF */
  MODE_FLOAT,              /* DF */
  MODE_FLOAT,              /* XF */
  MODE_FLOAT,              /* TF */
  MODE_DECIMAL_FLOAT,      /* SD */
  MODE_DECIMAL_FLOAT,      /* DD */
  MODE_DECIMAL_FLOAT,      /* TD */
  MODE_COMPLEX_INT,        /* CQI */
  MODE_COMPLEX_INT,        /* CP2QI */
  MODE_COMPLEX_INT,        /* CHI */
  MODE_COMPLEX_INT,        /* CP2HI */
  MODE_COMPLEX_INT,        /* CSI */
  MODE_COMPLEX_INT,        /* CDI */
  MODE_COMPLEX_INT,        /* CTI */
  MODE_COMPLEX_INT,        /* CPOI */
  MODE_COMPLEX_INT,        /* COI */
  MODE_COMPLEX_INT,        /* CXI */
  MODE_COMPLEX_FLOAT,      /* BC */
  MODE_COMPLEX_FLOAT,      /* HC */
  MODE_COMPLEX_FLOAT,      /* SC */
  MODE_COMPLEX_FLOAT,      /* DC */
  MODE_COMPLEX_FLOAT,      /* XC */
  MODE_COMPLEX_FLOAT,      /* TC */
  MODE_VECTOR_INT,         /* V2QI */
  MODE_VECTOR_INT,         /* V4QI */
  MODE_VECTOR_INT,         /* V2HI */
  MODE_VECTOR_INT,         /* V1SI */
  MODE_VECTOR_INT,         /* V8QI */
  MODE_VECTOR_INT,         /* V4HI */
  MODE_VECTOR_INT,         /* V2SI */
  MODE_VECTOR_INT,         /* V1DI */
  MODE_VECTOR_INT,         /* V12QI */
  MODE_VECTOR_INT,         /* V6HI */
  MODE_VECTOR_INT,         /* V14QI */
  MODE_VECTOR_INT,         /* V16QI */
  MODE_VECTOR_INT,         /* V8HI */
  MODE_VECTOR_INT,         /* V4SI */
  MODE_VECTOR_INT,         /* V2DI */
  MODE_VECTOR_INT,         /* V1TI */
  MODE_VECTOR_INT,         /* V32QI */
  MODE_VECTOR_INT,         /* V16HI */
  MODE_VECTOR_INT,         /* V8SI */
  MODE_VECTOR_INT,         /* V4DI */
  MODE_VECTOR_INT,         /* V2TI */
  MODE_VECTOR_INT,         /* V64QI */
  MODE_VECTOR_INT,         /* V32HI */
  MODE_VECTOR_INT,         /* V16SI */
  MODE_VECTOR_INT,         /* V8DI */
  MODE_VECTOR_INT,         /* V4TI */
  MODE_VECTOR_INT,         /* V128QI */
  MODE_VECTOR_INT,         /* V64HI */
  MODE_VECTOR_INT,         /* V32SI */
  MODE_VECTOR_INT,         /* V16DI */
  MODE_VECTOR_INT,         /* V8TI */
  MODE_VECTOR_INT,         /* V64SI */
  MODE_VECTOR_FLOAT,       /* V2HF */
  MODE_VECTOR_FLOAT,       /* V2BF */
  MODE_VECTOR_FLOAT,       /* V4BF */
  MODE_VECTOR_FLOAT,       /* V4HF */
  MODE_VECTOR_FLOAT,       /* V2SF */
  MODE_VECTOR_FLOAT,       /* V6HF */
  MODE_VECTOR_FLOAT,       /* V8BF */
  MODE_VECTOR_FLOAT,       /* V8HF */
  MODE_VECTOR_FLOAT,       /* V4SF */
  MODE_VECTOR_FLOAT,       /* V2DF */
  MODE_VECTOR_FLOAT,       /* V16BF */
  MODE_VECTOR_FLOAT,       /* V16HF */
  MODE_VECTOR_FLOAT,       /* V8SF */
  MODE_VECTOR_FLOAT,       /* V4DF */
  MODE_VECTOR_FLOAT,       /* V2TF */
  MODE_VECTOR_FLOAT,       /* V32BF */
  MODE_VECTOR_FLOAT,       /* V32HF */
  MODE_VECTOR_FLOAT,       /* V16SF */
  MODE_VECTOR_FLOAT,       /* V8DF */
  MODE_VECTOR_FLOAT,       /* V4TF */
  MODE_VECTOR_FLOAT,       /* V64BF */
  MODE_VECTOR_FLOAT,       /* V64HF */
  MODE_VECTOR_FLOAT,       /* V32SF */
  MODE_VECTOR_FLOAT,       /* V16DF */
  MODE_VECTOR_FLOAT,       /* V8TF */
  MODE_VECTOR_FLOAT,       /* V128BF */
  MODE_VECTOR_FLOAT,       /* V128HF */
  MODE_VECTOR_FLOAT,       /* V64SF */
  MODE_VECTOR_FLOAT,       /* V32DF */
  MODE_VECTOR_FLOAT,       /* V16TF */
};

const poly_uint16 mode_precision[NUM_MACHINE_MODES] = 
{
  { 0 },                   /* VOID */
  { 0 },                   /* BLK */
  { 4 * BITS_PER_UNIT },   /* CC */
  { 4 * BITS_PER_UNIT },   /* CCGC */
  { 4 * BITS_PER_UNIT },   /* CCGOC */
  { 4 * BITS_PER_UNIT },   /* CCNO */
  { 4 * BITS_PER_UNIT },   /* CCGZ */
  { 4 * BITS_PER_UNIT },   /* CCA */
  { 4 * BITS_PER_UNIT },   /* CCC */
  { 4 * BITS_PER_UNIT },   /* CCO */
  { 4 * BITS_PER_UNIT },   /* CCP */
  { 4 * BITS_PER_UNIT },   /* CCS */
  { 4 * BITS_PER_UNIT },   /* CCZ */
  { 4 * BITS_PER_UNIT },   /* CCFP */
  { 1 },                   /* BI */
  { 1 * BITS_PER_UNIT },   /* QI */
  { 2 * BITS_PER_UNIT },   /* HI */
  { 4 * BITS_PER_UNIT },   /* SI */
  { 8 * BITS_PER_UNIT },   /* DI */
  { 16 * BITS_PER_UNIT },  /* TI */
  { 32 * BITS_PER_UNIT },  /* OI */
  { 64 * BITS_PER_UNIT },  /* XI */
  { 16 },                  /* P2QI */
  { 32 },                  /* P2HI */
  { 160 },                 /* POI */
  { 1 * BITS_PER_UNIT },   /* QQ */
  { 2 * BITS_PER_UNIT },   /* HQ */
  { 4 * BITS_PER_UNIT },   /* SQ */
  { 8 * BITS_PER_UNIT },   /* DQ */
  { 16 * BITS_PER_UNIT },  /* TQ */
  { 1 * BITS_PER_UNIT },   /* UQQ */
  { 2 * BITS_PER_UNIT },   /* UHQ */
  { 4 * BITS_PER_UNIT },   /* USQ */
  { 8 * BITS_PER_UNIT },   /* UDQ */
  { 16 * BITS_PER_UNIT },  /* UTQ */
  { 2 * BITS_PER_UNIT },   /* HA */
  { 4 * BITS_PER_UNIT },   /* SA */
  { 8 * BITS_PER_UNIT },   /* DA */
  { 16 * BITS_PER_UNIT },  /* TA */
  { 2 * BITS_PER_UNIT },   /* UHA */
  { 4 * BITS_PER_UNIT },   /* USA */
  { 8 * BITS_PER_UNIT },   /* UDA */
  { 16 * BITS_PER_UNIT },  /* UTA */
  { 2 * BITS_PER_UNIT },   /* HF */
  { 2 * BITS_PER_UNIT },   /* BF */
  { 4 * BITS_PER_UNIT },   /* SF */
  { 8 * BITS_PER_UNIT },   /* DF */
  { 80 },                  /* XF */
  { 16 * BITS_PER_UNIT },  /* TF */
  { 4 * BITS_PER_UNIT },   /* SD */
  { 8 * BITS_PER_UNIT },   /* DD */
  { 16 * BITS_PER_UNIT },  /* TD */
  { 2 * BITS_PER_UNIT },   /* CQI */
  { 32 },                  /* CP2QI */
  { 4 * BITS_PER_UNIT },   /* CHI */
  { 64 },                  /* CP2HI */
  { 8 * BITS_PER_UNIT },   /* CSI */
  { 16 * BITS_PER_UNIT },  /* CDI */
  { 32 * BITS_PER_UNIT },  /* CTI */
  { 320 },                 /* CPOI */
  { 64 * BITS_PER_UNIT },  /* COI */
  { 128 * BITS_PER_UNIT }, /* CXI */
  { 4 * BITS_PER_UNIT },   /* BC */
  { 4 * BITS_PER_UNIT },   /* HC */
  { 8 * BITS_PER_UNIT },   /* SC */
  { 16 * BITS_PER_UNIT },  /* DC */
  { 160 },                 /* XC */
  { 32 * BITS_PER_UNIT },  /* TC */
  { 2 * BITS_PER_UNIT },   /* V2QI */
  { 4 * BITS_PER_UNIT },   /* V4QI */
  { 4 * BITS_PER_UNIT },   /* V2HI */
  { 4 * BITS_PER_UNIT },   /* V1SI */
  { 8 * BITS_PER_UNIT },   /* V8QI */
  { 8 * BITS_PER_UNIT },   /* V4HI */
  { 8 * BITS_PER_UNIT },   /* V2SI */
  { 8 * BITS_PER_UNIT },   /* V1DI */
  { 12 * BITS_PER_UNIT },  /* V12QI */
  { 12 * BITS_PER_UNIT },  /* V6HI */
  { 14 * BITS_PER_UNIT },  /* V14QI */
  { 16 * BITS_PER_UNIT },  /* V16QI */
  { 16 * BITS_PER_UNIT },  /* V8HI */
  { 16 * BITS_PER_UNIT },  /* V4SI */
  { 16 * BITS_PER_UNIT },  /* V2DI */
  { 16 * BITS_PER_UNIT },  /* V1TI */
  { 32 * BITS_PER_UNIT },  /* V32QI */
  { 32 * BITS_PER_UNIT },  /* V16HI */
  { 32 * BITS_PER_UNIT },  /* V8SI */
  { 32 * BITS_PER_UNIT },  /* V4DI */
  { 32 * BITS_PER_UNIT },  /* V2TI */
  { 64 * BITS_PER_UNIT },  /* V64QI */
  { 64 * BITS_PER_UNIT },  /* V32HI */
  { 64 * BITS_PER_UNIT },  /* V16SI */
  { 64 * BITS_PER_UNIT },  /* V8DI */
  { 64 * BITS_PER_UNIT },  /* V4TI */
  { 128 * BITS_PER_UNIT }, /* V128QI */
  { 128 * BITS_PER_UNIT }, /* V64HI */
  { 128 * BITS_PER_UNIT }, /* V32SI */
  { 128 * BITS_PER_UNIT }, /* V16DI */
  { 128 * BITS_PER_UNIT }, /* V8TI */
  { 256 * BITS_PER_UNIT }, /* V64SI */
  { 4 * BITS_PER_UNIT },   /* V2HF */
  { 4 * BITS_PER_UNIT },   /* V2BF */
  { 8 * BITS_PER_UNIT },   /* V4BF */
  { 8 * BITS_PER_UNIT },   /* V4HF */
  { 8 * BITS_PER_UNIT },   /* V2SF */
  { 12 * BITS_PER_UNIT },  /* V6HF */
  { 16 * BITS_PER_UNIT },  /* V8BF */
  { 16 * BITS_PER_UNIT },  /* V8HF */
  { 16 * BITS_PER_UNIT },  /* V4SF */
  { 16 * BITS_PER_UNIT },  /* V2DF */
  { 32 * BITS_PER_UNIT },  /* V16BF */
  { 32 * BITS_PER_UNIT },  /* V16HF */
  { 32 * BITS_PER_UNIT },  /* V8SF */
  { 32 * BITS_PER_UNIT },  /* V4DF */
  { 32 * BITS_PER_UNIT },  /* V2TF */
  { 64 * BITS_PER_UNIT },  /* V32BF */
  { 64 * BITS_PER_UNIT },  /* V32HF */
  { 64 * BITS_PER_UNIT },  /* V16SF */
  { 64 * BITS_PER_UNIT },  /* V8DF */
  { 64 * BITS_PER_UNIT },  /* V4TF */
  { 128 * BITS_PER_UNIT }, /* V64BF */
  { 128 * BITS_PER_UNIT }, /* V64HF */
  { 128 * BITS_PER_UNIT }, /* V32SF */
  { 128 * BITS_PER_UNIT }, /* V16DF */
  { 128 * BITS_PER_UNIT }, /* V8TF */
  { 256 * BITS_PER_UNIT }, /* V128BF */
  { 256 * BITS_PER_UNIT }, /* V128HF */
  { 256 * BITS_PER_UNIT }, /* V64SF */
  { 256 * BITS_PER_UNIT }, /* V32DF */
  { 256 * BITS_PER_UNIT }, /* V16TF */
};

poly_uint16 mode_size[NUM_MACHINE_MODES] = 
{
  { 0 },                   /* VOID */
  { 0 },                   /* BLK */
  { 4 },                   /* CC */
  { 4 },                   /* CCGC */
  { 4 },                   /* CCGOC */
  { 4 },                   /* CCNO */
  { 4 },                   /* CCGZ */
  { 4 },                   /* CCA */
  { 4 },                   /* CCC */
  { 4 },                   /* CCO */
  { 4 },                   /* CCP */
  { 4 },                   /* CCS */
  { 4 },                   /* CCZ */
  { 4 },                   /* CCFP */
  { 1 },                   /* BI */
  { 1 },                   /* QI */
  { 2 },                   /* HI */
  { 4 },                   /* SI */
  { 8 },                   /* DI */
  { 16 },                  /* TI */
  { 32 },                  /* OI */
  { 64 },                  /* XI */
  { 2 },                   /* P2QI */
  { 4 },                   /* P2HI */
  { 32 },                  /* POI */
  { 1 },                   /* QQ */
  { 2 },                   /* HQ */
  { 4 },                   /* SQ */
  { 8 },                   /* DQ */
  { 16 },                  /* TQ */
  { 1 },                   /* UQQ */
  { 2 },                   /* UHQ */
  { 4 },                   /* USQ */
  { 8 },                   /* UDQ */
  { 16 },                  /* UTQ */
  { 2 },                   /* HA */
  { 4 },                   /* SA */
  { 8 },                   /* DA */
  { 16 },                  /* TA */
  { 2 },                   /* UHA */
  { 4 },                   /* USA */
  { 8 },                   /* UDA */
  { 16 },                  /* UTA */
  { 2 },                   /* HF */
  { 2 },                   /* BF */
  { 4 },                   /* SF */
  { 8 },                   /* DF */
  { 12 },                  /* XF */
  { 16 },                  /* TF */
  { 4 },                   /* SD */
  { 8 },                   /* DD */
  { 16 },                  /* TD */
  { 2 },                   /* CQI */
  { 4 },                   /* CP2QI */
  { 4 },                   /* CHI */
  { 8 },                   /* CP2HI */
  { 8 },                   /* CSI */
  { 16 },                  /* CDI */
  { 32 },                  /* CTI */
  { 64 },                  /* CPOI */
  { 64 },                  /* COI */
  { 128 },                 /* CXI */
  { 4 },                   /* BC */
  { 4 },                   /* HC */
  { 8 },                   /* SC */
  { 16 },                  /* DC */
  { 24 },                  /* XC */
  { 32 },                  /* TC */
  { 2 },                   /* V2QI */
  { 4 },                   /* V4QI */
  { 4 },                   /* V2HI */
  { 4 },                   /* V1SI */
  { 8 },                   /* V8QI */
  { 8 },                   /* V4HI */
  { 8 },                   /* V2SI */
  { 8 },                   /* V1DI */
  { 12 },                  /* V12QI */
  { 12 },                  /* V6HI */
  { 14 },                  /* V14QI */
  { 16 },                  /* V16QI */
  { 16 },                  /* V8HI */
  { 16 },                  /* V4SI */
  { 16 },                  /* V2DI */
  { 16 },                  /* V1TI */
  { 32 },                  /* V32QI */
  { 32 },                  /* V16HI */
  { 32 },                  /* V8SI */
  { 32 },                  /* V4DI */
  { 32 },                  /* V2TI */
  { 64 },                  /* V64QI */
  { 64 },                  /* V32HI */
  { 64 },                  /* V16SI */
  { 64 },                  /* V8DI */
  { 64 },                  /* V4TI */
  { 128 },                 /* V128QI */
  { 128 },                 /* V64HI */
  { 128 },                 /* V32SI */
  { 128 },                 /* V16DI */
  { 128 },                 /* V8TI */
  { 256 },                 /* V64SI */
  { 4 },                   /* V2HF */
  { 4 },                   /* V2BF */
  { 8 },                   /* V4BF */
  { 8 },                   /* V4HF */
  { 8 },                   /* V2SF */
  { 12 },                  /* V6HF */
  { 16 },                  /* V8BF */
  { 16 },                  /* V8HF */
  { 16 },                  /* V4SF */
  { 16 },                  /* V2DF */
  { 32 },                  /* V16BF */
  { 32 },                  /* V16HF */
  { 32 },                  /* V8SF */
  { 32 },                  /* V4DF */
  { 32 },                  /* V2TF */
  { 64 },                  /* V32BF */
  { 64 },                  /* V32HF */
  { 64 },                  /* V16SF */
  { 64 },                  /* V8DF */
  { 64 },                  /* V4TF */
  { 128 },                 /* V64BF */
  { 128 },                 /* V64HF */
  { 128 },                 /* V32SF */
  { 128 },                 /* V16DF */
  { 128 },                 /* V8TF */
  { 256 },                 /* V128BF */
  { 256 },                 /* V128HF */
  { 256 },                 /* V64SF */
  { 256 },                 /* V32DF */
  { 256 },                 /* V16TF */
};

const poly_uint16 mode_nunits[NUM_MACHINE_MODES] = 
{
  { 0 },                   /* VOID */
  { 0 },                   /* BLK */
  { 1 },                   /* CC */
  { 1 },                   /* CCGC */
  { 1 },                   /* CCGOC */
  { 1 },                   /* CCNO */
  { 1 },                   /* CCGZ */
  { 1 },                   /* CCA */
  { 1 },                   /* CCC */
  { 1 },                   /* CCO */
  { 1 },                   /* CCP */
  { 1 },                   /* CCS */
  { 1 },                   /* CCZ */
  { 1 },                   /* CCFP */
  { 1 },                   /* BI */
  { 1 },                   /* QI */
  { 1 },                   /* HI */
  { 1 },                   /* SI */
  { 1 },                   /* DI */
  { 1 },                   /* TI */
  { 1 },                   /* OI */
  { 1 },                   /* XI */
  { 1 },                   /* P2QI */
  { 1 },                   /* P2HI */
  { 1 },                   /* POI */
  { 1 },                   /* QQ */
  { 1 },                   /* HQ */
  { 1 },                   /* SQ */
  { 1 },                   /* DQ */
  { 1 },                   /* TQ */
  { 1 },                   /* UQQ */
  { 1 },                   /* UHQ */
  { 1 },                   /* USQ */
  { 1 },                   /* UDQ */
  { 1 },                   /* UTQ */
  { 1 },                   /* HA */
  { 1 },                   /* SA */
  { 1 },                   /* DA */
  { 1 },                   /* TA */
  { 1 },                   /* UHA */
  { 1 },                   /* USA */
  { 1 },                   /* UDA */
  { 1 },                   /* UTA */
  { 1 },                   /* HF */
  { 1 },                   /* BF */
  { 1 },                   /* SF */
  { 1 },                   /* DF */
  { 1 },                   /* XF */
  { 1 },                   /* TF */
  { 1 },                   /* SD */
  { 1 },                   /* DD */
  { 1 },                   /* TD */
  { 2 },                   /* CQI */
  { 2 },                   /* CP2QI */
  { 2 },                   /* CHI */
  { 2 },                   /* CP2HI */
  { 2 },                   /* CSI */
  { 2 },                   /* CDI */
  { 2 },                   /* CTI */
  { 2 },                   /* CPOI */
  { 2 },                   /* COI */
  { 2 },                   /* CXI */
  { 2 },                   /* BC */
  { 2 },                   /* HC */
  { 2 },                   /* SC */
  { 2 },                   /* DC */
  { 2 },                   /* XC */
  { 2 },                   /* TC */
  { 2 },                   /* V2QI */
  { 4 },                   /* V4QI */
  { 2 },                   /* V2HI */
  { 1 },                   /* V1SI */
  { 8 },                   /* V8QI */
  { 4 },                   /* V4HI */
  { 2 },                   /* V2SI */
  { 1 },                   /* V1DI */
  { 12 },                  /* V12QI */
  { 6 },                   /* V6HI */
  { 14 },                  /* V14QI */
  { 16 },                  /* V16QI */
  { 8 },                   /* V8HI */
  { 4 },                   /* V4SI */
  { 2 },                   /* V2DI */
  { 1 },                   /* V1TI */
  { 32 },                  /* V32QI */
  { 16 },                  /* V16HI */
  { 8 },                   /* V8SI */
  { 4 },                   /* V4DI */
  { 2 },                   /* V2TI */
  { 64 },                  /* V64QI */
  { 32 },                  /* V32HI */
  { 16 },                  /* V16SI */
  { 8 },                   /* V8DI */
  { 4 },                   /* V4TI */
  { 128 },                 /* V128QI */
  { 64 },                  /* V64HI */
  { 32 },                  /* V32SI */
  { 16 },                  /* V16DI */
  { 8 },                   /* V8TI */
  { 64 },                  /* V64SI */
  { 2 },                   /* V2HF */
  { 2 },                   /* V2BF */
  { 4 },                   /* V4BF */
  { 4 },                   /* V4HF */
  { 2 },                   /* V2SF */
  { 6 },                   /* V6HF */
  { 8 },                   /* V8BF */
  { 8 },                   /* V8HF */
  { 4 },                   /* V4SF */
  { 2 },                   /* V2DF */
  { 16 },                  /* V16BF */
  { 16 },                  /* V16HF */
  { 8 },                   /* V8SF */
  { 4 },                   /* V4DF */
  { 2 },                   /* V2TF */
  { 32 },                  /* V32BF */
  { 32 },                  /* V32HF */
  { 16 },                  /* V16SF */
  { 8 },                   /* V8DF */
  { 4 },                   /* V4TF */
  { 64 },                  /* V64BF */
  { 64 },                  /* V64HF */
  { 32 },                  /* V32SF */
  { 16 },                  /* V16DF */
  { 8 },                   /* V8TF */
  { 128 },                 /* V128BF */
  { 128 },                 /* V128HF */
  { 64 },                  /* V64SF */
  { 32 },                  /* V32DF */
  { 16 },                  /* V16TF */
};

const unsigned short mode_next[NUM_MACHINE_MODES] =
{
  E_VOIDmode,              /* VOID */
  E_VOIDmode,              /* BLK */
  E_VOIDmode,              /* CC */
  E_VOIDmode,              /* CCGC */
  E_VOIDmode,              /* CCGOC */
  E_VOIDmode,              /* CCNO */
  E_VOIDmode,              /* CCGZ */
  E_VOIDmode,              /* CCA */
  E_VOIDmode,              /* CCC */
  E_VOIDmode,              /* CCO */
  E_VOIDmode,              /* CCP */
  E_VOIDmode,              /* CCS */
  E_VOIDmode,              /* CCZ */
  E_VOIDmode,              /* CCFP */
  E_QImode,                /* BI */
  E_HImode,                /* QI */
  E_SImode,                /* HI */
  E_DImode,                /* SI */
  E_TImode,                /* DI */
  E_OImode,                /* TI */
  E_XImode,                /* OI */
  E_VOIDmode,              /* XI */
  E_HImode,                /* P2QI */
  E_SImode,                /* P2HI */
  E_OImode,                /* POI */
  E_HQmode,                /* QQ */
  E_SQmode,                /* HQ */
  E_DQmode,                /* SQ */
  E_TQmode,                /* DQ */
  E_VOIDmode,              /* TQ */
  E_UHQmode,               /* UQQ */
  E_USQmode,               /* UHQ */
  E_UDQmode,               /* USQ */
  E_UTQmode,               /* UDQ */
  E_VOIDmode,              /* UTQ */
  E_SAmode,                /* HA */
  E_DAmode,                /* SA */
  E_TAmode,                /* DA */
  E_VOIDmode,              /* TA */
  E_USAmode,               /* UHA */
  E_UDAmode,               /* USA */
  E_UTAmode,               /* UDA */
  E_VOIDmode,              /* UTA */
  E_BFmode,                /* HF */
  E_SFmode,                /* BF */
  E_DFmode,                /* SF */
  E_XFmode,                /* DF */
  E_TFmode,                /* XF */
  E_VOIDmode,              /* TF */
  E_DDmode,                /* SD */
  E_TDmode,                /* DD */
  E_VOIDmode,              /* TD */
  E_CP2QImode,             /* CQI */
  E_CHImode,               /* CP2QI */
  E_CP2HImode,             /* CHI */
  E_CSImode,               /* CP2HI */
  E_CDImode,               /* CSI */
  E_CTImode,               /* CDI */
  E_CPOImode,              /* CTI */
  E_COImode,               /* CPOI */
  E_CXImode,               /* COI */
  E_VOIDmode,              /* CXI */
  E_HCmode,                /* BC */
  E_SCmode,                /* HC */
  E_DCmode,                /* SC */
  E_XCmode,                /* DC */
  E_TCmode,                /* XC */
  E_VOIDmode,              /* TC */
  E_V4QImode,              /* V2QI */
  E_V2HImode,              /* V4QI */
  E_V1SImode,              /* V2HI */
  E_V8QImode,              /* V1SI */
  E_V4HImode,              /* V8QI */
  E_V2SImode,              /* V4HI */
  E_V1DImode,              /* V2SI */
  E_V12QImode,             /* V1DI */
  E_V6HImode,              /* V12QI */
  E_V14QImode,             /* V6HI */
  E_V16QImode,             /* V14QI */
  E_V8HImode,              /* V16QI */
  E_V4SImode,              /* V8HI */
  E_V2DImode,              /* V4SI */
  E_V1TImode,              /* V2DI */
  E_V32QImode,             /* V1TI */
  E_V16HImode,             /* V32QI */
  E_V8SImode,              /* V16HI */
  E_V4DImode,              /* V8SI */
  E_V2TImode,              /* V4DI */
  E_V64QImode,             /* V2TI */
  E_V32HImode,             /* V64QI */
  E_V16SImode,             /* V32HI */
  E_V8DImode,              /* V16SI */
  E_V4TImode,              /* V8DI */
  E_V128QImode,            /* V4TI */
  E_V64HImode,             /* V128QI */
  E_V32SImode,             /* V64HI */
  E_V16DImode,             /* V32SI */
  E_V8TImode,              /* V16DI */
  E_V64SImode,             /* V8TI */
  E_VOIDmode,              /* V64SI */
  E_V2BFmode,              /* V2HF */
  E_V4BFmode,              /* V2BF */
  E_V4HFmode,              /* V4BF */
  E_V2SFmode,              /* V4HF */
  E_V6HFmode,              /* V2SF */
  E_V8BFmode,              /* V6HF */
  E_V8HFmode,              /* V8BF */
  E_V4SFmode,              /* V8HF */
  E_V2DFmode,              /* V4SF */
  E_V16BFmode,             /* V2DF */
  E_V16HFmode,             /* V16BF */
  E_V8SFmode,              /* V16HF */
  E_V4DFmode,              /* V8SF */
  E_V2TFmode,              /* V4DF */
  E_V32BFmode,             /* V2TF */
  E_V32HFmode,             /* V32BF */
  E_V16SFmode,             /* V32HF */
  E_V8DFmode,              /* V16SF */
  E_V4TFmode,              /* V8DF */
  E_V64BFmode,             /* V4TF */
  E_V64HFmode,             /* V64BF */
  E_V32SFmode,             /* V64HF */
  E_V16DFmode,             /* V32SF */
  E_V8TFmode,              /* V16DF */
  E_V128BFmode,            /* V8TF */
  E_V128HFmode,            /* V128BF */
  E_V64SFmode,             /* V128HF */
  E_V32DFmode,             /* V64SF */
  E_V16TFmode,             /* V32DF */
  E_VOIDmode,              /* V16TF */
};

const unsigned short mode_wider[NUM_MACHINE_MODES] =
{
  E_VOIDmode,              /* VOID */
  E_VOIDmode,              /* BLK */
  E_VOIDmode,              /* CC */
  E_VOIDmode,              /* CCGC */
  E_VOIDmode,              /* CCGOC */
  E_VOIDmode,              /* CCNO */
  E_VOIDmode,              /* CCGZ */
  E_VOIDmode,              /* CCA */
  E_VOIDmode,              /* CCC */
  E_VOIDmode,              /* CCO */
  E_VOIDmode,              /* CCP */
  E_VOIDmode,              /* CCS */
  E_VOIDmode,              /* CCZ */
  E_VOIDmode,              /* CCFP */
  E_QImode,                /* BI */
  E_HImode,                /* QI */
  E_SImode,                /* HI */
  E_DImode,                /* SI */
  E_TImode,                /* DI */
  E_OImode,                /* TI */
  E_XImode,                /* OI */
  E_VOIDmode,              /* XI */
  E_HImode,                /* P2QI */
  E_SImode,                /* P2HI */
  E_OImode,                /* POI */
  E_HQmode,                /* QQ */
  E_SQmode,                /* HQ */
  E_DQmode,                /* SQ */
  E_TQmode,                /* DQ */
  E_VOIDmode,              /* TQ */
  E_UHQmode,               /* UQQ */
  E_USQmode,               /* UHQ */
  E_UDQmode,               /* USQ */
  E_UTQmode,               /* UDQ */
  E_VOIDmode,              /* UTQ */
  E_SAmode,                /* HA */
  E_DAmode,                /* SA */
  E_TAmode,                /* DA */
  E_VOIDmode,              /* TA */
  E_USAmode,               /* UHA */
  E_UDAmode,               /* USA */
  E_UTAmode,               /* UDA */
  E_VOIDmode,              /* UTA */
  E_SFmode,                /* HF */
  E_SFmode,                /* BF */
  E_DFmode,                /* SF */
  E_XFmode,                /* DF */
  E_TFmode,                /* XF */
  E_VOIDmode,              /* TF */
  E_DDmode,                /* SD */
  E_TDmode,                /* DD */
  E_VOIDmode,              /* TD */
  E_VOIDmode,              /* CQI */
  E_VOIDmode,              /* CP2QI */
  E_VOIDmode,              /* CHI */
  E_VOIDmode,              /* CP2HI */
  E_VOIDmode,              /* CSI */
  E_VOIDmode,              /* CDI */
  E_VOIDmode,              /* CTI */
  E_VOIDmode,              /* CPOI */
  E_VOIDmode,              /* COI */
  E_VOIDmode,              /* CXI */
  E_SCmode,                /* BC */
  E_SCmode,                /* HC */
  E_DCmode,                /* SC */
  E_XCmode,                /* DC */
  E_TCmode,                /* XC */
  E_VOIDmode,              /* TC */
  E_VOIDmode,              /* V2QI */
  E_VOIDmode,              /* V4QI */
  E_VOIDmode,              /* V2HI */
  E_VOIDmode,              /* V1SI */
  E_VOIDmode,              /* V8QI */
  E_VOIDmode,              /* V4HI */
  E_VOIDmode,              /* V2SI */
  E_VOIDmode,              /* V1DI */
  E_VOIDmode,              /* V12QI */
  E_VOIDmode,              /* V6HI */
  E_VOIDmode,              /* V14QI */
  E_VOIDmode,              /* V16QI */
  E_VOIDmode,              /* V8HI */
  E_VOIDmode,              /* V4SI */
  E_VOIDmode,              /* V2DI */
  E_VOIDmode,              /* V1TI */
  E_VOIDmode,              /* V32QI */
  E_VOIDmode,              /* V16HI */
  E_VOIDmode,              /* V8SI */
  E_VOIDmode,              /* V4DI */
  E_VOIDmode,              /* V2TI */
  E_VOIDmode,              /* V64QI */
  E_VOIDmode,              /* V32HI */
  E_VOIDmode,              /* V16SI */
  E_VOIDmode,              /* V8DI */
  E_VOIDmode,              /* V4TI */
  E_VOIDmode,              /* V128QI */
  E_VOIDmode,              /* V64HI */
  E_VOIDmode,              /* V32SI */
  E_VOIDmode,              /* V16DI */
  E_VOIDmode,              /* V8TI */
  E_VOIDmode,              /* V64SI */
  E_VOIDmode,              /* V2HF */
  E_VOIDmode,              /* V2BF */
  E_VOIDmode,              /* V4BF */
  E_VOIDmode,              /* V4HF */
  E_VOIDmode,              /* V2SF */
  E_VOIDmode,              /* V6HF */
  E_VOIDmode,              /* V8BF */
  E_VOIDmode,              /* V8HF */
  E_VOIDmode,              /* V4SF */
  E_VOIDmode,              /* V2DF */
  E_VOIDmode,              /* V16BF */
  E_VOIDmode,              /* V16HF */
  E_VOIDmode,              /* V8SF */
  E_VOIDmode,              /* V4DF */
  E_VOIDmode,              /* V2TF */
  E_VOIDmode,              /* V32BF */
  E_VOIDmode,              /* V32HF */
  E_VOIDmode,              /* V16SF */
  E_VOIDmode,              /* V8DF */
  E_VOIDmode,              /* V4TF */
  E_VOIDmode,              /* V64BF */
  E_VOIDmode,              /* V64HF */
  E_VOIDmode,              /* V32SF */
  E_VOIDmode,              /* V16DF */
  E_VOIDmode,              /* V8TF */
  E_VOIDmode,              /* V128BF */
  E_VOIDmode,              /* V128HF */
  E_VOIDmode,              /* V64SF */
  E_VOIDmode,              /* V32DF */
  E_VOIDmode,              /* V16TF */
};

const unsigned short mode_2xwider[NUM_MACHINE_MODES] =
{
  E_VOIDmode,              /* VOID */
  E_BLKmode,               /* BLK */
  E_VOIDmode,              /* CC */
  E_VOIDmode,              /* CCGC */
  E_VOIDmode,              /* CCGOC */
  E_VOIDmode,              /* CCNO */
  E_VOIDmode,              /* CCGZ */
  E_VOIDmode,              /* CCA */
  E_VOIDmode,              /* CCC */
  E_VOIDmode,              /* CCO */
  E_VOIDmode,              /* CCP */
  E_VOIDmode,              /* CCS */
  E_VOIDmode,              /* CCZ */
  E_VOIDmode,              /* CCFP */
  E_VOIDmode,              /* BI */
  E_HImode,                /* QI */
  E_SImode,                /* HI */
  E_DImode,                /* SI */
  E_TImode,                /* DI */
  E_OImode,                /* TI */
  E_XImode,                /* OI */
  E_VOIDmode,              /* XI */
  E_VOIDmode,              /* P2QI */
  E_VOIDmode,              /* P2HI */
  E_VOIDmode,              /* POI */
  E_HQmode,                /* QQ */
  E_SQmode,                /* HQ */
  E_DQmode,                /* SQ */
  E_TQmode,                /* DQ */
  E_VOIDmode,              /* TQ */
  E_UHQmode,               /* UQQ */
  E_USQmode,               /* UHQ */
  E_UDQmode,               /* USQ */
  E_UTQmode,               /* UDQ */
  E_VOIDmode,              /* UTQ */
  E_SAmode,                /* HA */
  E_DAmode,                /* SA */
  E_TAmode,                /* DA */
  E_VOIDmode,              /* TA */
  E_USAmode,               /* UHA */
  E_UDAmode,               /* USA */
  E_UTAmode,               /* UDA */
  E_VOIDmode,              /* UTA */
  E_SFmode,                /* HF */
  E_SFmode,                /* BF */
  E_DFmode,                /* SF */
  E_TFmode,                /* DF */
  E_VOIDmode,              /* XF */
  E_VOIDmode,              /* TF */
  E_DDmode,                /* SD */
  E_TDmode,                /* DD */
  E_VOIDmode,              /* TD */
  E_CHImode,               /* CQI */
  E_CP2HImode,             /* CP2QI */
  E_CSImode,               /* CHI */
  E_VOIDmode,              /* CP2HI */
  E_CDImode,               /* CSI */
  E_CTImode,               /* CDI */
  E_COImode,               /* CTI */
  E_VOIDmode,              /* CPOI */
  E_CXImode,               /* COI */
  E_VOIDmode,              /* CXI */
  E_SCmode,                /* BC */
  E_SCmode,                /* HC */
  E_DCmode,                /* SC */
  E_TCmode,                /* DC */
  E_VOIDmode,              /* XC */
  E_VOIDmode,              /* TC */
  E_V4QImode,              /* V2QI */
  E_V8QImode,              /* V4QI */
  E_V4HImode,              /* V2HI */
  E_V2SImode,              /* V1SI */
  E_V16QImode,             /* V8QI */
  E_V8HImode,              /* V4HI */
  E_V4SImode,              /* V2SI */
  E_V2DImode,              /* V1DI */
  E_VOIDmode,              /* V12QI */
  E_VOIDmode,              /* V6HI */
  E_VOIDmode,              /* V14QI */
  E_V32QImode,             /* V16QI */
  E_V16HImode,             /* V8HI */
  E_V8SImode,              /* V4SI */
  E_V4DImode,              /* V2DI */
  E_V2TImode,              /* V1TI */
  E_V64QImode,             /* V32QI */
  E_V32HImode,             /* V16HI */
  E_V16SImode,             /* V8SI */
  E_V8DImode,              /* V4DI */
  E_V4TImode,              /* V2TI */
  E_V128QImode,            /* V64QI */
  E_V64HImode,             /* V32HI */
  E_V32SImode,             /* V16SI */
  E_V16DImode,             /* V8DI */
  E_V8TImode,              /* V4TI */
  E_VOIDmode,              /* V128QI */
  E_VOIDmode,              /* V64HI */
  E_V64SImode,             /* V32SI */
  E_VOIDmode,              /* V16DI */
  E_VOIDmode,              /* V8TI */
  E_VOIDmode,              /* V64SI */
  E_V4HFmode,              /* V2HF */
  E_V4BFmode,              /* V2BF */
  E_V8BFmode,              /* V4BF */
  E_V8HFmode,              /* V4HF */
  E_V4SFmode,              /* V2SF */
  E_VOIDmode,              /* V6HF */
  E_V16BFmode,             /* V8BF */
  E_V16HFmode,             /* V8HF */
  E_V8SFmode,              /* V4SF */
  E_V4DFmode,              /* V2DF */
  E_V32BFmode,             /* V16BF */
  E_V32HFmode,             /* V16HF */
  E_V16SFmode,             /* V8SF */
  E_V8DFmode,              /* V4DF */
  E_V4TFmode,              /* V2TF */
  E_V64BFmode,             /* V32BF */
  E_V64HFmode,             /* V32HF */
  E_V32SFmode,             /* V16SF */
  E_V16DFmode,             /* V8DF */
  E_V8TFmode,              /* V4TF */
  E_V128BFmode,            /* V64BF */
  E_V128HFmode,            /* V64HF */
  E_V64SFmode,             /* V32SF */
  E_V32DFmode,             /* V16DF */
  E_V16TFmode,             /* V8TF */
  E_VOIDmode,              /* V128BF */
  E_VOIDmode,              /* V128HF */
  E_VOIDmode,              /* V64SF */
  E_VOIDmode,              /* V32DF */
  E_VOIDmode,              /* V16TF */
};

const unsigned short mode_complex[NUM_MACHINE_MODES] =
{
  E_VOIDmode,              /* VOID */
  E_VOIDmode,              /* BLK */
  E_VOIDmode,              /* CC */
  E_VOIDmode,              /* CCGC */
  E_VOIDmode,              /* CCGOC */
  E_VOIDmode,              /* CCNO */
  E_VOIDmode,              /* CCGZ */
  E_VOIDmode,              /* CCA */
  E_VOIDmode,              /* CCC */
  E_VOIDmode,              /* CCO */
  E_VOIDmode,              /* CCP */
  E_VOIDmode,              /* CCS */
  E_VOIDmode,              /* CCZ */
  E_VOIDmode,              /* CCFP */
  E_VOIDmode,              /* BI */
  E_CQImode,               /* QI */
  E_CHImode,               /* HI */
  E_CSImode,               /* SI */
  E_CDImode,               /* DI */
  E_CTImode,               /* TI */
  E_COImode,               /* OI */
  E_CXImode,               /* XI */
  E_CP2QImode,             /* P2QI */
  E_CP2HImode,             /* P2HI */
  E_CPOImode,              /* POI */
  E_VOIDmode,              /* QQ */
  E_VOIDmode,              /* HQ */
  E_VOIDmode,              /* SQ */
  E_VOIDmode,              /* DQ */
  E_VOIDmode,              /* TQ */
  E_VOIDmode,              /* UQQ */
  E_VOIDmode,              /* UHQ */
  E_VOIDmode,              /* USQ */
  E_VOIDmode,              /* UDQ */
  E_VOIDmode,              /* UTQ */
  E_VOIDmode,              /* HA */
  E_VOIDmode,              /* SA */
  E_VOIDmode,              /* DA */
  E_VOIDmode,              /* TA */
  E_VOIDmode,              /* UHA */
  E_VOIDmode,              /* USA */
  E_VOIDmode,              /* UDA */
  E_VOIDmode,              /* UTA */
  E_HCmode,                /* HF */
  E_BCmode,                /* BF */
  E_SCmode,                /* SF */
  E_DCmode,                /* DF */
  E_XCmode,                /* XF */
  E_TCmode,                /* TF */
  E_VOIDmode,              /* SD */
  E_VOIDmode,              /* DD */
  E_VOIDmode,              /* TD */
  E_VOIDmode,              /* CQI */
  E_VOIDmode,              /* CP2QI */
  E_VOIDmode,              /* CHI */
  E_VOIDmode,              /* CP2HI */
  E_VOIDmode,              /* CSI */
  E_VOIDmode,              /* CDI */
  E_VOIDmode,              /* CTI */
  E_VOIDmode,              /* CPOI */
  E_VOIDmode,              /* COI */
  E_VOIDmode,              /* CXI */
  E_VOIDmode,              /* BC */
  E_VOIDmode,              /* HC */
  E_VOIDmode,              /* SC */
  E_VOIDmode,              /* DC */
  E_VOIDmode,              /* XC */
  E_VOIDmode,              /* TC */
  E_VOIDmode,              /* V2QI */
  E_VOIDmode,              /* V4QI */
  E_VOIDmode,              /* V2HI */
  E_VOIDmode,              /* V1SI */
  E_VOIDmode,              /* V8QI */
  E_VOIDmode,              /* V4HI */
  E_VOIDmode,              /* V2SI */
  E_VOIDmode,              /* V1DI */
  E_VOIDmode,              /* V12QI */
  E_VOIDmode,              /* V6HI */
  E_VOIDmode,              /* V14QI */
  E_VOIDmode,              /* V16QI */
  E_VOIDmode,              /* V8HI */
  E_VOIDmode,              /* V4SI */
  E_VOIDmode,              /* V2DI */
  E_VOIDmode,              /* V1TI */
  E_VOIDmode,              /* V32QI */
  E_VOIDmode,              /* V16HI */
  E_VOIDmode,              /* V8SI */
  E_VOIDmode,              /* V4DI */
  E_VOIDmode,              /* V2TI */
  E_VOIDmode,              /* V64QI */
  E_VOIDmode,              /* V32HI */
  E_VOIDmode,              /* V16SI */
  E_VOIDmode,              /* V8DI */
  E_VOIDmode,              /* V4TI */
  E_VOIDmode,              /* V128QI */
  E_VOIDmode,              /* V64HI */
  E_VOIDmode,              /* V32SI */
  E_VOIDmode,              /* V16DI */
  E_VOIDmode,              /* V8TI */
  E_VOIDmode,              /* V64SI */
  E_VOIDmode,              /* V2HF */
  E_VOIDmode,              /* V2BF */
  E_VOIDmode,              /* V4BF */
  E_VOIDmode,              /* V4HF */
  E_VOIDmode,              /* V2SF */
  E_VOIDmode,              /* V6HF */
  E_VOIDmode,              /* V8BF */
  E_VOIDmode,              /* V8HF */
  E_VOIDmode,              /* V4SF */
  E_VOIDmode,              /* V2DF */
  E_VOIDmode,              /* V16BF */
  E_VOIDmode,              /* V16HF */
  E_VOIDmode,              /* V8SF */
  E_VOIDmode,              /* V4DF */
  E_VOIDmode,              /* V2TF */
  E_VOIDmode,              /* V32BF */
  E_VOIDmode,              /* V32HF */
  E_VOIDmode,              /* V16SF */
  E_VOIDmode,              /* V8DF */
  E_VOIDmode,              /* V4TF */
  E_VOIDmode,              /* V64BF */
  E_VOIDmode,              /* V64HF */
  E_VOIDmode,              /* V32SF */
  E_VOIDmode,              /* V16DF */
  E_VOIDmode,              /* V8TF */
  E_VOIDmode,              /* V128BF */
  E_VOIDmode,              /* V128HF */
  E_VOIDmode,              /* V64SF */
  E_VOIDmode,              /* V32DF */
  E_VOIDmode,              /* V16TF */
};

const unsigned HOST_WIDE_INT mode_mask_array[NUM_MACHINE_MODES] = 
{
#define MODE_MASK(m)                          \
  ((m) >= HOST_BITS_PER_WIDE_INT)             \
   ? HOST_WIDE_INT_M1U                        \
   : (HOST_WIDE_INT_1U << (m)) - 1

  MODE_MASK (0),           /* VOID */
  MODE_MASK (0),           /* BLK */
  MODE_MASK (4*BITS_PER_UNIT),   /* CC */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCGC */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCGOC */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCNO */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCGZ */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCA */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCC */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCO */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCP */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCS */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCZ */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCFP */
  MODE_MASK (1),           /* BI */
  MODE_MASK (1*BITS_PER_UNIT),   /* QI */
  MODE_MASK (2*BITS_PER_UNIT),   /* HI */
  MODE_MASK (4*BITS_PER_UNIT),   /* SI */
  MODE_MASK (8*BITS_PER_UNIT),   /* DI */
  MODE_MASK (16*BITS_PER_UNIT),    /* TI */
  MODE_MASK (32*BITS_PER_UNIT),    /* OI */
  MODE_MASK (64*BITS_PER_UNIT),    /* XI */
  MODE_MASK (16),          /* P2QI */
  MODE_MASK (32),          /* P2HI */
  MODE_MASK (160),         /* POI */
  MODE_MASK (1*BITS_PER_UNIT),   /* QQ */
  MODE_MASK (2*BITS_PER_UNIT),   /* HQ */
  MODE_MASK (4*BITS_PER_UNIT),   /* SQ */
  MODE_MASK (8*BITS_PER_UNIT),   /* DQ */
  MODE_MASK (16*BITS_PER_UNIT),    /* TQ */
  MODE_MASK (1*BITS_PER_UNIT),   /* UQQ */
  MODE_MASK (2*BITS_PER_UNIT),   /* UHQ */
  MODE_MASK (4*BITS_PER_UNIT),   /* USQ */
  MODE_MASK (8*BITS_PER_UNIT),   /* UDQ */
  MODE_MASK (16*BITS_PER_UNIT),    /* UTQ */
  MODE_MASK (2*BITS_PER_UNIT),   /* HA */
  MODE_MASK (4*BITS_PER_UNIT),   /* SA */
  MODE_MASK (8*BITS_PER_UNIT),   /* DA */
  MODE_MASK (16*BITS_PER_UNIT),    /* TA */
  MODE_MASK (2*BITS_PER_UNIT),   /* UHA */
  MODE_MASK (4*BITS_PER_UNIT),   /* USA */
  MODE_MASK (8*BITS_PER_UNIT),   /* UDA */
  MODE_MASK (16*BITS_PER_UNIT),    /* UTA */
  MODE_MASK (2*BITS_PER_UNIT),   /* HF */
  MODE_MASK (2*BITS_PER_UNIT),   /* BF */
  MODE_MASK (4*BITS_PER_UNIT),   /* SF */
  MODE_MASK (8*BITS_PER_UNIT),   /* DF */
  MODE_MASK (80),          /* XF */
  MODE_MASK (16*BITS_PER_UNIT),    /* TF */
  MODE_MASK (4*BITS_PER_UNIT),   /* SD */
  MODE_MASK (8*BITS_PER_UNIT),   /* DD */
  MODE_MASK (16*BITS_PER_UNIT),    /* TD */
  MODE_MASK (2*BITS_PER_UNIT),   /* CQI */
  MODE_MASK (32),          /* CP2QI */
  MODE_MASK (4*BITS_PER_UNIT),   /* CHI */
  MODE_MASK (64),          /* CP2HI */
  MODE_MASK (8*BITS_PER_UNIT),   /* CSI */
  MODE_MASK (16*BITS_PER_UNIT),    /* CDI */
  MODE_MASK (32*BITS_PER_UNIT),    /* CTI */
  MODE_MASK (320),         /* CPOI */
  MODE_MASK (64*BITS_PER_UNIT),    /* COI */
  MODE_MASK (128*BITS_PER_UNIT),     /* CXI */
  MODE_MASK (4*BITS_PER_UNIT),   /* BC */
  MODE_MASK (4*BITS_PER_UNIT),   /* HC */
  MODE_MASK (8*BITS_PER_UNIT),   /* SC */
  MODE_MASK (16*BITS_PER_UNIT),    /* DC */
  MODE_MASK (160),         /* XC */
  MODE_MASK (32*BITS_PER_UNIT),    /* TC */
  MODE_MASK (2*BITS_PER_UNIT),   /* V2QI */
  MODE_MASK (4*BITS_PER_UNIT),   /* V4QI */
  MODE_MASK (4*BITS_PER_UNIT),   /* V2HI */
  MODE_MASK (4*BITS_PER_UNIT),   /* V1SI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V8QI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V4HI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V2SI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V1DI */
  MODE_MASK (12*BITS_PER_UNIT),    /* V12QI */
  MODE_MASK (12*BITS_PER_UNIT),    /* V6HI */
  MODE_MASK (14*BITS_PER_UNIT),    /* V14QI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V16QI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V8HI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V4SI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V2DI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V1TI */
  MODE_MASK (32*BITS_PER_UNIT),    /* V32QI */
  MODE_MASK (32*BITS_PER_UNIT),    /* V16HI */
  MODE_MASK (32*BITS_PER_UNIT),    /* V8SI */
  MODE_MASK (32*BITS_PER_UNIT),    /* V4DI */
  MODE_MASK (32*BITS_PER_UNIT),    /* V2TI */
  MODE_MASK (64*BITS_PER_UNIT),    /* V64QI */
  MODE_MASK (64*BITS_PER_UNIT),    /* V32HI */
  MODE_MASK (64*BITS_PER_UNIT),    /* V16SI */
  MODE_MASK (64*BITS_PER_UNIT),    /* V8DI */
  MODE_MASK (64*BITS_PER_UNIT),    /* V4TI */
  MODE_MASK (128*BITS_PER_UNIT),     /* V128QI */
  MODE_MASK (128*BITS_PER_UNIT),     /* V64HI */
  MODE_MASK (128*BITS_PER_UNIT),     /* V32SI */
  MODE_MASK (128*BITS_PER_UNIT),     /* V16DI */
  MODE_MASK (128*BITS_PER_UNIT),     /* V8TI */
  MODE_MASK (256*BITS_PER_UNIT),     /* V64SI */
  MODE_MASK (4*BITS_PER_UNIT),   /* V2HF */
  MODE_MASK (4*BITS_PER_UNIT),   /* V2BF */
  MODE_MASK (8*BITS_PER_UNIT),   /* V4BF */
  MODE_MASK (8*BITS_PER_UNIT),   /* V4HF */
  MODE_MASK (8*BITS_PER_UNIT),   /* V2SF */
  MODE_MASK (12*BITS_PER_UNIT),    /* V6HF */
  MODE_MASK (16*BITS_PER_UNIT),    /* V8BF */
  MODE_MASK (16*BITS_PER_UNIT),    /* V8HF */
  MODE_MASK (16*BITS_PER_UNIT),    /* V4SF */
  MODE_MASK (16*BITS_PER_UNIT),    /* V2DF */
  MODE_MASK (32*BITS_PER_UNIT),    /* V16BF */
  MODE_MASK (32*BITS_PER_UNIT),    /* V16HF */
  MODE_MASK (32*BITS_PER_UNIT),    /* V8SF */
  MODE_MASK (32*BITS_PER_UNIT),    /* V4DF */
  MODE_MASK (32*BITS_PER_UNIT),    /* V2TF */
  MODE_MASK (64*BITS_PER_UNIT),    /* V32BF */
  MODE_MASK (64*BITS_PER_UNIT),    /* V32HF */
  MODE_MASK (64*BITS_PER_UNIT),    /* V16SF */
  MODE_MASK (64*BITS_PER_UNIT),    /* V8DF */
  MODE_MASK (64*BITS_PER_UNIT),    /* V4TF */
  MODE_MASK (128*BITS_PER_UNIT),     /* V64BF */
  MODE_MASK (128*BITS_PER_UNIT),     /* V64HF */
  MODE_MASK (128*BITS_PER_UNIT),     /* V32SF */
  MODE_MASK (128*BITS_PER_UNIT),     /* V16DF */
  MODE_MASK (128*BITS_PER_UNIT),     /* V8TF */
  MODE_MASK (256*BITS_PER_UNIT),     /* V128BF */
  MODE_MASK (256*BITS_PER_UNIT),     /* V128HF */
  MODE_MASK (256*BITS_PER_UNIT),     /* V64SF */
  MODE_MASK (256*BITS_PER_UNIT),     /* V32DF */
  MODE_MASK (256*BITS_PER_UNIT),     /* V16TF */
#undef MODE_MASK
};

const unsigned short mode_inner[NUM_MACHINE_MODES] =
{
  E_VOIDmode,              /* VOID */
  E_BLKmode,               /* BLK */
  E_CCmode,                /* CC */
  E_CCGCmode,              /* CCGC */
  E_CCGOCmode,             /* CCGOC */
  E_CCNOmode,              /* CCNO */
  E_CCGZmode,              /* CCGZ */
  E_CCAmode,               /* CCA */
  E_CCCmode,               /* CCC */
  E_CCOmode,               /* CCO */
  E_CCPmode,               /* CCP */
  E_CCSmode,               /* CCS */
  E_CCZmode,               /* CCZ */
  E_CCFPmode,              /* CCFP */
  E_BImode,                /* BI */
  E_QImode,                /* QI */
  E_HImode,                /* HI */
  E_SImode,                /* SI */
  E_DImode,                /* DI */
  E_TImode,                /* TI */
  E_OImode,                /* OI */
  E_XImode,                /* XI */
  E_P2QImode,              /* P2QI */
  E_P2HImode,              /* P2HI */
  E_POImode,               /* POI */
  E_QQmode,                /* QQ */
  E_HQmode,                /* HQ */
  E_SQmode,                /* SQ */
  E_DQmode,                /* DQ */
  E_TQmode,                /* TQ */
  E_UQQmode,               /* UQQ */
  E_UHQmode,               /* UHQ */
  E_USQmode,               /* USQ */
  E_UDQmode,               /* UDQ */
  E_UTQmode,               /* UTQ */
  E_HAmode,                /* HA */
  E_SAmode,                /* SA */
  E_DAmode,                /* DA */
  E_TAmode,                /* TA */
  E_UHAmode,               /* UHA */
  E_USAmode,               /* USA */
  E_UDAmode,               /* UDA */
  E_UTAmode,               /* UTA */
  E_HFmode,                /* HF */
  E_BFmode,                /* BF */
  E_SFmode,                /* SF */
  E_DFmode,                /* DF */
  E_XFmode,                /* XF */
  E_TFmode,                /* TF */
  E_SDmode,                /* SD */
  E_DDmode,                /* DD */
  E_TDmode,                /* TD */
  E_QImode,                /* CQI */
  E_P2QImode,              /* CP2QI */
  E_HImode,                /* CHI */
  E_P2HImode,              /* CP2HI */
  E_SImode,                /* CSI */
  E_DImode,                /* CDI */
  E_TImode,                /* CTI */
  E_POImode,               /* CPOI */
  E_OImode,                /* COI */
  E_XImode,                /* CXI */
  E_BFmode,                /* BC */
  E_HFmode,                /* HC */
  E_SFmode,                /* SC */
  E_DFmode,                /* DC */
  E_XFmode,                /* XC */
  E_TFmode,                /* TC */
  E_QImode,                /* V2QI */
  E_QImode,                /* V4QI */
  E_HImode,                /* V2HI */
  E_SImode,                /* V1SI */
  E_QImode,                /* V8QI */
  E_HImode,                /* V4HI */
  E_SImode,                /* V2SI */
  E_DImode,                /* V1DI */
  E_QImode,                /* V12QI */
  E_HImode,                /* V6HI */
  E_QImode,                /* V14QI */
  E_QImode,                /* V16QI */
  E_HImode,                /* V8HI */
  E_SImode,                /* V4SI */
  E_DImode,                /* V2DI */
  E_TImode,                /* V1TI */
  E_QImode,                /* V32QI */
  E_HImode,                /* V16HI */
  E_SImode,                /* V8SI */
  E_DImode,                /* V4DI */
  E_TImode,                /* V2TI */
  E_QImode,                /* V64QI */
  E_HImode,                /* V32HI */
  E_SImode,                /* V16SI */
  E_DImode,                /* V8DI */
  E_TImode,                /* V4TI */
  E_QImode,                /* V128QI */
  E_HImode,                /* V64HI */
  E_SImode,                /* V32SI */
  E_DImode,                /* V16DI */
  E_TImode,                /* V8TI */
  E_SImode,                /* V64SI */
  E_HFmode,                /* V2HF */
  E_BFmode,                /* V2BF */
  E_BFmode,                /* V4BF */
  E_HFmode,                /* V4HF */
  E_SFmode,                /* V2SF */
  E_HFmode,                /* V6HF */
  E_BFmode,                /* V8BF */
  E_HFmode,                /* V8HF */
  E_SFmode,                /* V4SF */
  E_DFmode,                /* V2DF */
  E_BFmode,                /* V16BF */
  E_HFmode,                /* V16HF */
  E_SFmode,                /* V8SF */
  E_DFmode,                /* V4DF */
  E_TFmode,                /* V2TF */
  E_BFmode,                /* V32BF */
  E_HFmode,                /* V32HF */
  E_SFmode,                /* V16SF */
  E_DFmode,                /* V8DF */
  E_TFmode,                /* V4TF */
  E_BFmode,                /* V64BF */
  E_HFmode,                /* V64HF */
  E_SFmode,                /* V32SF */
  E_DFmode,                /* V16DF */
  E_TFmode,                /* V8TF */
  E_BFmode,                /* V128BF */
  E_HFmode,                /* V128HF */
  E_SFmode,                /* V64SF */
  E_DFmode,                /* V32DF */
  E_TFmode,                /* V16TF */
};

unsigned char mode_unit_size[NUM_MACHINE_MODES] = 
{
  0,                       /* VOID */
  0,                       /* BLK */
  4,                       /* CC */
  4,                       /* CCGC */
  4,                       /* CCGOC */
  4,                       /* CCNO */
  4,                       /* CCGZ */
  4,                       /* CCA */
  4,                       /* CCC */
  4,                       /* CCO */
  4,                       /* CCP */
  4,                       /* CCS */
  4,                       /* CCZ */
  4,                       /* CCFP */
  1,                       /* BI */
  1,                       /* QI */
  2,                       /* HI */
  4,                       /* SI */
  8,                       /* DI */
  16,                      /* TI */
  32,                      /* OI */
  64,                      /* XI */
  2,                       /* P2QI */
  4,                       /* P2HI */
  32,                      /* POI */
  1,                       /* QQ */
  2,                       /* HQ */
  4,                       /* SQ */
  8,                       /* DQ */
  16,                      /* TQ */
  1,                       /* UQQ */
  2,                       /* UHQ */
  4,                       /* USQ */
  8,                       /* UDQ */
  16,                      /* UTQ */
  2,                       /* HA */
  4,                       /* SA */
  8,                       /* DA */
  16,                      /* TA */
  2,                       /* UHA */
  4,                       /* USA */
  8,                       /* UDA */
  16,                      /* UTA */
  2,                       /* HF */
  2,                       /* BF */
  4,                       /* SF */
  8,                       /* DF */
  12,                      /* XF */
  16,                      /* TF */
  4,                       /* SD */
  8,                       /* DD */
  16,                      /* TD */
  1,                       /* CQI */
  2,                       /* CP2QI */
  2,                       /* CHI */
  4,                       /* CP2HI */
  4,                       /* CSI */
  8,                       /* CDI */
  16,                      /* CTI */
  32,                      /* CPOI */
  32,                      /* COI */
  64,                      /* CXI */
  2,                       /* BC */
  2,                       /* HC */
  4,                       /* SC */
  8,                       /* DC */
  12,                      /* XC */
  16,                      /* TC */
  1,                       /* V2QI */
  1,                       /* V4QI */
  2,                       /* V2HI */
  4,                       /* V1SI */
  1,                       /* V8QI */
  2,                       /* V4HI */
  4,                       /* V2SI */
  8,                       /* V1DI */
  1,                       /* V12QI */
  2,                       /* V6HI */
  1,                       /* V14QI */
  1,                       /* V16QI */
  2,                       /* V8HI */
  4,                       /* V4SI */
  8,                       /* V2DI */
  16,                      /* V1TI */
  1,                       /* V32QI */
  2,                       /* V16HI */
  4,                       /* V8SI */
  8,                       /* V4DI */
  16,                      /* V2TI */
  1,                       /* V64QI */
  2,                       /* V32HI */
  4,                       /* V16SI */
  8,                       /* V8DI */
  16,                      /* V4TI */
  1,                       /* V128QI */
  2,                       /* V64HI */
  4,                       /* V32SI */
  8,                       /* V16DI */
  16,                      /* V8TI */
  4,                       /* V64SI */
  2,                       /* V2HF */
  2,                       /* V2BF */
  2,                       /* V4BF */
  2,                       /* V4HF */
  4,                       /* V2SF */
  2,                       /* V6HF */
  2,                       /* V8BF */
  2,                       /* V8HF */
  4,                       /* V4SF */
  8,                       /* V2DF */
  2,                       /* V16BF */
  2,                       /* V16HF */
  4,                       /* V8SF */
  8,                       /* V4DF */
  16,                      /* V2TF */
  2,                       /* V32BF */
  2,                       /* V32HF */
  4,                       /* V16SF */
  8,                       /* V8DF */
  16,                      /* V4TF */
  2,                       /* V64BF */
  2,                       /* V64HF */
  4,                       /* V32SF */
  8,                       /* V16DF */
  16,                      /* V8TF */
  2,                       /* V128BF */
  2,                       /* V128HF */
  4,                       /* V64SF */
  8,                       /* V32DF */
  16,                      /* V16TF */
};

const unsigned short mode_unit_precision[NUM_MACHINE_MODES] =
{
  0,                       /* VOID */
  0,                       /* BLK */
  4*BITS_PER_UNIT,         /* CC */
  4*BITS_PER_UNIT,         /* CCGC */
  4*BITS_PER_UNIT,         /* CCGOC */
  4*BITS_PER_UNIT,         /* CCNO */
  4*BITS_PER_UNIT,         /* CCGZ */
  4*BITS_PER_UNIT,         /* CCA */
  4*BITS_PER_UNIT,         /* CCC */
  4*BITS_PER_UNIT,         /* CCO */
  4*BITS_PER_UNIT,         /* CCP */
  4*BITS_PER_UNIT,         /* CCS */
  4*BITS_PER_UNIT,         /* CCZ */
  4*BITS_PER_UNIT,         /* CCFP */
  1,                       /* BI */
  1*BITS_PER_UNIT,         /* QI */
  2*BITS_PER_UNIT,         /* HI */
  4*BITS_PER_UNIT,         /* SI */
  8*BITS_PER_UNIT,         /* DI */
  16*BITS_PER_UNIT,        /* TI */
  32*BITS_PER_UNIT,        /* OI */
  64*BITS_PER_UNIT,        /* XI */
  16,                      /* P2QI */
  32,                      /* P2HI */
  160,                     /* POI */
  1*BITS_PER_UNIT,         /* QQ */
  2*BITS_PER_UNIT,         /* HQ */
  4*BITS_PER_UNIT,         /* SQ */
  8*BITS_PER_UNIT,         /* DQ */
  16*BITS_PER_UNIT,        /* TQ */
  1*BITS_PER_UNIT,         /* UQQ */
  2*BITS_PER_UNIT,         /* UHQ */
  4*BITS_PER_UNIT,         /* USQ */
  8*BITS_PER_UNIT,         /* UDQ */
  16*BITS_PER_UNIT,        /* UTQ */
  2*BITS_PER_UNIT,         /* HA */
  4*BITS_PER_UNIT,         /* SA */
  8*BITS_PER_UNIT,         /* DA */
  16*BITS_PER_UNIT,        /* TA */
  2*BITS_PER_UNIT,         /* UHA */
  4*BITS_PER_UNIT,         /* USA */
  8*BITS_PER_UNIT,         /* UDA */
  16*BITS_PER_UNIT,        /* UTA */
  2*BITS_PER_UNIT,         /* HF */
  2*BITS_PER_UNIT,         /* BF */
  4*BITS_PER_UNIT,         /* SF */
  8*BITS_PER_UNIT,         /* DF */
  80,                      /* XF */
  16*BITS_PER_UNIT,        /* TF */
  4*BITS_PER_UNIT,         /* SD */
  8*BITS_PER_UNIT,         /* DD */
  16*BITS_PER_UNIT,        /* TD */
  1*BITS_PER_UNIT,         /* CQI */
  16,                      /* CP2QI */
  2*BITS_PER_UNIT,         /* CHI */
  32,                      /* CP2HI */
  4*BITS_PER_UNIT,         /* CSI */
  8*BITS_PER_UNIT,         /* CDI */
  16*BITS_PER_UNIT,        /* CTI */
  160,                     /* CPOI */
  32*BITS_PER_UNIT,        /* COI */
  64*BITS_PER_UNIT,        /* CXI */
  2*BITS_PER_UNIT,         /* BC */
  2*BITS_PER_UNIT,         /* HC */
  4*BITS_PER_UNIT,         /* SC */
  8*BITS_PER_UNIT,         /* DC */
  80,                      /* XC */
  16*BITS_PER_UNIT,        /* TC */
  1*BITS_PER_UNIT,         /* V2QI */
  1*BITS_PER_UNIT,         /* V4QI */
  2*BITS_PER_UNIT,         /* V2HI */
  4*BITS_PER_UNIT,         /* V1SI */
  1*BITS_PER_UNIT,         /* V8QI */
  2*BITS_PER_UNIT,         /* V4HI */
  4*BITS_PER_UNIT,         /* V2SI */
  8*BITS_PER_UNIT,         /* V1DI */
  1*BITS_PER_UNIT,         /* V12QI */
  2*BITS_PER_UNIT,         /* V6HI */
  1*BITS_PER_UNIT,         /* V14QI */
  1*BITS_PER_UNIT,         /* V16QI */
  2*BITS_PER_UNIT,         /* V8HI */
  4*BITS_PER_UNIT,         /* V4SI */
  8*BITS_PER_UNIT,         /* V2DI */
  16*BITS_PER_UNIT,        /* V1TI */
  1*BITS_PER_UNIT,         /* V32QI */
  2*BITS_PER_UNIT,         /* V16HI */
  4*BITS_PER_UNIT,         /* V8SI */
  8*BITS_PER_UNIT,         /* V4DI */
  16*BITS_PER_UNIT,        /* V2TI */
  1*BITS_PER_UNIT,         /* V64QI */
  2*BITS_PER_UNIT,         /* V32HI */
  4*BITS_PER_UNIT,         /* V16SI */
  8*BITS_PER_UNIT,         /* V8DI */
  16*BITS_PER_UNIT,        /* V4TI */
  1*BITS_PER_UNIT,         /* V128QI */
  2*BITS_PER_UNIT,         /* V64HI */
  4*BITS_PER_UNIT,         /* V32SI */
  8*BITS_PER_UNIT,         /* V16DI */
  16*BITS_PER_UNIT,        /* V8TI */
  4*BITS_PER_UNIT,         /* V64SI */
  2*BITS_PER_UNIT,         /* V2HF */
  2*BITS_PER_UNIT,         /* V2BF */
  2*BITS_PER_UNIT,         /* V4BF */
  2*BITS_PER_UNIT,         /* V4HF */
  4*BITS_PER_UNIT,         /* V2SF */
  2*BITS_PER_UNIT,         /* V6HF */
  2*BITS_PER_UNIT,         /* V8BF */
  2*BITS_PER_UNIT,         /* V8HF */
  4*BITS_PER_UNIT,         /* V4SF */
  8*BITS_PER_UNIT,         /* V2DF */
  2*BITS_PER_UNIT,         /* V16BF */
  2*BITS_PER_UNIT,         /* V16HF */
  4*BITS_PER_UNIT,         /* V8SF */
  8*BITS_PER_UNIT,         /* V4DF */
  16*BITS_PER_UNIT,        /* V2TF */
  2*BITS_PER_UNIT,         /* V32BF */
  2*BITS_PER_UNIT,         /* V32HF */
  4*BITS_PER_UNIT,         /* V16SF */
  8*BITS_PER_UNIT,         /* V8DF */
  16*BITS_PER_UNIT,        /* V4TF */
  2*BITS_PER_UNIT,         /* V64BF */
  2*BITS_PER_UNIT,         /* V64HF */
  4*BITS_PER_UNIT,         /* V32SF */
  8*BITS_PER_UNIT,         /* V16DF */
  16*BITS_PER_UNIT,        /* V8TF */
  2*BITS_PER_UNIT,         /* V128BF */
  2*BITS_PER_UNIT,         /* V128HF */
  4*BITS_PER_UNIT,         /* V64SF */
  8*BITS_PER_UNIT,         /* V32DF */
  16*BITS_PER_UNIT,        /* V16TF */
};

unsigned short mode_base_align[NUM_MACHINE_MODES] = 
{
  0,                       /* VOID */
  0,                       /* BLK */
  4,                       /* CC */
  4,                       /* CCGC */
  4,                       /* CCGOC */
  4,                       /* CCNO */
  4,                       /* CCGZ */
  4,                       /* CCA */
  4,                       /* CCC */
  4,                       /* CCO */
  4,                       /* CCP */
  4,                       /* CCS */
  4,                       /* CCZ */
  4,                       /* CCFP */
  1,                       /* BI */
  1,                       /* QI */
  2,                       /* HI */
  4,                       /* SI */
  8,                       /* DI */
  16,                      /* TI */
  32,                      /* OI */
  64,                      /* XI */
  2,                       /* P2QI */
  4,                       /* P2HI */
  32,                      /* POI */
  1,                       /* QQ */
  2,                       /* HQ */
  4,                       /* SQ */
  8,                       /* DQ */
  16,                      /* TQ */
  1,                       /* UQQ */
  2,                       /* UHQ */
  4,                       /* USQ */
  8,                       /* UDQ */
  16,                      /* UTQ */
  2,                       /* HA */
  4,                       /* SA */
  8,                       /* DA */
  16,                      /* TA */
  2,                       /* UHA */
  4,                       /* USA */
  8,                       /* UDA */
  16,                      /* UTA */
  2,                       /* HF */
  2,                       /* BF */
  4,                       /* SF */
  8,                       /* DF */
  4,                       /* XF */
  16,                      /* TF */
  4,                       /* SD */
  8,                       /* DD */
  16,                      /* TD */
  1,                       /* CQI */
  2,                       /* CP2QI */
  2,                       /* CHI */
  4,                       /* CP2HI */
  4,                       /* CSI */
  8,                       /* CDI */
  16,                      /* CTI */
  32,                      /* CPOI */
  32,                      /* COI */
  64,                      /* CXI */
  2,                       /* BC */
  2,                       /* HC */
  4,                       /* SC */
  8,                       /* DC */
  4,                       /* XC */
  16,                      /* TC */
  2,                       /* V2QI */
  4,                       /* V4QI */
  4,                       /* V2HI */
  4,                       /* V1SI */
  8,                       /* V8QI */
  8,                       /* V4HI */
  8,                       /* V2SI */
  8,                       /* V1DI */
  4,                       /* V12QI */
  4,                       /* V6HI */
  2,                       /* V14QI */
  16,                      /* V16QI */
  16,                      /* V8HI */
  16,                      /* V4SI */
  16,                      /* V2DI */
  16,                      /* V1TI */
  32,                      /* V32QI */
  32,                      /* V16HI */
  32,                      /* V8SI */
  32,                      /* V4DI */
  32,                      /* V2TI */
  64,                      /* V64QI */
  64,                      /* V32HI */
  64,                      /* V16SI */
  64,                      /* V8DI */
  64,                      /* V4TI */
  128,                     /* V128QI */
  128,                     /* V64HI */
  128,                     /* V32SI */
  128,                     /* V16DI */
  128,                     /* V8TI */
  256,                     /* V64SI */
  4,                       /* V2HF */
  4,                       /* V2BF */
  8,                       /* V4BF */
  8,                       /* V4HF */
  8,                       /* V2SF */
  4,                       /* V6HF */
  16,                      /* V8BF */
  16,                      /* V8HF */
  16,                      /* V4SF */
  16,                      /* V2DF */
  32,                      /* V16BF */
  32,                      /* V16HF */
  32,                      /* V8SF */
  32,                      /* V4DF */
  32,                      /* V2TF */
  64,                      /* V32BF */
  64,                      /* V32HF */
  64,                      /* V16SF */
  64,                      /* V8DF */
  64,                      /* V4TF */
  128,                     /* V64BF */
  128,                     /* V64HF */
  128,                     /* V32SF */
  128,                     /* V16DF */
  128,                     /* V8TF */
  256,                     /* V128BF */
  256,                     /* V128HF */
  256,                     /* V64SF */
  256,                     /* V32DF */
  256,                     /* V16TF */
};

const unsigned short class_narrowest_mode[MAX_MODE_CLASS] =
{
  MIN_MODE_RANDOM,         /* VOID */
  MIN_MODE_CC,             /* CC */
  MIN_MODE_INT,            /* QI */
  MIN_MODE_PARTIAL_INT,    /* P2QI */
  MIN_MODE_FRACT,          /* QQ */
  MIN_MODE_UFRACT,         /* UQQ */
  MIN_MODE_ACCUM,          /* HA */
  MIN_MODE_UACCUM,         /* UHA */
  MIN_MODE_FLOAT,          /* HF */
  MIN_MODE_DECIMAL_FLOAT,  /* SD */
  MIN_MODE_COMPLEX_INT,    /* CQI */
  MIN_MODE_COMPLEX_FLOAT,  /* BC */
  MIN_MODE_VECTOR_BOOL,    /* VOID */
  MIN_MODE_VECTOR_INT,     /* V2QI */
  MIN_MODE_VECTOR_FRACT,   /* VOID */
  MIN_MODE_VECTOR_UFRACT,  /* VOID */
  MIN_MODE_VECTOR_ACCUM,   /* VOID */
  MIN_MODE_VECTOR_UACCUM,  /* VOID */
  MIN_MODE_VECTOR_FLOAT,   /* V2HF */
  MIN_MODE_OPAQUE,         /* VOID */
};

const struct real_format *
 real_format_for_mode[MAX_MODE_FLOAT - MIN_MODE_FLOAT + 1 + MAX_MODE_DECIMAL_FLOAT - MIN_MODE_DECIMAL_FLOAT + 1] =
{
  &ieee_half_format,       /* HF */
  0,                       /* BF */
  &ieee_single_format,     /* SF */
  &ieee_double_format,     /* DF */
  &ieee_extended_intel_96_format,      /* XF */
  &ieee_quad_format,       /* TF */
  &decimal_single_format,  /* SD */
  &decimal_double_format,  /* DD */
  &decimal_quad_format,    /* TD */
};

void
init_adjust_machine_modes (void)
{
  poly_uint16 ps ATTRIBUTE_UNUSED;
  size_t s ATTRIBUTE_UNUSED;

  /* config/i386/i386-modes.def:37 */
  ps = s = TARGET_128BIT_LONG_DOUBLE ? 16 : 12;
  mode_unit_size[E_XFmode] = s;
  mode_size[E_XFmode] = ps;
  mode_base_align[E_XFmode] = known_alignment (ps);
  mode_size[E_XCmode] = 2*s;
  mode_unit_size[E_XCmode] = s;
  mode_base_align[E_XCmode] = s & (~s + 1);

  /* config/i386/i386-modes.def:38 */
  s = TARGET_128BIT_LONG_DOUBLE ? 16 : 4;
  mode_base_align[E_XFmode] = s;
  mode_base_align[E_XCmode] = s;

  /* config/i386/i386-modes.def:32 */
  REAL_MODE_FORMAT (E_XFmode) = (TARGET_128BIT_LONG_DOUBLE ? &ieee_extended_intel_128_format : TARGET_96_ROUND_53_LONG_DOUBLE ? &ieee_extended_intel_96_round_53_format : &ieee_extended_intel_96_format);

  /* config/i386/i386-modes.def:28 */
  REAL_MODE_FORMAT (E_BFmode) = &arm_bfloat_half_format;

  gcc_assert (maybe_ne (mode_size[E_VOIDmode], -1));

  gcc_assert (maybe_ne (mode_size[E_BLKmode], -1));

  gcc_assert (maybe_ne (mode_size[E_CCmode], -1));

  gcc_assert (maybe_ne (mode_size[E_CCGCmode], -1));

  gcc_assert (maybe_ne (mode_size[E_CCGOCmode], -1));

  gcc_assert (maybe_ne (mode_size[E_CCNOmode], -1));

  gcc_assert (maybe_ne (mode_size[E_CCGZmode], -1));

  gcc_assert (maybe_ne (mode_size[E_CCAmode], -1));

  gcc_assert (maybe_ne (mode_size[E_CCCmode], -1));

  gcc_assert (maybe_ne (mode_size[E_CCOmode], -1));

  gcc_assert (maybe_ne (mode_size[E_CCPmode], -1));

  gcc_assert (maybe_ne (mode_size[E_CCSmode], -1));

  gcc_assert (maybe_ne (mode_size[E_CCZmode], -1));

  gcc_assert (maybe_ne (mode_size[E_CCFPmode], -1));

  gcc_assert (maybe_ne (mode_size[E_BImode], -1));

  gcc_assert (maybe_ne (mode_size[E_QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_TImode], -1));

  gcc_assert (maybe_ne (mode_size[E_OImode], -1));

  gcc_assert (maybe_ne (mode_size[E_XImode], -1));

  gcc_assert (maybe_ne (mode_size[E_P2QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_P2HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_POImode], -1));

  gcc_assert (maybe_ne (mode_size[E_QQmode], -1));

  gcc_assert (maybe_ne (mode_size[E_HQmode], -1));

  gcc_assert (maybe_ne (mode_size[E_SQmode], -1));

  gcc_assert (maybe_ne (mode_size[E_DQmode], -1));

  gcc_assert (maybe_ne (mode_size[E_TQmode], -1));

  gcc_assert (maybe_ne (mode_size[E_UQQmode], -1));

  gcc_assert (maybe_ne (mode_size[E_UHQmode], -1));

  gcc_assert (maybe_ne (mode_size[E_USQmode], -1));

  gcc_assert (maybe_ne (mode_size[E_UDQmode], -1));

  gcc_assert (maybe_ne (mode_size[E_UTQmode], -1));

  gcc_assert (maybe_ne (mode_size[E_HAmode], -1));

  gcc_assert (maybe_ne (mode_size[E_SAmode], -1));

  gcc_assert (maybe_ne (mode_size[E_DAmode], -1));

  gcc_assert (maybe_ne (mode_size[E_TAmode], -1));

  gcc_assert (maybe_ne (mode_size[E_UHAmode], -1));

  gcc_assert (maybe_ne (mode_size[E_USAmode], -1));

  gcc_assert (maybe_ne (mode_size[E_UDAmode], -1));

  gcc_assert (maybe_ne (mode_size[E_UTAmode], -1));

  gcc_assert (maybe_ne (mode_size[E_HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_XFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_TFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_SDmode], -1));

  gcc_assert (maybe_ne (mode_size[E_DDmode], -1));

  gcc_assert (maybe_ne (mode_size[E_TDmode], -1));

  gcc_assert (maybe_ne (mode_size[E_CQImode], -1));

  gcc_assert (maybe_ne (mode_size[E_CP2QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_CHImode], -1));

  gcc_assert (maybe_ne (mode_size[E_CP2HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_CSImode], -1));

  gcc_assert (maybe_ne (mode_size[E_CDImode], -1));

  gcc_assert (maybe_ne (mode_size[E_CTImode], -1));

  gcc_assert (maybe_ne (mode_size[E_CPOImode], -1));

  gcc_assert (maybe_ne (mode_size[E_COImode], -1));

  gcc_assert (maybe_ne (mode_size[E_CXImode], -1));

  gcc_assert (maybe_ne (mode_size[E_BCmode], -1));

  gcc_assert (maybe_ne (mode_size[E_HCmode], -1));

  gcc_assert (maybe_ne (mode_size[E_SCmode], -1));

  gcc_assert (maybe_ne (mode_size[E_DCmode], -1));

  gcc_assert (maybe_ne (mode_size[E_XCmode], -1));

  gcc_assert (maybe_ne (mode_size[E_TCmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V2QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V4QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V2HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V1SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V8QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V4HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V2SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V1DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V12QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V6HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V14QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V16QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V8HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V4SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V2DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V1TImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V32QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V16HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V8SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V4DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V2TImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V64QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V32HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V16SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V8DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V4TImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V128QImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V64HImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V32SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V16DImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V8TImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V64SImode], -1));

  gcc_assert (maybe_ne (mode_size[E_V2HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V2BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V4BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V4HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V2SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V6HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V8BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V8HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V4SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V2DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V16BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V16HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V8SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V4DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V2TFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V32BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V32HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V16SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V8DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V4TFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V64BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V64HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V32SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V16DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V8TFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V128BFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V128HFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V64SFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V32DFmode], -1));

  gcc_assert (maybe_ne (mode_size[E_V16TFmode], -1));
}

const unsigned char mode_ibit[NUM_MACHINE_MODES] = 
{
  0,                       /* VOID */
  0,                       /* BLK */
  0,                       /* CC */
  0,                       /* CCGC */
  0,                       /* CCGOC */
  0,                       /* CCNO */
  0,                       /* CCGZ */
  0,                       /* CCA */
  0,                       /* CCC */
  0,                       /* CCO */
  0,                       /* CCP */
  0,                       /* CCS */
  0,                       /* CCZ */
  0,                       /* CCFP */
  0,                       /* BI */
  0,                       /* QI */
  0,                       /* HI */
  0,                       /* SI */
  0,                       /* DI */
  0,                       /* TI */
  0,                       /* OI */
  0,                       /* XI */
  0,                       /* P2QI */
  0,                       /* P2HI */
  0,                       /* POI */
  0,                       /* QQ */
  0,                       /* HQ */
  0,                       /* SQ */
  0,                       /* DQ */
  0,                       /* TQ */
  0,                       /* UQQ */
  0,                       /* UHQ */
  0,                       /* USQ */
  0,                       /* UDQ */
  0,                       /* UTQ */
  8,                       /* HA */
  16,                      /* SA */
  32,                      /* DA */
  64,                      /* TA */
  8,                       /* UHA */
  16,                      /* USA */
  32,                      /* UDA */
  64,                      /* UTA */
  0,                       /* HF */
  0,                       /* BF */
  0,                       /* SF */
  0,                       /* DF */
  0,                       /* XF */
  0,                       /* TF */
  0,                       /* SD */
  0,                       /* DD */
  0,                       /* TD */
  0,                       /* CQI */
  0,                       /* CP2QI */
  0,                       /* CHI */
  0,                       /* CP2HI */
  0,                       /* CSI */
  0,                       /* CDI */
  0,                       /* CTI */
  0,                       /* CPOI */
  0,                       /* COI */
  0,                       /* CXI */
  0,                       /* BC */
  0,                       /* HC */
  0,                       /* SC */
  0,                       /* DC */
  0,                       /* XC */
  0,                       /* TC */
  0,                       /* V2QI */
  0,                       /* V4QI */
  0,                       /* V2HI */
  0,                       /* V1SI */
  0,                       /* V8QI */
  0,                       /* V4HI */
  0,                       /* V2SI */
  0,                       /* V1DI */
  0,                       /* V12QI */
  0,                       /* V6HI */
  0,                       /* V14QI */
  0,                       /* V16QI */
  0,                       /* V8HI */
  0,                       /* V4SI */
  0,                       /* V2DI */
  0,                       /* V1TI */
  0,                       /* V32QI */
  0,                       /* V16HI */
  0,                       /* V8SI */
  0,                       /* V4DI */
  0,                       /* V2TI */
  0,                       /* V64QI */
  0,                       /* V32HI */
  0,                       /* V16SI */
  0,                       /* V8DI */
  0,                       /* V4TI */
  0,                       /* V128QI */
  0,                       /* V64HI */
  0,                       /* V32SI */
  0,                       /* V16DI */
  0,                       /* V8TI */
  0,                       /* V64SI */
  0,                       /* V2HF */
  0,                       /* V2BF */
  0,                       /* V4BF */
  0,                       /* V4HF */
  0,                       /* V2SF */
  0,                       /* V6HF */
  0,                       /* V8BF */
  0,                       /* V8HF */
  0,                       /* V4SF */
  0,                       /* V2DF */
  0,                       /* V16BF */
  0,                       /* V16HF */
  0,                       /* V8SF */
  0,                       /* V4DF */
  0,                       /* V2TF */
  0,                       /* V32BF */
  0,                       /* V32HF */
  0,                       /* V16SF */
  0,                       /* V8DF */
  0,                       /* V4TF */
  0,                       /* V64BF */
  0,                       /* V64HF */
  0,                       /* V32SF */
  0,                       /* V16DF */
  0,                       /* V8TF */
  0,                       /* V128BF */
  0,                       /* V128HF */
  0,                       /* V64SF */
  0,                       /* V32DF */
  0,                       /* V16TF */
};

const unsigned char mode_fbit[NUM_MACHINE_MODES] = 
{
  0,                       /* VOID */
  0,                       /* BLK */
  0,                       /* CC */
  0,                       /* CCGC */
  0,                       /* CCGOC */
  0,                       /* CCNO */
  0,                       /* CCGZ */
  0,                       /* CCA */
  0,                       /* CCC */
  0,                       /* CCO */
  0,                       /* CCP */
  0,                       /* CCS */
  0,                       /* CCZ */
  0,                       /* CCFP */
  0,                       /* BI */
  0,                       /* QI */
  0,                       /* HI */
  0,                       /* SI */
  0,                       /* DI */
  0,                       /* TI */
  0,                       /* OI */
  0,                       /* XI */
  0,                       /* P2QI */
  0,                       /* P2HI */
  0,                       /* POI */
  7,                       /* QQ */
  15,                      /* HQ */
  31,                      /* SQ */
  63,                      /* DQ */
  127,                     /* TQ */
  8,                       /* UQQ */
  16,                      /* UHQ */
  32,                      /* USQ */
  64,                      /* UDQ */
  128,                     /* UTQ */
  7,                       /* HA */
  15,                      /* SA */
  31,                      /* DA */
  63,                      /* TA */
  8,                       /* UHA */
  16,                      /* USA */
  32,                      /* UDA */
  64,                      /* UTA */
  0,                       /* HF */
  0,                       /* BF */
  0,                       /* SF */
  0,                       /* DF */
  0,                       /* XF */
  0,                       /* TF */
  0,                       /* SD */
  0,                       /* DD */
  0,                       /* TD */
  0,                       /* CQI */
  0,                       /* CP2QI */
  0,                       /* CHI */
  0,                       /* CP2HI */
  0,                       /* CSI */
  0,                       /* CDI */
  0,                       /* CTI */
  0,                       /* CPOI */
  0,                       /* COI */
  0,                       /* CXI */
  0,                       /* BC */
  0,                       /* HC */
  0,                       /* SC */
  0,                       /* DC */
  0,                       /* XC */
  0,                       /* TC */
  0,                       /* V2QI */
  0,                       /* V4QI */
  0,                       /* V2HI */
  0,                       /* V1SI */
  0,                       /* V8QI */
  0,                       /* V4HI */
  0,                       /* V2SI */
  0,                       /* V1DI */
  0,                       /* V12QI */
  0,                       /* V6HI */
  0,                       /* V14QI */
  0,                       /* V16QI */
  0,                       /* V8HI */
  0,                       /* V4SI */
  0,                       /* V2DI */
  0,                       /* V1TI */
  0,                       /* V32QI */
  0,                       /* V16HI */
  0,                       /* V8SI */
  0,                       /* V4DI */
  0,                       /* V2TI */
  0,                       /* V64QI */
  0,                       /* V32HI */
  0,                       /* V16SI */
  0,                       /* V8DI */
  0,                       /* V4TI */
  0,                       /* V128QI */
  0,                       /* V64HI */
  0,                       /* V32SI */
  0,                       /* V16DI */
  0,                       /* V8TI */
  0,                       /* V64SI */
  0,                       /* V2HF */
  0,                       /* V2BF */
  0,                       /* V4BF */
  0,                       /* V4HF */
  0,                       /* V2SF */
  0,                       /* V6HF */
  0,                       /* V8BF */
  0,                       /* V8HF */
  0,                       /* V4SF */
  0,                       /* V2DF */
  0,                       /* V16BF */
  0,                       /* V16HF */
  0,                       /* V8SF */
  0,                       /* V4DF */
  0,                       /* V2TF */
  0,                       /* V32BF */
  0,                       /* V32HF */
  0,                       /* V16SF */
  0,                       /* V8DF */
  0,                       /* V4TF */
  0,                       /* V64BF */
  0,                       /* V64HF */
  0,                       /* V32SF */
  0,                       /* V16DF */
  0,                       /* V8TF */
  0,                       /* V128BF */
  0,                       /* V128HF */
  0,                       /* V64SF */
  0,                       /* V32DF */
  0,                       /* V16TF */
};

const int_n_data_t int_n_data[] =
{
 {
  128,                     /* TI */
{ E_TImode }, },
};
