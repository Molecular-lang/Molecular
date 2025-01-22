/* Generated automatically from machmode.def and config/i386/i386-modes.def
   by genmodes.  */

#include "bconfig.h"
#include "system.h"
#include "coretypes.h"

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
