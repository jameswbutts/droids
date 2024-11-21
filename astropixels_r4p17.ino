/*****
 * 
 * Astropixels example sketch. 
 * 
 * This sketch will get the basic Astropixel setup by Darren Poulson working. Pinouts are designed
 * to be used with the Astropixel ESP32 breakout board.
 * 
 * 
 */
#include "ReelTwo.h"
#include "dome/Logics.h"
#include "dome/LogicEngineController.h"
#include "dome/HoloLights.h"
#include "dome/NeoPSI.h"
#include "i2c/I2CReceiver.h"

I2CReceiver i2cReceiver(0x0a);

//AstroPixelRLD<> RLD(LogicEngineRLDDefault, 3);
//AstroPixelFLD<> FLD(LogicEngineFLDDefault, 1);
static LogicEngineSettings LogicEngineRLDCustom(
    LogicEngineDefaults::FRONT_FADE,
    LogicEngineDefaults::FRONT_HUE,
    LogicEngineDefaults::FRONT_DELAY,
    3,//LogicEngineDefaults::FRONT_PAL,
    LogicEngineDefaults::FRONT_BRI,
    LogicEngineDefaults::sequence(LogicEngineDefaults::NORMAL));
AstroPixelRLD<> RLD(LogicEngineRLDCustom, 1);

static LogicEngineSettings LogicEngineFLDCustom(
    LogicEngineDefaults::FRONT_FADE,
    LogicEngineDefaults::FRONT_HUE,
    LogicEngineDefaults::FRONT_DELAY,
    3,//LogicEngineDefaults::FRONT_PAL,
    LogicEngineDefaults::FRONT_BRI + 30,
    LogicEngineDefaults::sequence(LogicEngineDefaults::NORMAL));
AstroPixelFLD<> FLD(LogicEngineFLDCustom, 1);


LogicEngineSettings LogicEngineFrontPSICustom(
    LogicEngineDefaults::FRONT_FADE,
    LogicEngineDefaults::FRONT_HUE,
    LogicEngineDefaults::FRONT_DELAY,
    LogicEngineDefaults::FRONT_PSI_PAL,
    LogicEngineDefaults::FRONT_BRI + 60,
    LogicEngineDefaults::sequence(LogicEngineDefaults::PSICOLORWIPE,LogicEngineDefaults::kCyan)
    );

AstroPixelFrontPSI<> frontPSI(LogicEngineFrontPSICustom, 4);

//AstroPixelFrontPSI<> frontPSI(LogicEngineFrontPSIDefault, 4);
AstroPixelRearPSI<> rearPSI(LogicEngineRearPSIDefault, 5);

HoloLights frontHolo(25, HoloLights::kRGB);
HoloLights rearHolo(26, HoloLights::kRGB);
HoloLights topHolo(27, HoloLights::kRGB);



void setup()
{
    REELTWO_READY();
    SetupEvent::ready();
    RLD.selectScrollTextLeft("... Hello There ....", LogicEngineRenderer::kBlue, 0, 15);
    FLD.selectScrollTextLeft("... R4-P17 ...", LogicEngineRenderer::kRed, 0, 15);
    CommandEvent::process("HPA0026|20");
}

void loop()
{
    AnimatedEvent::process();
}
