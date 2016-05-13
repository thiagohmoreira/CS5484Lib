#ifndef CS5484_H
#define CS5484_H

#ifdef __cplusplus
extern "C"
{
#endif

//Commands
#define CS5484_CMD_READ_REG             0x01
#define CS5484_CMD_WRITE_REG            0x02
#define CS5484_CMD_SET_PAGE             0x03
#define CS5484_CMD_INS					0x04

//Controls
#define CS5484_CTRL_RESET			    0x01
#define CS5484_CTRL_STANDBY             0x02
#define CS5484_CTRL_WAKEUP              0x03
#define CS5484_CTRL_SINGLE_CONV         0x14
#define CS5484_CTRL_CONT_CONV           0x15
#define CS5484_CTRL_HALT_CONV           0x18

//Calibrations
#define CS5484_CAL_VAL_DC_OFFSET		0x00
#define CS5484_CAL_VAL_AC_OFFSET		0x02
#define CS5484_CAL_VAL_GAIN             0x03

#define CS5484_CAL_CHAN_I1              0x01
#define CS5484_CAL_CHAN_V1              0x02
#define CS5484_CAL_CHAN_I2              0x03
#define CS5484_CAL_CHAN_V2              0x04
#define CS5484_CAL_CHAN_ALL             0x06

/*----------------------------------------------------------------------------*/

//Page 0
#define CS5484_REG_Config0              0x00 //Addr:  0 - Default: 0x400000
#define CS5484_REG_Config1              0x01 //Addr:  1 - Default: 0x00EEEE
#define CS5484_REG_Mask                 0x03 //Addr:  3 - Default: 0x000000
#define CS5484_REG_PC                   0x05 //Addr:  5 - Default: 0x000000
#define CS5484_REG_SerialCtrl           0x07 //Addr:  7 - Default: 0x02004D
#define CS5484_REG_PulseWigth           0x08 //Addr:  8 - Default: 0x000001
#define CS5484_REG_PulseCtrl            0x09 //Addr:  9 - Default: 0x000000
#define CS5484_REG_Status0              0x17 //Addr: 23 - Default: 0x800000
#define CS5484_REG_Status1              0x18 //Addr: 24 - Default: 0x801800
#define CS5484_REG_Status2              0x19 //Addr: 25 - Default: 0x000000
#define CS5484_REG_RegLock              0x22 //Addr: 34 - Default: 0x000000
#define CS5484_REG_V1peak               0x24 //Addr: 36 - Default: 0x000000
#define CS5484_REG_I1peak               0x25 //Addr: 37 - Default: 0x000000
#define CS5484_REG_V2peak               0x26 //Addr: 38 - Default: 0x000000
#define CS5484_REG_I2peak               0x27 //Addr: 39 - Default: 0x000000
#define CS5484_REG_PSDC                 0x30 //Addr: 48 - Default: 0x000000
#define CS5484_REG_ZXnum                0x37 //Addr: 55 - Default: 0x000064

//Page 16
#define CS5484_REG_Config2              0x00 //Addr:  0 - Default: 0x060200
#define CS5484_REG_RegChk               0x01 //Addr:  1 - Default: 0x000000
#define CS5484_REG_I1                   0x02 //Addr:  2 - Default: 0x000000
#define CS5484_REG_V1                   0x03 //Addr:  3 - Default: 0x000000
#define CS5484_REG_P1                   0x04 //Addr:  4 - Default: 0x000000
#define CS5484_REG_P1avg                0x05 //Addr:  5 - Default: 0x000000
#define CS5484_REG_I1rms                0x06 //Addr:  6 - Default: 0x000000
#define CS5484_REG_V1rms                0x07 //Addr:  7 - Default: 0x000000
#define CS5484_REG_I2                   0x08 //Addr:  8 - Default: 0x000000
#define CS5484_REG_V2                   0x09 //Addr:  9 - Default: 0x000000
#define CS5484_REG_P2                   0x0A //Addr: 10 - Default: 0x000000
#define CS5484_REG_P2avg                0x0B //Addr: 11 - Default: 0x000000
#define CS5484_REG_I2rms                0x0C //Addr: 12 - Default: 0x000000
#define CS5484_REG_V2rms                0x0D //Addr: 13 - Default: 0x000000
#define CS5484_REG_Q1avg                0x0E //Addr: 14 - Default: 0x000000
#define CS5484_REG_Q1                   0x0F //Addr: 15 - Default: 0x000000
#define CS5484_REG_Q2avg                0x10 //Addr: 16 - Default: 0x000000
#define CS5484_REG_Q2                   0x11 //Addr: 17 - Default: 0x000000
#define CS5484_REG_S1                   0x14 //Addr: 20 - Default: 0x000000
#define CS5484_REG_PF1                  0x15 //Addr: 21 - Default: 0x000000
#define CS5484_REG_S2                   0x18 //Addr: 24 - Default: 0x000000
#define CS5484_REG_PF2                  0x19 //Addr: 25 - Default: 0x000000
#define CS5484_REG_T                    0x1B //Addr: 27 - Default: 0x000000
#define CS5484_REG_Psum                 0x1D //Addr: 29 - Default: 0x000000
#define CS5484_REG_Ssum                 0x1E //Addr: 30 - Default: 0x000000
#define CS5484_REG_Qsum                 0x1F //Addr: 31 - Default: 0x000000
#define CS5484_REG_I1dcoff              0x20 //Addr: 32 - Default: 0x000000
#define CS5484_REG_I1gain               0x21 //Addr: 33 - Default: 0x400000
#define CS5484_REG_V1dcoff              0x22 //Addr: 34 - Default: 0x000000
#define CS5484_REG_V1gain               0x23 //Addr: 35 - Default: 0x400000
#define CS5484_REG_P1off                0x24 //Addr: 36 - Default: 0x000000
#define CS5484_REG_I1acoff              0x25 //Addr: 37 - Default: 0x000000
#define CS5484_REG_Q1off                0x26 //Addr: 38 - Default: 0x000000
#define CS5484_REG_I2dcoff              0x27 //Addr: 39 - Default: 0x000000
#define CS5484_REG_I2gain               0x28 //Addr: 40 - Default: 0x400000
#define CS5484_REG_V2dcoff              0x29 //Addr: 41 - Default: 0x000000
#define CS5484_REG_V2gain               0x2A //Addr: 42 - Default: 0x400000
#define CS5484_REG_P2off                0x2B //Addr: 43 - Default: 0x000000
#define CS5484_REG_I2acoff              0x2C //Addr: 44 - Default: 0x000000
#define CS5484_REG_Q2off                0x2D //Addr: 45 - Default: 0x000000
#define CS5484_REG_Epsilon              0x31 //Addr: 49 - Default: 0x01999A
#define CS5484_REG_SampleCount          0x33 //Addr: 51 - Default: 0x000FA0
#define CS5484_REG_Tgain                0x36 //Addr: 54 - Default: 0x06B716
#define CS5484_REG_Toff                 0x37 //Addr: 55 - Default: 0xD53998
#define CS5484_REG_Tsettle              0x39 //Addr: 57 - Default: 0x00001E
#define CS5484_REG_LoadMin              0x3A //Addr: 58 - Default: 0x000000
#define CS5484_REG_SYSgain              0x3C //Addr: 60 - Default: 0x500000
#define CS5484_REG_Time                 0x3D //Addr: 61 - Default: 0x000000

//Page 17
#define CS5484_REG_V1SagDur             0x00 //Addr:  0 - Default: 0x000000
#define CS5484_REG_V1SagLevel           0x01 //Addr:  1 - Default: 0x000000
#define CS5484_REG_I1OverDur            0x04 //Addr:  4 - Default: 0x000000
#define CS5484_REG_I1OverLevel          0x05 //Addr:  5 - Default: 0x7FFFFF
#define CS5484_REG_V2SagDur             0x08 //Addr:  8 - Default: 0x000000
#define CS5484_REG_V2SagLevel           0x09 //Addr:  9 - Default: 0x000000
#define CS5484_REG_I2OverDur            0x0C //Addr: 12 - Default: 0x000000
#define CS5484_REG_I2OverLevel          0x0D //Addr: 13 - Default: 0x7FFFFF

//Page 18
#define CS5484_REG_IZXLevel             0x18 //Addr: 24 - Default: 0x100000
#define CS5484_REG_PulseRate            0x1C //Addr: 28 - Default: 0x800000
#define CS5484_REG_INTgain              0x2B //Addr: 43 - Default: 0x143958
#define CS5484_REG_V1SwellDur           0x2E //Addr: 46 - Default: 0x000000
#define CS5484_REG_V1SwellLevel         0x2F //Addr: 47 - Default: 0x7FFFFF
#define CS5484_REG_V2SwellDur           0x32 //Addr: 50 - Default: 0x000000
#define CS5484_REG_V2SwellLevel         0x33 //Addr: 51 - Default: 0x7FFFFF
#define CS5484_REG_VZXLevel             0x3A //Addr: 58 - Default: 0x100000
#define CS5484_REG_CycleCount           0x3E //Addr: 62 - Default: 0x000064
#define CS5484_REG_Scale                0x3F //Addr: 63 - Default: 0x4CCCCC

/*----------------------------------------------------------------------------*/

//Config0 Bits
#define CS5484_BIT_TSEL                 (1 << 23)
#define CS5484_BIT_iCPUCLK              (1 << 21)
#define CS5484_BIT_CPUCLK_ON            (1 << 20)
#define CS5484_BIT_V2CAP                (1 << 13)
#define CS5484_BIT_INT_POL              (1 << 8)
#define CS5484_BIT_I2PGA                (1 << 6)
#define CS5484_BIT_I1PGA                (1 << 4)
#define CS5484_BIT_NO_OSC               (1 << 2)
#define CS5484_BIT_IZX_CH               (1 << 1)
#define CS5484_BIT_VZX_CH               (1 << 0)

//Config1 Bits
#define CS5484_BIT_EPG4_ON              (1 << 23)
#define CS5484_BIT_EPG3_ON              (1 << 22)
#define CS5484_BIT_EPG2_ON              (1 << 21)
#define CS5484_BIT_EPG1_ON              (1 << 20)
#define CS5484_BIT_DO4_OD               (1 << 19)
#define CS5484_BIT_DO3_OD               (1 << 18)
#define CS5484_BIT_DO2_OD               (1 << 17)
#define CS5484_BIT_DO1_OD               (1 << 16)
#define CS5484_BIT_DO4_MODE             (1 << 12)
#define CS5484_BIT_DO3_MODE             (1 << 8)
#define CS5484_BIT_DO2_MODE             (1 << 4)
#define CS5484_BIT_DO1_MODE             (1 << 0)

//Config2 Bits
#define CS5484_BIT_POS                  (1 << 22)
#define CS5484_BIT_APCM                 (1 << 14)
#define CS5484_BIT_ZX_LPF               (1 << 12)
#define CS5484_BIT_AVG_MODE             (1 << 11)
#define CS5484_BIT_REG_CSUM_OFF         (1 << 10)
#define CS5484_BIT_AFC                  (1 << 9)
#define CS5484_BIT_I2FLT                (1 << 7)
#define CS5484_BIT_V2FLT                (1 << 5)
#define CS5484_BIT_I1FLT                (1 << 3)
#define CS5484_BIT_V1FLT                (1 << 1)
#define CS5484_BIT_IIR_OFF              (1 << 0)

//Bits...
#define CS5484_BIT_

#ifdef __cplusplus
}
#endif
#endif // CS5484_H
