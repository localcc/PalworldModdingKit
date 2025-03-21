#pragma once
#include "CoreMinimal.h"
#include "EPalWazaID.generated.h"

UENUM()
enum class EPalWazaID : uint16 {
    None,
    Human_Punch,
    WorkAttack,
    Throw,
    Scratch,
    EnergyShot,
    Unique_Anubis_LowRoundKick,
    Unique_Anubis_GroundPunch,
    Unique_Anubis_Tackle,
    Unique_Deer_PushupHorn,
    HyperBeam,
    PowerShot,
    PowerBall,
    Unique_Garm_Bite,
    Intimidate,
    Unique_Boar_Tackle,
    Unique_PinkCat_CatPunch,
    Unique_FlowerDinosaur_Whip,
    Unique_SheepBall_Roll,
    Unique_ChickenPal_ChickenPeck,
    Unique_Gorilla_GroundPunch,
    Unique_Grassmammoth_Earthquake,
    AirCanon,
    Unique_GrassPanda_MusclePunch,
    Unique_RobinHood_BowSnipe,
    Unique_Alpaca_Tackle,
    Unique_KingAlpaca_BodyPress,
    Unique_Werewolf_Scratch,
    Unique_FengyunDeeper_CloudTempest,
    Unique_Baphomet_SwallowKite,
    Unique_HerculesBeetle_BeetleTackle,
    Unique_HawkBird_Storm,
    Unique_Eagle_GlidingNail,
    SelfDestruct,
    SelfDestruct_Bee,
    SelfExplosion,
    FireBlast,
    Flamethrower,
    FireBall,
    FlareArrow,
    FireSeed,
    Unique_Horus_FlareBird,
    FlareTornado,
    Inferno,
    Unique_FireKirin_Tackle,
    Unique_AmaterasuWolf_FireCharge,
    Unique_VolcanicMonster_MagmaAttack,
    Unique_FlameBuffalo_FlameHorn,
    Eruption,
    FlameWall,
    FlameFunnel,
    WaterGun,
    WaterWave,
    HydroPump,
    WaterBall,
    TidalWave,
    AquaJet,
    BubbleShot,
    AcidRain,
    SeaGush,
    RipTide,
    DiversionLaser,
    HydroSlicer,
    Unique_BluePlatypus_Toboggan,
    Unique_TentacleTurtle_HydroSpin,
    WindCutter,
    GrassTornado,
    SolarBeam,
    SeedMachinegun,
    SeedMine,
    RootAttack,
    SpecialCutter,
    CrossWind,
    ReflectiveShuriken,
    HealingTree,
    Unique_QueenBee_SpinLance,
    ThunderRain,
    ThunderBall,
    LineThunder,
    CrossThunder,
    ThreeThunder,
    ElecWave,
    Thunderbolt,
    ThunderFunnel,
    SpreadPulse,
    LockonLaser,
    LightningStrike,
    ThunderSpear,
    Unique_ElecPanda_ElecScratch,
    Unique_Kirin_LightningTackle,
    IceMissile,
    BlizzardLance,
    SnowStorm,
    IcicleThrow,
    IceBlade,
    Unique_IceHorse_IceBladeAttack,
    Unique_IceNarwhal_JumpingHorn,
    SandTornado,
    ThrowRock,
    RockLance,
    MudShot,
    StoneShotgun,
    Unique_DrillGame_ShellAttack,
    DarkLaser,
    DarkWave,
    ShadowBall,
    Psychokinesis,
    PoisonShot,
    GhostFlame,
    GravityShot,
    Unique_DarkCrow_TelePoke,
    DragonMeteor,
    DragonBreath,
    DragonWave,
    DragonCanon,
    Unique_FairyDragon_FairyTornado,
    Funnel_DreamDemon,
    Funnel_RaijinDaughter,
    StardustArrow,
    Tremor,
    FrostBreath,
    DiamondFall,
    BeamSlicer,
    Commet,
    DarkBall,
    PoisonFog,
    DarkLegion,
    DarkCanon,
    DarkArrow,
    DarkPulse,
    Apocalypse,
    StarMine,
    AirBlade,
    HolyBlast,
    RootLance,
    LineGeyser,
    WallSplash,
    TriSpark,
    ThunderStorm,
    SandTwister,
    IcicleLine,
    ThreeCommet,
    CommetRain,
    BlastCanon,
    ChargeCanon,
    RangeThunder,
    Railbolt,
    ShokeiLaser,
    BubbleShower,
    WaterBalloon,
    IciclePierce,
    DoubleIcicleThrow,
    IceAge,
    RaidCutter,
    WindEdge,
    FlareTwister,
    TrisRing,
    Unique_BirdDragon_FireBreath,
    Unique_BlackMetalDragon_FirePunch,
    Unique_DarkScorpion_Pierce,
    Unique_GhostBeast_Tossin,
    Unique_JetDragon_JumpBeam,
    Unique_ThunderBird_ThunderStorm,
    Unique_Yeti_SnowBall,
    Unique_NaughtyCat_CatPress,
    Unique_IceDeer_IceHorn,
    Unique_KingBahamut_AirCrash,
    Unique_Manticore_InfernoStrike,
    Unique_SoldierBee_NeedleLance,
    Unique_ThunderDog_InazumaShorai,
    Unique_BlackCentaur_TwoSpearRushes,
    Unique_BlackGriffon_TackleLaser,
    Unique_SakuraSaurus_SideTackle,
    Unique_ThunderDragonMan_ThunderSwordAttack,
    Unique_RedArmorBird_TriplePeck,
    Unique_CaptainPenguin_BodySlide,
    Unique_Ronin_Iai,
    Unique_GrassRabbitMan_GrassRoundKick,
    Unique_SaintCentaur_OneSpearRushes,
    Unique_Umihebi_WindingTackle,
    Unique_WeaselDragon_FlyingTackle,
    Unique_WhiteTiger_IceScratch,
    Unique_IceCrocodile_SpitAttack,
    Unique_BirdDragon_Ice_IceBreath,
    Unique_FireKirin_Dark_DarkTossin,
    Unique_VolcanicMonster_Ice_IceAttack,
    Unique_LeafMomonga_SomerSault,
    Unique_Yeti_Grass_GrassBall,
    Unique_GrassPanda_Electric_ElectricPunch,
    Unique_NightLady_WarpBeam,
    Unique_NightLady_WarpBeam_Straight,
    Unique_NightLady_FlameNightmare,
    Unique_MoonQueen_MoonBeam,
    Unique_MoonQueen_MoonBlade,
    Unique_KingBahamut_ArmSmash,
    Unique_WingGolem_RoundCutter,
    Unique_ScorpionMan_Uppercut,
    Unique_FeatherOstrich_Tossin,
    Unique_DarkAlien_JumpScractch,
    Unique_SifuDog_Counter,
    Unique_ThunderDragonMan_NumerousSwordAttack,
    Unique_ElecPanda_GatlingAttack,
    Unique_LilyQueen_LilyHealing,
    Unique_LilyQueen_WindBarrier,
    Unique_Horus_PerfectStorm,
    Unique_BlackGriffon_TackleLaser2,
    Unique_MoonQueen_IceMoonBlade,
    Unique_DarkMechaDragon_SetFunnel,
    Unique_DarkMechaDragon_ConvergentBeam,
    Unique_DarkMechaDragon_FunnelLaser,
    Unique_DarkMechaDragon_BeamSlash,
    Unique_DarkMechaDragon_WarpComet,
    Unique_Umihebi_Fire_FireWindingTackle,
    Unique_PurpleSpider_SpiderRaid,
    Unique_MysteryMask_LifeSteal,
    Unique_GrimGirl_BrutalMachete,
    Unique_SnowTigerBeastman_TrampleSlash,
    Unique_SnowTigerBeastman_SnowImpact,
    Unique_WhiteShieldDragon_ShieldTackle,
    Unique_NightBlueHorse_DeathStep,
    Unique_BlueThunderHorse_FlashDash,
    Unique_WhiteDeer_HolyPillar,
    Unique_GoldenHorse_StoneDash,
    Unique_WhiteTiger_Ground_IronScratch,
    Unique_FengyunDeeper_Electric_ThunderTempest,
    Unique_Werewolf_Ice_SnowScratch,
    Unique_Horus_Water_AquaStorm,
    Unique_AmaterasuWolf_Dark_DarkCharge,
    Unique_OctopursGirl_InkJet,
    Unique_StuffedShark_HiddenWeapon,
    Unique_Plesiosaur_LongBreath,
    Unique_TropicalOstrich_DashKick,
    Unique_GhostAnglerfish_SweepBait,
    Unique_Yakushima_SummonServant,
    Unique_Yakushima_EyeTossin,
    Unique_Yakushima_MouthTossin,
    PredatorBeam,
    PredatorWave,
    PredatorLockon,
    RockBeat,
    IceWall,
    Funnel_RaijinDaughter_Water,
    BlueThunderHorse_PartnerSkill,
    Unique_YakushimaBoss002_PhantasmalBolt,
    Unique_YakushimaBoss002_PhantasmalEye,
    Unique_YakushimaBoss002_PhantasmalSphere,
    Unique_YakushimaBoss002_PhantasmalDeathray,
    Unique_YakushimaBoss002_Eye_PhantasmalEye,
    Unique_YakushimaBoss002_Eye_PhantasmalSphere,
    Unique_YakushimaBoss002_Eye_PhantasmalDeathray,
    Reserve_91,
    Reserve_92,
    Reserve_93,
    Reserve_94,
    Reserve_95,
    Reserve_96,
    Reserve_97,
    Reserve_257,
    Reserve_258,
    Reserve_259,
    Reserve_260,
    Reserve_261,
    Reserve_262,
    Reserve_263,
    Reserve_264,
    Reserve_265,
    Reserve_266,
    Reserve_267,
    Reserve_268,
    Reserve_269,
    Reserve_270,
    MAX,
};

