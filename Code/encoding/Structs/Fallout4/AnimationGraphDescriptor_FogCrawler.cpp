#include <Structs/AnimationGraphDescriptorManager.h>
#include <Structs/Fallout4/AnimationGraphDescriptor_FogCrawler.h>

enum Variables
{
    kiGetUpType = 0,
    kbAnimationDriven = 1,
    kiCombatState = 2,
    kbManualGraphChange = 3,
    kcHitReactionBodyPart = 4,
    kbAllowRotation = 5,
    kbGraphDriven = 6,
    kbGraphDrivenRotation = 7,
    kbGraphDrivenTranslation = 8,
    kiState = 9,
    kiState_FogCrawler = 10,
    kfTimeStep = 11,
    kfSpineTwistGainAdj = 12,
    kfSpineTwistGain = 13,
    kSpineXTwist = 14,
    kSpineValueMinMax = 15,
    kSpineYTwist = 16,
    kSpineZTwist = 17,
    kfRArmTwistGainAdj = 18,
    kfRArmTwistGain = 19,
    kRArmXTwist = 20,
    kRArmValueMinMax = 21,
    kRArmYTwist = 22,
    kRArmZTwist = 23,
    kfLArmTwistGainAdj = 24,
    kfLArmTwistGain = 25,
    kLArmXTwist = 26,
    kLArmValueMinMax = 27,
    kLArmYTwist = 28,
    kLArmZTwist = 29,
    kfHitReactionEndTimer = 30,
    kbReactEnabled = 31,
    kbGraphWantsFootIK = 32,
    km_errorOutTranslation = 33,
    km_alignWithGroundRotation = 34,
    km_worldFromModelFeedbackGain = 35,
    kbGraphWantsHeadTracking = 36,
    kbHeadTrackingEnabled = 37,
    kLookAtOutOfRange = 38,
    kcamerafromx = 39,
    kcamerafromy = 40,
    kcamerafromz = 41,
    kbHeadTrackingDebug = 42,
    kiSyncTurnState = 43,
    kiNonCombatStandingState = 44,
    kiNonCombatLocomotionState = 45,
    kiSyncIdleLocomotion = 46,
    kSpeed = 47,
    kiCombatStandingState = 48,
    kiCombatLocomotionState = 49,
    kIsAttackReady = 50,
    kbEnableAttackMod = 51,
    kDirection = 52,
    kbEquipOk = 53,
    kfRandomClipStartTimePercentage = 54,
    kTurnDeltaSmoothed = 55,
    kbIsSynced = 56,
    kidleTimeMax = 57,
    kidleTimeMin = 58,
    kiSyncForwardState = 59,
    kiLocomotionSpeed = 60,
    kwalkBackSpeedMult = 61,
    kwalkForwardSpeedMult = 62,
    krunForwardSpeedMult = 63,
    kiDynamicAnimSelector = 64,
    kiRecoilSelector = 65,
    krecoilShortMult = 66,
    kcHitReactionDir = 67,
};

AnimationGraphDescriptor_FogCrawler::AnimationGraphDescriptor_FogCrawler(
    AnimationGraphDescriptorManager& aManager)
{
    size_t key = 1058347873633281151;

    AnimationGraphDescriptorManager::Builder s_builder(aManager, key,
        AnimationGraphDescriptor(
            {
                9999
            },
            {
                9999
            },
            {
                9999
            }));
}
