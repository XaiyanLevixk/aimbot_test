#include "memory.h"
#include "vector.h"

#include <thread>

namespace offset
{
	constexpr ::std::ptrdiff_t cs_gamerules_data = 0x0;
	constexpr ::std::ptrdiff_t m_ArmorValue = 0x117CC;
	constexpr ::std::ptrdiff_t m_Collision = 0x320;
	constexpr ::std::ptrdiff_t m_CollisionGroup = 0x474;
	constexpr ::std::ptrdiff_t m_Local = 0x2FCC;
	constexpr ::std::ptrdiff_t m_MoveType = 0x25C;
	constexpr ::std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x31D4;
	constexpr ::std::ptrdiff_t m_OriginalOwnerXuidLow = 0x31D0;
	constexpr ::std::ptrdiff_t m_SurvivalGameRuleDecisionTypes = 0x1328;
	constexpr ::std::ptrdiff_t m_SurvivalRules = 0xD00;
	constexpr ::std::ptrdiff_t m_aimPunchAngle = 0x303C;
	constexpr ::std::ptrdiff_t m_aimPunchAngleVel = 0x3048;
	constexpr ::std::ptrdiff_t m_angEyeAnglesX = 0x117D0;
	constexpr ::std::ptrdiff_t m_angEyeAnglesY = 0x117D4;
	constexpr ::std::ptrdiff_t m_bBombDefused = 0x29C0;
	constexpr ::std::ptrdiff_t m_bBombPlanted = 0x9A5;
	constexpr ::std::ptrdiff_t m_bBombTicking = 0x2990;
	constexpr ::std::ptrdiff_t m_bFreezePeriod = 0x20;
	constexpr ::std::ptrdiff_t m_bGunGameImmunity = 0x9990;
	constexpr ::std::ptrdiff_t m_bHasDefuser = 0x117DC;
	constexpr ::std::ptrdiff_t m_bHasHelmet = 0x117C0;
	constexpr ::std::ptrdiff_t m_bInReload = 0x32B5;
	constexpr ::std::ptrdiff_t m_bIsDefusing = 0x997C;
	constexpr ::std::ptrdiff_t m_bIsQueuedMatchmaking = 0x74;
	constexpr ::std::ptrdiff_t m_bIsScoped = 0x9974;
	constexpr ::std::ptrdiff_t m_bIsValveDS = 0x7C;
	constexpr ::std::ptrdiff_t m_bSpotted = 0x93D;
	constexpr ::std::ptrdiff_t m_bSpottedByMask = 0x980;
	constexpr ::std::ptrdiff_t m_bStartedArming = 0x3400;
	constexpr ::std::ptrdiff_t m_bUseCustomAutoExposureMax = 0x9D9;
	constexpr ::std::ptrdiff_t m_bUseCustomAutoExposureMin = 0x9D8;
	constexpr ::std::ptrdiff_t m_bUseCustomBloomScale = 0x9DA;
	constexpr ::std::ptrdiff_t m_clrRender = 0x70;
	constexpr ::std::ptrdiff_t m_dwBoneMatrix = 0x26A8;
	constexpr ::std::ptrdiff_t m_fAccuracyPenalty = 0x3340;
	constexpr ::std::ptrdiff_t m_fFlags = 0x104;
	constexpr ::std::ptrdiff_t m_flC4Blow = 0x29A0;
	constexpr ::std::ptrdiff_t m_flCustomAutoExposureMax = 0x9E0;
	constexpr ::std::ptrdiff_t m_flCustomAutoExposureMin = 0x9DC;
	constexpr ::std::ptrdiff_t m_flCustomBloomScale = 0x9E4;
	constexpr ::std::ptrdiff_t m_flDefuseCountDown = 0x29BC;
	constexpr ::std::ptrdiff_t m_flDefuseLength = 0x29B8;
	constexpr ::std::ptrdiff_t m_flFallbackWear = 0x31E0;
	constexpr ::std::ptrdiff_t m_flFlashDuration = 0x10470;
	constexpr ::std::ptrdiff_t m_flFlashMaxAlpha = 0x1046C;
	constexpr ::std::ptrdiff_t m_flLastBoneSetupTime = 0x2928;
	constexpr ::std::ptrdiff_t m_flLowerBodyYawTarget = 0x9ADC;
	constexpr ::std::ptrdiff_t m_flNextAttack = 0x2D80;
	constexpr ::std::ptrdiff_t m_flNextPrimaryAttack = 0x3248;
	constexpr ::std::ptrdiff_t m_flSimulationTime = 0x268;
	constexpr ::std::ptrdiff_t m_flTimerLength = 0x29A4;
	constexpr ::std::ptrdiff_t m_hActiveWeapon = 0x2F08;
	constexpr ::std::ptrdiff_t m_hBombDefuser = 0x29C4;
	constexpr ::std::ptrdiff_t m_hMyWeapons = 0x2E08;
	constexpr ::std::ptrdiff_t m_hObserverTarget = 0x339C;
	constexpr ::std::ptrdiff_t m_hOwner = 0x29DC;
	constexpr ::std::ptrdiff_t m_hOwnerEntity = 0x14C;
	constexpr ::std::ptrdiff_t m_hViewModel = 0x3308;
	constexpr ::std::ptrdiff_t m_iAccountID = 0x2FD8;
	constexpr ::std::ptrdiff_t m_iClip1 = 0x3274;
	constexpr ::std::ptrdiff_t m_iCompetitiveRanking = 0x1A84;
	constexpr ::std::ptrdiff_t m_iCompetitiveWins = 0x1B88;
	constexpr ::std::ptrdiff_t m_iCrosshairId = 0x11838;
	constexpr ::std::ptrdiff_t m_iDefaultFOV = 0x333C;
	constexpr ::std::ptrdiff_t m_iEntityQuality = 0x2FBC;
	constexpr ::std::ptrdiff_t m_iFOV = 0x31F4;
	constexpr ::std::ptrdiff_t m_iFOVStart = 0x31F8;
	constexpr ::std::ptrdiff_t m_iGlowIndex = 0x10488;
	constexpr ::std::ptrdiff_t m_iHealth = 0x100;
	constexpr ::std::ptrdiff_t m_iItemDefinitionIndex = 0x2FBA;
	constexpr ::std::ptrdiff_t m_iItemIDHigh = 0x2FD0;
	constexpr ::std::ptrdiff_t m_iMostRecentModelBoneCounter = 0x2690;
	constexpr ::std::ptrdiff_t m_iObserverMode = 0x3388;
	constexpr ::std::ptrdiff_t m_iShotsFired = 0x103E0;
	constexpr ::std::ptrdiff_t m_iState = 0x3268;
	constexpr ::std::ptrdiff_t m_iTeamNum = 0xF4;
	constexpr ::std::ptrdiff_t m_lifeState = 0x25F;
	constexpr ::std::ptrdiff_t m_nBombSite = 0x2994;
	constexpr ::std::ptrdiff_t m_nFallbackPaintKit = 0x31D8;
	constexpr ::std::ptrdiff_t m_nFallbackSeed = 0x31DC;
	constexpr ::std::ptrdiff_t m_nFallbackStatTrak = 0x31E4;
	constexpr ::std::ptrdiff_t m_nForceBone = 0x268C;
	constexpr ::std::ptrdiff_t m_nModelIndex = 0x258;
	constexpr ::std::ptrdiff_t m_nTickBase = 0x3440;
	constexpr ::std::ptrdiff_t m_nViewModelIndex = 0x29D0;
	constexpr ::std::ptrdiff_t m_rgflCoordinateFrame = 0x444;
	constexpr ::std::ptrdiff_t m_szCustomName = 0x304C;
	constexpr ::std::ptrdiff_t m_szLastPlaceName = 0x35C4;
	constexpr ::std::ptrdiff_t m_thirdPersonViewAngles = 0x31E8;
	constexpr ::std::ptrdiff_t m_vecOrigin = 0x138;
	constexpr ::std::ptrdiff_t m_vecVelocity = 0x114;
	constexpr ::std::ptrdiff_t m_vecViewOffset = 0x108;
	constexpr ::std::ptrdiff_t m_viewPunchAngle = 0x3030;
	constexpr ::std::ptrdiff_t m_zoomLevel = 0x33E0;
	constexpr ::std::ptrdiff_t anim_overlays = 0x2990;
	constexpr ::std::ptrdiff_t clientstate_choked_commands = 0x4D30;
	constexpr ::std::ptrdiff_t clientstate_delta_ticks = 0x174;
	constexpr ::std::ptrdiff_t clientstate_last_outgoing_command = 0x4D2C;
	constexpr ::std::ptrdiff_t clientstate_net_channel = 0x9C;
	constexpr ::std::ptrdiff_t convar_name_hash_table = 0x2F190;
	constexpr ::std::ptrdiff_t dwClientState = 0x58CFDC;
	constexpr ::std::ptrdiff_t dwClientState_GetLocalPlayer = 0x180;
	constexpr ::std::ptrdiff_t dwClientState_IsHLTV = 0x4D48;
	constexpr ::std::ptrdiff_t dwClientState_Map = 0x28C;
	constexpr ::std::ptrdiff_t dwClientState_MapDirectory = 0x188;
	constexpr ::std::ptrdiff_t dwClientState_MaxPlayer = 0x388;
	constexpr ::std::ptrdiff_t dwClientState_PlayerInfo = 0x52C0;
	constexpr ::std::ptrdiff_t dwClientState_State = 0x108;
	constexpr ::std::ptrdiff_t dwClientState_ViewAngles = 0x4D90;
	constexpr ::std::ptrdiff_t dwEntityList = 0x4DDD93C;
	constexpr ::std::ptrdiff_t dwForceAttack = 0x320DE5C;
	constexpr ::std::ptrdiff_t dwForceAttack2 = 0x320DE68;
	constexpr ::std::ptrdiff_t dwForceBackward = 0x320DE08;
	constexpr ::std::ptrdiff_t dwForceForward = 0x320DE8C;
	constexpr ::std::ptrdiff_t dwForceJump = 0x528791C;
	constexpr ::std::ptrdiff_t dwForceLeft = 0x320DE14;
	constexpr ::std::ptrdiff_t dwForceRight = 0x320DE20;
	constexpr ::std::ptrdiff_t dwGameDir = 0x62B900;
	constexpr ::std::ptrdiff_t dwGameRulesProxy = 0x52FB14C;
	constexpr ::std::ptrdiff_t dwGetAllClasses = 0xDEBCAC;
	constexpr ::std::ptrdiff_t dwGlobalVars = 0x58CCE0;
	constexpr ::std::ptrdiff_t dwGlowObjectManager = 0x5326638;
	constexpr ::std::ptrdiff_t dwInput = 0x522EF10;
	constexpr ::std::ptrdiff_t dwInterfaceLinkList = 0x970944;
	constexpr ::std::ptrdiff_t dwLocalPlayer = 0xDC14CC;
	constexpr ::std::ptrdiff_t dwMouseEnable = 0xDC71D8;
	constexpr ::std::ptrdiff_t dwMouseEnablePtr = 0xDC71A8;
	constexpr ::std::ptrdiff_t dwPlayerResource = 0x320C1A0;
	constexpr ::std::ptrdiff_t dwRadarBase = 0x52126B4;
	constexpr ::std::ptrdiff_t dwSensitivity = 0xDC7074;
	constexpr ::std::ptrdiff_t dwSensitivityPtr = 0xDC7048;
	constexpr ::std::ptrdiff_t dwSetClanTag = 0x8A410;
	constexpr ::std::ptrdiff_t dwViewMatrix = 0x4DCF254;
	constexpr ::std::ptrdiff_t dwWeaponTable = 0x522F9D4;
	constexpr ::std::ptrdiff_t dwWeaponTableIndex = 0x326C;
	constexpr ::std::ptrdiff_t dwYawPtr = 0xDC6E38;
	constexpr ::std::ptrdiff_t dwZoomSensitivityRatioPtr = 0xDCD620;
	constexpr ::std::ptrdiff_t dwbSendPackets = 0xD8632;
	constexpr ::std::ptrdiff_t dwppDirect3DDevice9 = 0xA6050;
	constexpr ::std::ptrdiff_t find_hud_element = 0x273D5CF0;
	constexpr ::std::ptrdiff_t force_update_spectator_glow = 0x3BE5EA;
	constexpr ::std::ptrdiff_t interface_engine_cvar = 0x3EA3C;
	constexpr ::std::ptrdiff_t is_c4_owner = 0x3CB670;
	constexpr ::std::ptrdiff_t m_bDormant = 0xED;
	constexpr ::std::ptrdiff_t m_bIsLocalPlayer = 0x3628;
	constexpr ::std::ptrdiff_t m_flSpawnTime = 0x103C0;
	constexpr ::std::ptrdiff_t m_pStudioHdr = 0x2950;
	constexpr ::std::ptrdiff_t m_pitchClassPtr = 0x5212950;
	constexpr ::std::ptrdiff_t m_yawClassPtr = 0xDC6E38;
	constexpr ::std::ptrdiff_t model_ambient_min = 0x590054;
	constexpr ::std::ptrdiff_t set_abs_angles = 0x1E5AB0;
	constexpr ::std::ptrdiff_t set_abs_origin = 0x1E58F0;
}

