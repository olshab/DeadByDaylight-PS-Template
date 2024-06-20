#include "PerformanceAnalytics.h"

FPerformanceAnalytics::FPerformanceAnalytics()
{
	this->AverageFPS = 0.0f;
	this->MinFPS = 0.0f;
	this->MaxFPS = 0.0f;
	this->AverageFrameTime = 0.0f;
	this->MinFrameTime = 0.0f;
	this->MaxFrameTime = 0.0f;
	this->StandardDeviationFrameTime = 0.0f;
	this->PercentBelow60msFrameTime = 0.0f;
	this->PercentBelow47msFrameTime = 0.0f;
	this->PercentBelow34msFrameTime = 0.0f;
	this->PercentBelow17msFrameTime = 0.0f;
	this->PercentHitchesFrameTime = 0.0f;
	this->AverageRenderThreadTime = 0.0f;
	this->MinRenderThreadTime = 0.0f;
	this->MaxRenderThreadTime = 0.0f;
	this->StandardDeviationRenderThreadTime = 0.0f;
	this->PercentBelow60msRenderThreadTime = 0.0f;
	this->PercentBelow47msRenderThreadTime = 0.0f;
	this->PercentBelow34msRenderThreadTime = 0.0f;
	this->PercentBelow17msRenderThreadTime = 0.0f;
	this->PercentHitchesRenderThreadTime = 0.0f;
	this->AverageGameThreadTime = 0.0f;
	this->MinGameThreadTime = 0.0f;
	this->MaxGameThreadTime = 0.0f;
	this->StandardDeviationGameThreadTime = 0.0f;
	this->PercentBelow60msGameThreadTime = 0.0f;
	this->PercentBelow47msGameThreadTime = 0.0f;
	this->PercentBelow34msGameThreadTime = 0.0f;
	this->PercentBelow17msGameThreadTime = 0.0f;
	this->PercentHitchesGameThreadTime = 0.0f;
	this->AverageRhiThreadTime = 0.0f;
	this->MinRhiThreadTime = 0.0f;
	this->MaxRhiThreadTime = 0.0f;
	this->StandardDeviationRhiThreadTime = 0.0f;
	this->PercentBelow60msRhiThreadTime = 0.0f;
	this->PercentBelow47msRhiThreadTime = 0.0f;
	this->PercentBelow34msRhiThreadTime = 0.0f;
	this->PercentBelow17msRhiThreadTime = 0.0f;
	this->PercentHitchesRhiThreadTime = 0.0f;
	this->AverageGpuTime = 0.0f;
	this->MinGpuTime = 0.0f;
	this->MaxGpuTime = 0.0f;
	this->StandardDeviationGpuTime = 0.0f;
	this->PercentBelow60msGpuTime = 0.0f;
	this->PercentBelow47msGpuTime = 0.0f;
	this->PercentBelow34msGpuTime = 0.0f;
	this->PercentBelow17msGpuTime = 0.0f;
	this->PercentHitchesGpuTime = 0.0f;
	this->AverageSlateTickTime = 0.0f;
	this->AverageSlateRenderThreadTime = 0.0f;
	this->AverageSlateDrawWindowTime = 0.0f;
	this->AdaptiveShadowMapAverageNumShadowPrimitivesPerCapture = 0.0f;
	this->AdaptiveShadowMapAverageActiveLightsPerFrame = 0.0f;
	this->AdaptiveShadowMapPercentageOfFrameCapturingTiles = 0.0f;
	this->HitchesPerMinute50ms = 0.0f;
	this->HitchesPerMinute100ms = 0.0f;
	this->HitchesPerMinute200ms = 0.0f;
	this->HitchesPerMinute400ms = 0.0f;
	this->HitchesPerMinute800ms = 0.0f;
	this->HitchesPerMinute1600ms = 0.0f;
	this->HitchesPerMinute3200ms = 0.0f;
	this->HitchesPerMinute6400ms = 0.0f;
	this->HitchesPerMinute12800ms = 0.0f;
	this->AverageInputLatency = 0.0f;
	this->MinInputLatency = 0.0f;
	this->MaxInputLatency = 0.0f;
	this->AverageOutputLatency = 0.0f;
	this->MinOutputLatency = 0.0f;
	this->MaxOutputLatency = 0.0f;
	this->AverageStandardDeviation = 0.0f;
	this->MinStandardDeviation = 0.0f;
	this->MaxStandardDeviation = 0.0f;
	this->DeviceProfile = TEXT("");
	this->MaxMemoryUsedKilobytes = 0;
	this->DynamicResolutionScreenPercentageAvg = 0;
	this->DynamicResolutionScreenPercentageMax = 0;
	this->DynamicResolutionScreenPercentageMin = 0;
	this->MatchCount = 0;
	this->TotalFrames = 0;
	this->ResolutionQuality = 0.0f;
	this->ViewDistanceQuality = 0;
	this->AntiAliasingQuality = 0;
	this->ShadowQuality = 0;
	this->TextureQuality = 0;
	this->EffectsQuality = 0;
	this->FoliageQuality = 0;
	this->Scenario = TEXT("");
	this->Theme = TEXT("");
	this->MapName = TEXT("");
	this->TileListCount = 0;
	this->Seed = 0;
	this->CharacterName = TEXT("");
	this->Cpu = TEXT("");
	this->GpuAdapter = TEXT("");
	this->MatchId = TEXT("");
}