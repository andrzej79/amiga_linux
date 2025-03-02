#ifndef CSWARPAMICOMMDATA_SD_H
#define CSWARPAMICOMMDATA_SD_H

#pragma pack(2)

typedef struct
{
  uint8_t  CSDStruct;            /*!< CSD structure                         */
  uint8_t  SysSpecVersion;       /*!< System specification version          */
  uint8_t  Reserved1;            /*!< Reserved                              */
  uint8_t  TAAC;                 /*!< Data read access time 1               */
  uint8_t  NSAC;                 /*!< Data read access time 2 in CLK cycles */
  uint8_t  MaxBusClkFrec;        /*!< Max. bus clock frequency              */
  uint16_t CardComdClasses;      /*!< Card command classes                  */
  uint8_t  RdBlockLen;           /*!< Max. read data block length           */
  uint8_t  PartBlockRead;        /*!< Partial blocks for read allowed       */
  uint8_t  WrBlockMisalign;      /*!< Write block misalignment              */
  uint8_t  RdBlockMisalign;      /*!< Read block misalignment               */
  uint8_t  DSRImpl;              /*!< DSR implemented                       */
  uint8_t  Reserved2;            /*!< Reserved                              */
  uint32_t DeviceSize;           /*!< Device Size                           */
  uint8_t  MaxRdCurrentVDDMin;   /*!< Max. read current @ VDD min           */
  uint8_t  MaxRdCurrentVDDMax;   /*!< Max. read current @ VDD max           */
  uint8_t  MaxWrCurrentVDDMin;   /*!< Max. write current @ VDD min          */
  uint8_t  MaxWrCurrentVDDMax;   /*!< Max. write current @ VDD max          */
  uint8_t  DeviceSizeMul;        /*!< Device size multiplier                */
  uint8_t  EraseGrSize;          /*!< Erase group size                      */
  uint8_t  EraseGrMul;           /*!< Erase group size multiplier           */
  uint8_t  WrProtectGrSize;      /*!< Write protect group size              */
  uint8_t  WrProtectGrEnable;    /*!< Write protect group enable            */
  uint8_t  ManDeflECC;           /*!< Manufacturer default ECC              */
  uint8_t  WrSpeedFact;          /*!< Write speed factor                    */
  uint8_t  MaxWrBlockLen;        /*!< Max. write data block length          */
  uint8_t  WriteBlockPaPartial;  /*!< Partial blocks for write allowed      */
  uint8_t  Reserved3;            /*!< Reserved                              */
  uint8_t  ContentProtectAppli;  /*!< Content protection application        */
  uint8_t  FileFormatGroup;      /*!< File format group                     */
  uint8_t  CopyFlag;             /*!< Copy flag (OTP)                       */
  uint8_t  PermWrProtect;        /*!< Permanent write protection            */
  uint8_t  TempWrProtect;        /*!< Temporary write protection            */
  uint8_t  FileFormat;           /*!< File format                           */
  uint8_t  ECC;                  /*!< ECC code                              */
  uint8_t  CSD_CRC;              /*!< CSD CRC                               */
  uint8_t  Reserved4;            /*!< Always 1                              */
} AmiCommSD_CSD;

typedef struct
{
  uint8_t  ManufacturerID;  /*!< Manufacturer ID       */
  uint16_t OEM_AppliID;     /*!< OEM/Application ID    */
  uint32_t ProdName1;       /*!< Product Name part1    */
  uint8_t  ProdName2;       /*!< Product Name part2    */
  uint8_t  ProdRev;         /*!< Product Revision      */
  uint32_t ProdSN;          /*!< Product Serial Number */
  uint8_t  Reserved1;       /*!< Reserved1             */
  uint16_t ManufactDate;    /*!< Manufacturing Date    */
  uint8_t  CID_CRC;         /*!< CID CRC               */
  uint8_t  Reserved2;       /*!< Always 1              */
} AmiCommSD_CID;

#pragma pack()

#endif // CSWARPAMICOMMDATA_SD_H