constexpr Vector3 CalculateAngle(
	const Vector3& localPosition,
	const Vector3& enemyPosition,
	const Vector3& viewAngles) noexcept
{
	return ((enemyPosition - localPosition).ToAngle() - viewAngles);
}

int main()
{
	// initialize memory class
	auto memory = Memory{ "csgo.exe" };

	// module addresses
	const auto client = memory.GetModuleAddress("client.dll");
	const auto engine = memory.GetModuleAddress("engine.dll");

	// infinite hack loop
	while (true)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(1));

		// aimbot key
		if (!GetAsyncKeyState(VK_RBUTTON))
			continue;

		// get local player
		const auto localPlayer = memory.Read<std::uintptr_t>(client + offset::dwLocalPlayer);
		const auto localTeam = memory.Read<std::int32_t>(localPlayer + offset::m_iTeamNum);

		// eye position = origin + viewOffset
		const auto localEyePosition = memory.Read<Vector3>(localPlayer + offset::m_vecOrigin) +
			memory.Read<Vector3>(localPlayer + offset::m_vecViewOffset);

		const auto clientState = memory.Read<std::uintptr_t>(engine + offset::dwClientState);

		const auto localPlayerId =
			memory.Read<std::int32_t>(clientState + offset::dwClientState_GetLocalPlayer);

		const auto viewAngles = memory.Read<Vector3>(clientState + offset::dwClientState_ViewAngles);
		const auto aimPunch = memory.Read<Vector3>(localPlayer + offset::m_aimPunchAngle) * 2;

		// aimbot fov
		auto bestFov = 13.f;
		auto bestAngle = Vector3{ };

		for (auto i = 1; i <= 32; ++i)
		{
			const auto player = memory.Read<std::uintptr_t>(client + offset::dwEntityList + i * 0x10);

			if (memory.Read<std::int32_t>(player + offset::m_iTeamNum) == localTeam)
				continue;

			if (memory.Read<bool>(player + offset::m_bDormant))
				continue;

			if (memory.Read<std::int32_t>(player + offset::m_lifeState))
				continue;

			if (memory.Read<std::int32_t>(player + offset::m_bSpottedByMask) & (1 << localPlayerId))
			{
				const auto boneMatrix = memory.Read<std::uintptr_t>(player + offset::m_dwBoneMatrix);

				// pos of player head in 3d space
				// 8 is the head bone index :)
				const auto playerHeadPosition = Vector3{
					memory.Read<float>(boneMatrix + 0x30 * 8 + 0x0C),
					memory.Read<float>(boneMatrix + 0x30 * 8 + 0x1C),
					memory.Read<float>(boneMatrix + 0x30 * 8 + 0x2C)
				};

				const auto angle = CalculateAngle(
					localEyePosition,
					playerHeadPosition,
					viewAngles + aimPunch
				);

				const auto fov = std::hypot(angle.x, angle.y);

				if (fov < bestFov)
				{
					bestFov = fov;
					bestAngle = angle;
				}
			}
		}

		// if we have a best angle, do aimbot
		if (!bestAngle.IsZero())
			memory.Write<Vector3>(clientState + offset::dwClientState_ViewAngles, viewAngles + bestAngle); // smoothing
	}

	return 0;
}