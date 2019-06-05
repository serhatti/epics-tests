#include <stdio.h>
#include <subRecord.h>
#include <registryFunction.h>
#include <epicsExport.h>
#include <random>


//Bu subroutine ler scan altinda belirli araliklarla cagirilacaklar
//PV yi update edecekler. Elimde cihaz ve driverlari olmadigi icin bunu simulator olarak kullanacagim
//Bunlar daha sonra "sub" recordlardan execute edip PV degerleri uretecekler


static std::default_random_engine gen;
static std::normal_distribution<double> gauss(200,100);
static std::uniform_real_distribution<double> uniform(1,10);

static int incrementByOne(subRecord *precord) {
    precord->val++;
    return 0;
}

static int makeGaussian(subRecord *precord) {
    precord->val=gauss(gen);
    return 0;
}

static int makeUniform(subRecord *precord) {
    precord->val=uniform(gen);
    return 0;
}



/*Bu fonksiyonlari epics e kaydetmek lazim.*/
epicsRegisterFunction(incrementByOne);
epicsRegisterFunction(makeGaussian);
epicsRegisterFunction(makeUniform);
