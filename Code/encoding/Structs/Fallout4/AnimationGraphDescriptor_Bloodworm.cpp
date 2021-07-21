#include <Structs/AnimationGraphDescriptorManager.h>
#include <Structs/Fallout4/AnimationGraphDescriptor_Bloodworm.h>

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
    kiState_TheDeepOne = 10,
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
    kiSyncTurnState = 32,
    kiNonCombatStandingState = 33,
    kiSyncIdleLocomotion = 34,
    kSpeed = 35,
    kIsAttackReady = 36,
    kDirection = 37,
    kbEquipOk = 38,
    kfRandomClipStartTimePercentage = 39,
    kTurnDeltaSmoothed = 40,
    kbIsSynced = 41,
    kiSyncForwardState = 42,
    kbGraphWantsHeadTracking = 43,
    kiLocomotionSpeed = 44,
    kwalkBackSpeedMult = 45,
    kwalkForwardSpeedMult = 46,
    krunForwardSpeedMult = 47,
    kiDynamicAnimSelector = 48,
    kiRecoilSelector = 49,
    krecoilShortMult = 50,
    kbIsTunneling = 51,
    kTurnDelta = 52,
    kIsSprinting = 53,
    kiSyncSprintState = 54,
    kbAllowHeadTracking = 55,
};

AnimationGraphDescriptor_Bloodworm::AnimationGraphDescriptor_Bloodworm(
    AnimationGraphDescriptorManager& aManager)
{
    size_t key = 10066806873320352183;

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
