
#ifndef _MT_PMIC_LDO_H_
#define _MT_PMIC_LDO_H_

#include <mt-plat/mt_typedefs.h>

#define __USE_LINUX_REGULATOR_FRAMEWORK__

#define MAX_DEVICE      32
#define MAX_MOD_NAME    32

#define NON_OP "NOP"

/* Debug message event */
#define DBG_PMAPI_NONE 0x00000000    
#define DBG_PMAPI_CG   0x00000001    
#define DBG_PMAPI_PLL  0x00000002    
#define DBG_PMAPI_SUB  0x00000004    
#define DBG_PMAPI_PMIC 0x00000008    
#define DBG_PMAPI_ALL  0xFFFFFFFF    
    
#define DBG_PMAPI_MASK (DBG_PMAPI_ALL)

typedef enum MT_POWER_TAG {    

    MT6325_POWER_LDO_VTCXO0,     
    MT6325_POWER_LDO_VTCXO1,     
    MT6325_POWER_LDO_VAUD28,     
    MT6325_POWER_LDO_VAUXA28,    
    MT6325_POWER_LDO_VBIF28,     
    MT6325_POWER_LDO_VCAMA,      
    MT6325_POWER_LDO_VCN28,      
    MT6325_POWER_LDO_VCN33,      
    MT6325_POWER_LDO_VRF18_1,    
    MT6325_POWER_LDO_VUSB33,     
    MT6325_POWER_LDO_VMCH,       
    MT6325_POWER_LDO_VMC,        
    MT6325_POWER_LDO_VEMC33,     
    MT6325_POWER_LDO_VIO28,      
    MT6325_POWER_LDO_VCAM_AF,    
    MT6325_POWER_LDO_VGP1,       
    MT6325_POWER_LDO_VEFUSE,     
    MT6325_POWER_LDO_VSIM1,      
    MT6325_POWER_LDO_VSIM2,      
    MT6325_POWER_LDO_VMIPI,      
    MT6325_POWER_LDO_VCN18,      
    MT6325_POWER_LDO_VGP2,       
    MT6325_POWER_LDO_VCAMD,      
    MT6325_POWER_LDO_VCAM_IO,    
    MT6325_POWER_LDO_VSRAM_DVFS1,
    MT6325_POWER_LDO_VGP3,       
    MT6325_POWER_LDO_VBIASN,     
    MT6325_POWER_LDO_VRTC, 

    
    MT65XX_POWER_LDO_DEFAULT,
    MT65XX_POWER_COUNT_END,
    MT65XX_POWER_NONE = -1
} MT_POWER;

typedef enum MT_POWER_VOL_TAG 
{
    VOL_DEFAULT, 
    VOL_0200 = 200,
    VOL_0220 = 220,
    VOL_0240 = 240,
    VOL_0260 = 260,
    VOL_0280 = 280,
    VOL_0300 = 300,
    VOL_0320 = 320,
    VOL_0340 = 340,
    VOL_0360 = 360,
    VOL_0380 = 380,
    VOL_0400 = 400,
    VOL_0420 = 420,
    VOL_0440 = 440,
    VOL_0460 = 460,
    VOL_0480 = 480,
    VOL_0500 = 500,
    VOL_0520 = 520,
    VOL_0540 = 540,
    VOL_0560 = 560,
    VOL_0580 = 580,
    VOL_0600 = 600,
    VOL_0620 = 620,
    VOL_0640 = 640,
    VOL_0660 = 660,
    VOL_0680 = 680,
    VOL_0700 = 700,
    VOL_0720 = 720,
    VOL_0740 = 740,
    VOL_0760 = 760,
    VOL_0780 = 780,
    VOL_0800 = 800,        
    VOL_0900 = 900,
    VOL_0950 = 950,
    VOL_1000 = 1000,
    VOL_1050 = 1050,
    VOL_1100 = 1100,
    VOL_1150 = 1150,
    VOL_1200 = 1200,
    VOL_1220 = 1220,
    VOL_1250 = 1250,
    VOL_1300 = 1300,
    VOL_1350 = 1350,
    VOL_1360 = 1360,
    VOL_1400 = 1400,
    VOL_1450 = 1450,
    VOL_1500 = 1500,
    VOL_1550 = 1550,
    VOL_1600 = 1600,
    VOL_1650 = 1650,
    VOL_1700 = 1700,
    VOL_1750 = 1750,
    VOL_1800 = 1800,
    VOL_1850 = 1850,
    VOL_1860 = 1860,
    VOL_1900 = 1900,
    VOL_1950 = 1950,
    VOL_2000 = 2000,
    VOL_2050 = 2050,
    VOL_2100 = 2100,
    VOL_2150 = 2150,
    VOL_2200 = 2200,
    VOL_2250 = 2250,
    VOL_2300 = 2300,
    VOL_2350 = 2350,
    VOL_2400 = 2400,
    VOL_2450 = 2450,
    VOL_2500 = 2500,
    VOL_2550 = 2550,
    VOL_2600 = 2600,
    VOL_2650 = 2650,
    VOL_2700 = 2700,
    VOL_2750 = 2750,
    VOL_2760 = 2760,
    VOL_2800 = 2800,
    VOL_2850 = 2850,
    VOL_2900 = 2900,
    VOL_2950 = 2950,
    VOL_3000 = 3000,
    VOL_3050 = 3050,
    VOL_3100 = 3100,
    VOL_3150 = 3150,
    VOL_3200 = 3200,
    VOL_3250 = 3250,
    VOL_3300 = 3300,
    VOL_3350 = 3350,
    VOL_3400 = 3400,
    VOL_3450 = 3450,
    VOL_3500 = 3500,
    VOL_3550 = 3550,
    VOL_3600 = 3600
} MT_POWER_VOLTAGE;    

typedef struct { 
    DWORD dwPowerCount; 
    BOOL bDefault_on;
    char name[MAX_MOD_NAME];        
    char mod_name[MAX_DEVICE][MAX_MOD_NAME];    
} DEVICE_POWER;

typedef struct
{    
    DEVICE_POWER Power[MT65XX_POWER_COUNT_END];    
} ROOTBUS_HW;

//==============================================================================
// PMIC Exported Function for power service
//==============================================================================
extern void pmic_ldo_enable(MT_POWER powerId, kal_bool powerEnable);
extern void pmic_ldo_vol_sel(MT_POWER powerId, MT_POWER_VOLTAGE powerVolt);

extern bool hwPowerOn(MT_POWER powerId, MT_POWER_VOLTAGE powerVolt, char *mode_name);
extern bool hwPowerDown(MT_POWER powerId, char *mode_name);

#endif // _MT_PMIC_LDO_H_
