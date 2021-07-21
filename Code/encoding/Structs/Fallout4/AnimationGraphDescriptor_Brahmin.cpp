#include <Structs/AnimationGraphDescriptorManager.h>
#include <Structs/Fallout4/AnimationGraphDescriptor_Brahmin.h>

enum Variables
{
    kiState = 0,
    kiState_Brahmin = 1,
    kbGraphDriven = 2,
    kbGraphDrivenRotation = 3,
    kbGraphDrivenTranslation = 4,
    kbAnimationDriven = 5,
    kbAllowRotation = 6,
    kstaggerDirection = 7,
    kstaggerMagnitude = 8,
    kiGetUpType = 9,
    kiCombatState = 10,
    kbHeadTrackingEnabled = 11,
    kbGraphWantsHeadTrackingRight = 12,
    kcamerafromx = 13,
    kcamerafromy = 14,
    kcamerafromz = 15,
    kbHeadTrackingDebug = 16,
    kVector4Variable_FwdAxis = 17,
    kVector4Variable_upAxis = 18,
    kcHitReactionDir = 19,
    kcHitReactionBodyPart = 20,
    kbGraphWantsHeadTrackingLeft = 21,
    kbSupportedDeathAnim = 22,
    kfTimeStep = 23,
    kLHeadTwistGainAdj = 24,
    kLHeadTwistGain = 25,
    kLHeadXTwist = 26,
    kLHeadValueMinMax = 27,
    kLHeadYTwist = 28,
    kLHeadZTwist = 29,
    kfRHeadTwistGainAdj = 30,
    kfRHeadTwistGain = 31,
    kRHeadXTwist = 32,
    kRHeadValueMinMax = 33,
    kRHeadYTwist = 34,
    kRHeadZTwist = 35,
    kfSpineTwistGainAdj = 36,
    kfSpineTwistGain = 37,
    kSpineXTwist = 38,
    kSpineValueMinMax = 39,
    kSpineYTwist = 40,
    kSpineZTwist = 41,
    kfHitReactionEndTimer = 42,
    kbReactsEnabled = 43,
    kiSyncTurnState = 44,
    kiNonCombatStandingState = 45,
    kiNonCombatLocomotionState = 46,
    kiSyncIdleLocomotion = 47,
    kSpeed = 48,
    kiCombatStandingState = 49,
    kiCombatLocomotionState = 50,
    kIsAttackReady = 51,
    kbEnableAttackMod = 52,
    kbEquipOk = 53,
    kfRandomClipStartTimePercentage = 54,
    kbIsLaying = 55,
    kbIsGrazing = 56,
    kidleTimeMin = 57,
    kidleTimeMax = 58,
    kiLocomotionSpeed = 59,
    kiSyncForwardState = 60,
    kDirection = 61,
    kRunSpeedMult = 62,
    ktrotSpeedMult = 63,
    kwalkForwardSpeedMult = 64,
    kwalkBackwardSpeedMult = 65,
    kiDynamicAnimSelector = 66,
    kbForceIdleStop = 67,
    kbIsSynced = 68,
    kbAllowHeadTracking = 69,
    kLookAtOutOfRange = 70,
    kLookAtChest_Enabled = 71,
    kLookAtSpine2_Enabled = 72,
    kbFreezeSpeedUpdate = 73,
    kiIsInSneak = 74,
    kbGraphWantsFootIK = 75,
    kbRenderFirstPersonInWorld = 76,
    kbDisableSpineTracking = 77,
    kIsPlayer = 78,
    kbBlockPOVSwitch = 79,
    kbBlockPipboy = 80,
    kPose = 81,
    kbAdjust1stPersonFOV = 82,
    kiRecoilSelector = 83,
    kTurnDelta = 84,
    kIsBlocking = 85,
    kiSyncWalkRun = 86,
    kbManualGraphChange = 87,
    krecoilShortMult = 88,
    kLookAtOutsideLimit = 89,
    kbDoNotInterrupt = 90,
    kLookAtLimitAngleDeg = 91,
    kLookAtChest_LimitAngleDeg = 92,
    kLookAtNeck_LimitAngleDeg = 93,
    kLookAtHead_LimitAngleDeg = 94,
    kLookAtHead_OnGain = 95,
    kLookAtAdditive = 96,
    kbEnableRoot_IsActiveMod = 97,
    kIsNPC = 98,
    kLookAtOnGain = 99,
    kLookAtOffGain = 100,
    kbTalkableWithItem = 101,
    kiTalkGenerator = 102,
    kbFreezeRotationUpdate = 103,
    kiPcapTalkGenerator = 104,
    kSpeedSmoothed = 105,
    kTurnDeltaSmoothed = 106,
    kbIsInFlavor = 107,
};

AnimationGraphDescriptor_Brahmin::AnimationGraphDescriptor_Brahmin(
    AnimationGraphDescriptorManager& aManager)
{
    size_t key = 16585303364030699232;

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
