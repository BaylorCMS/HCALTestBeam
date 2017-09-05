//#include <vector>
//#include <string>

#define NUMCHS 4000
#define NUMTS 10

#define HCAL_DET_ngHB 21;
#define HCAL_DET_ngHE 22;
#define HCAL_DET_HBHE 26;
#define HCAL_DET_HF   27;


struct TCalibLedInfo
{
    int numChs;
    int iphi[NUMCHS];
    int ieta[NUMCHS];
    int cBoxChannel[NUMCHS];
    //std::vector<std::string> cBoxString;
    int nTS[NUMCHS];
    double pulse[NUMCHS][NUMTS];
};

struct TQIE8Info
{
    int numChs;
    int numTS;
    int iphi[NUMCHS];
    int ieta[NUMCHS];
    int depth[NUMCHS];
    float pulse[NUMCHS][NUMTS];
    unsigned char pulse_adc[NUMCHS][NUMTS];
    float ped[NUMCHS];
    float ped_adc[NUMCHS];
    bool valid[NUMCHS];
};

struct TQIE11Info
{
    int numChs;
    int numTS;
    int iphi[NUMCHS];
    int ieta[NUMCHS];
    int depth[NUMCHS];
    float pulse[NUMCHS][NUMTS];
    float ped[NUMCHS];
    unsigned char pulse_adc[NUMCHS][NUMTS];
    float ped_adc[NUMCHS];
    bool capid_error[NUMCHS];
    bool link_error[NUMCHS];
    bool soi[NUMCHS][NUMTS];
    int TSn[NUMCHS][NUMTS];
    int Cap_id[NUMCHS][NUMTS];
    int tdc[NUMCHS][NUMTS];
};

struct THCALDigiExtendedInfo
{
    int numChs;
    int detType[NUMCHS];
    int numTS[NUMCHS];
    int iphi[NUMCHS];
    int ieta[NUMCHS];
    int depth[NUMCHS];
    float pulse[NUMCHS][NUMTS];
    float ped[NUMCHS];
    int adc[NUMCHS][NUMTS];
    int tdc[NUMCHS][NUMTS];
    bool capid_error[NUMCHS];
    bool link_error[NUMCHS];
    bool soi[NUMCHS][NUMTS];
    int tsnum[NUMCHS][NUMTS];
    int capid[NUMCHS][NUMTS];
    unsigned char adc_uchar[NUMCHS][NUMTS];
    float ped_adc[NUMCHS];
    bool valid[NUMCHS];
};

struct H2Triggers
{
    //
    //  Standard Triggers
    //
    int ped;
    int led;
    int laser;
    int beam;
    //std::string str;

    //
    //  Added for completeness
    //
    int fakeTrg;
    int inSpillTrg;
};

struct H2BeamCounters
{
    double cer1adc;
    double cer2adc;
    double cer3adc;
    double s1adc;
    double s2adc;
    double s3adc;
    double s4adc;
};

struct H2Timing
{
    int s1Count;
    int s2Count;
    int s3Count;
    int s4Count;

    double triggerTime;
    double ttcL1Atime;
};
