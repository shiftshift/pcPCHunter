#include <ntifs.h>

PWCHAR g_SssdtFunctionName[0x400] =
{
	L"NtUserGetThreadState"
	,L"NtUserPeekMessage"
	,L"NtUserCallOneParam"
	,L"NtUserGetKeyState"
	,L"NtUserInvalidateRect"
	,L"NtUserCallNoParam"
	,L"NtUserGetMessage"
	,L"NtUserMessageCall"
	,L"NtGdiBitBlt"
	,L"NtGdiGetCharSet"
	,L"NtUserGetDC"
	,L"NtGdiSelectBitmap"
	,L"NtUserWaitMessage"
	,L"NtUserTranslateMessage"
	,L"NtUserGetProp"
	,L"NtUserPostMessage"
	,L"NtUserQueryWindow"
	,L"NtUserTranslateAccelerator"
	,L"NtGdiFlush"
	,L"NtUserRedrawWindow"
	,L"NtUserWindowFromPoint"
	,L"NtUserCallMsgFilter"
	,L"NtUserValidateTimerCallback"
	,L"NtUserBeginPaint"
	,L"NtUserSetTimer"
	,L"NtUserEndPaint"
	,L"NtUserSetCursor"
	,L"NtUserKillTimer"
	,L"NtUserBuildHwndList"
	,L"NtUserSelectPalette"
	,L"NtUserCallNextHookEx"
	,L"NtUserHideCaret"
	,L"NtGdiIntersectClipRect"
	,L"NtUserCallHwndLock"
	,L"NtUserGetProcessWindowStation"
	,L"NtGdiDeleteObjectApp"
	,L"NtUserSetWindowPos"
	,L"NtUserShowCaret"
	,L"NtUserEndDeferWindowPosEx"
	,L"NtUserCallHwndParamLock"
	,L"NtUserVkKeyScanEx"
	,L"NtGdiSetDIBitsToDeviceInternal"
	,L"NtUserCallTwoParam"
	,L"NtGdiGetRandomRgn"
	,L"NtUserCopyAcceleratorTable"
	,L"NtUserNotifyWinEvent"
	,L"NtGdiExtSelectClipRgn"
	,L"NtUserIsClipboardFormatAvailable"
	,L"NtUserSetScrollInfo"
	,L"NtGdiStretchBlt"
	,L"NtUserCreateCaret"
	,L"NtGdiRectVisible"
	,L"NtGdiCombineRgn"
	,L"NtGdiGetDCObject"
	,L"NtUserDispatchMessage"
	,L"NtUserRegisterWindowMessage"
	,L"NtGdiExtTextOutW"
	,L"NtGdiSelectFont"
	,L"NtGdiRestoreDC"
	,L"NtGdiSaveDC"
	,L"NtUserGetForegroundWindow"
	,L"NtUserShowScrollBar"
	,L"NtUserFindExistingCursorIcon"
	,L"NtGdiGetDCDword"
	,L"NtGdiGetRegionData"
	,L"NtGdiLineTo"
	,L"NtUserSystemParametersInfo"
	,L"NtGdiGetAppClipBox"
	,L"NtUserGetAsyncKeyState"
	,L"NtUserGetCPD"
	,L"NtUserRemoveProp"
	,L"NtGdiDoPalette"
	,L"NtGdiPolyPolyDraw"
	,L"NtUserSetCapture"
	,L"NtUserEnumDisplayMonitors"
	,L"NtGdiCreateCompatibleBitmap"
	,L"NtUserSetProp"
	,L"NtGdiGetTextCharsetInfo"
	,L"NtUserSBGetParms"
	,L"NtUserGetIconInfo"
	,L"NtUserExcludeUpdateRgn"
	,L"NtUserSetFocus"
	,L"NtGdiExtGetObjectW"
	,L"NtUserDeferWindowPos"
	,L"NtUserGetUpdateRect"
	,L"NtGdiCreateCompatibleDC"
	,L"NtUserGetClipboardSequenceNumber"
	,L"NtGdiCreatePen"
	,L"NtUserShowWindow"
	,L"NtUserGetKeyboardLayoutList"
	,L"NtGdiPatBlt"
	,L"NtUserMapVirtualKeyEx"
	,L"NtUserSetWindowLong"
	,L"NtGdiHfontCreate"
	,L"NtUserMoveWindow"
	,L"NtUserPostThreadMessage"
	,L"NtUserDrawIconEx"
	,L"NtUserGetSystemMenu"
	,L"NtGdiDrawStream"
	,L"NtUserInternalGetWindowText"
	,L"NtUserGetWindowDC"
	,L"NtGdiD3dDrawPrimitives2"
	,L"NtGdiInvertRgn"
	,L"NtGdiGetRgnBox"
	,L"NtGdiGetAndSetDCDword"
	,L"NtGdiMaskBlt"
	,L"NtGdiGetWidthTable"
	,L"NtUserScrollDC"
	,L"NtUserGetObjectInformation"
	,L"NtGdiCreateBitmap"
	,L"NtUserFindWindowEx"
	,L"NtGdiPolyPatBlt"
	,L"NtUserUnhookWindowsHookEx"
	,L"NtGdiGetNearestColor"
	,L"NtGdiTransformPoints"
	,L"NtGdiGetDCPoint"
	,L"NtGdiCreateDIBBrush"
	,L"NtGdiGetTextMetricsW"
	,L"NtUserCreateWindowEx"
	,L"NtUserSetParent"
	,L"NtUserGetKeyboardState"
	,L"NtUserToUnicodeEx"
	,L"NtUserGetControlBrush"
	,L"NtUserGetClassName"
	,L"NtGdiAlphaBlend"
	,L"NtGdiDdBlt"
	,L"NtGdiOffsetRgn"
	,L"NtUserDefSetText"
	,L"NtGdiGetTextFaceW"
	,L"NtGdiStretchDIBitsInternal"
	,L"NtUserSendInput"
	,L"NtUserGetThreadDesktop"
	,L"NtGdiCreateRectRgn"
	,L"NtGdiGetDIBitsInternal"
	,L"NtUserGetUpdateRgn"
	,L"NtGdiDeleteClientObj"
	,L"NtUserGetIconSize"
	,L"NtUserFillWindow"
	,L"NtGdiExtCreateRegion"
	,L"NtGdiComputeXformCoefficients"
	,L"NtUserSetWindowsHookEx"
	,L"NtUserNotifyProcessCreate"
	,L"NtGdiUnrealizeObject"
	,L"NtUserGetTitleBarInfo"
	,L"NtGdiRectangle"
	,L"NtUserSetThreadDesktop"
	,L"NtUserGetDCEx"
	,L"NtUserGetScrollBarInfo"
	,L"NtGdiGetTextExtent"
	,L"NtUserSetWindowFNID"
	,L"NtGdiSetLayout"
	,L"NtUserCalcMenuBar"
	,L"NtUserThunkedMenuItemInfo"
	,L"NtGdiExcludeClipRect"
	,L"NtGdiCreateDIBSection"
	,L"NtGdiGetDCforBitmap"
	,L"NtUserDestroyCursor"
	,L"NtUserDestroyWindow"
	,L"NtUserCallHwndParam"
	,L"NtGdiCreateDIBitmapInternal"
	,L"NtUserOpenWindowStation"
	,L"NtGdiDdDeleteSurfaceObject"
	,L"NtGdiDdCanCreateSurface"
	,L"NtGdiDdCreateSurface"
	,L"NtUserSetCursorIconData"
	,L"NtGdiDdDestroySurface"
	,L"NtUserCloseDesktop"
	,L"NtUserOpenDesktop"
	,L"NtUserSetProcessWindowStation"
	,L"NtUserGetAtomName"
	,L"NtGdiDdResetVisrgn"
	,L"NtGdiExtCreatePen"
	,L"NtGdiCreatePaletteInternal"
	,L"NtGdiSetBrushOrg"
	,L"NtUserBuildNameList"
	,L"NtGdiSetPixel"
	,L"NtUserRegisterClassExWOW"
	,L"NtGdiCreatePatternBrushInternal"
	,L"NtUserGetAncestor"
	,L"NtGdiGetOutlineTextMetricsInternalW"
	,L"NtGdiSetBitmapBits"
	,L"NtUserCloseWindowStation"
	,L"NtUserGetDoubleClickTime"
	,L"NtUserEnableScrollBar"
	,L"NtGdiCreateSolidBrush"
	,L"NtUserGetClassInfoEx"
	,L"NtGdiCreateClientObj"
	,L"NtUserUnregisterClass"
	,L"NtUserDeleteMenu"
	,L"NtGdiRectInRegion"
	,L"NtUserScrollWindowEx"
	,L"NtGdiGetPixel"
	,L"NtUserSetClassLong"
	,L"NtUserGetMenuBarInfo"
	,L"NtGdiDdCreateSurfaceEx"
	,L"NtGdiDdCreateSurfaceObject"
	,L"NtGdiGetNearestPaletteIndex"
	,L"NtGdiDdLockD3D"
	,L"NtGdiDdUnlockD3D"
	,L"NtGdiGetCharWidthW"
	,L"NtUserInvalidateRgn"
	,L"NtUserGetClipboardOwner"
	,L"NtUserSetWindowRgn"
	,L"NtUserBitBltSysBmp"
	,L"NtGdiGetCharWidthInfo"
	,L"NtUserValidateRect"
	,L"NtUserCloseClipboard"
	,L"NtUserOpenClipboard"
	,L"NtGdiGetStockObject"
	,L"NtUserSetClipboardData"
	,L"NtUserEnableMenuItem"
	,L"NtUserAlterWindowStyle"
	,L"NtGdiFillRgn"
	,L"NtUserGetWindowPlacement"
	,L"NtGdiModifyWorldTransform"
	,L"NtGdiGetFontData"
	,L"NtUserGetOpenClipboardWindow"
	,L"NtUserSetThreadState"
	,L"NtGdiOpenDCW"
	,L"NtUserTrackMouseEvent"
	,L"NtGdiGetTransform"
	,L"NtUserDestroyMenu"
	,L"NtGdiGetBitmapBits"
	,L"NtUserConsoleControl"
	,L"NtUserSetActiveWindow"
	,L"NtUserSetInformationThread"
	,L"NtUserSetWindowPlacement"
	,L"NtUserGetControlColor"
	,L"NtGdiSetMetaRgn"
	,L"NtGdiSetMiterLimit"
	,L"NtGdiSetVirtualResolution"
	,L"NtGdiGetRasterizerCaps"
	,L"NtUserSetWindowWord"
	,L"NtUserGetClipboardFormatName"
	,L"NtUserRealInternalGetMessage"
	,L"NtUserCreateLocalMemHandle"
	,L"NtUserAttachThreadInput"
	,L"NtGdiCreateHalftonePalette"
	,L"NtUserPaintMenuBar"
	,L"NtUserSetKeyboardState"
	,L"NtGdiCombineTransform"
	,L"NtUserCreateAcceleratorTable"
	,L"NtUserGetCursorFrameInfo"
	,L"NtUserGetAltTabInfo"
	,L"NtUserGetCaretBlinkTime"
	,L"NtGdiQueryFontAssocInfo"
	,L"NtUserProcessConnect"
	,L"NtUserEnumDisplayDevices"
	,L"NtUserEmptyClipboard"
	,L"NtUserGetClipboardData"
	,L"NtUserRemoveMenu"
	,L"NtGdiSetBoundsRect"
	,L"NtGdiGetBitmapDimension"
	,L"NtUserConvertMemHandle"
	,L"NtUserDestroyAcceleratorTable"
	,L"NtUserGetGUIThreadInfo"
	,L"NtGdiCloseFigure"
	,L"NtUserSetWindowsHookAW"
	,L"NtUserSetMenuDefaultItem"
	,L"NtUserCheckMenuItem"
	,L"NtUserSetWinEventHook"
	,L"NtUserUnhookWinEvent"
	,L"NtUserLockWindowUpdate"
	,L"NtUserSetSystemMenu"
	,L"NtUserThunkedMenuInfo"
	,L"NtGdiBeginPath"
	,L"NtGdiEndPath"
	,L"NtGdiFillPath"
	,L"NtUserCallHwnd"
	,L"NtUserDdeInitialize"
	,L"NtUserModifyUserStartupInfoFlags"
	,L"NtUserCountClipboardFormats"
	,L"NtGdiAddFontMemResourceEx"
	,L"NtGdiEqualRgn"
	,L"NtGdiGetSystemPaletteUse"
	,L"NtGdiRemoveFontMemResourceEx"
	,L"NtUserEnumDisplaySettings"
	,L"NtUserPaintDesktop"
	,L"NtGdiExtEscape"
	,L"NtGdiSetBitmapDimension"
	,L"NtGdiSetFontEnumeration"
	,L"NtUserChangeClipboardChain"
	,L"NtUserSetClipboardViewer"
	,L"NtUserShowWindowAsync"
	,L"NtGdiCreateColorSpace"
	,L"NtGdiDeleteColorSpace"
	,L"NtUserActivateKeyboardLayout"
	,L"NtGdiAbortDoc"
	,L"NtGdiAbortPath"
	,L"NtGdiAddEmbFontToDC"
	,L"NtGdiAddFontResourceW"
	,L"NtGdiAddRemoteFontToDC"
	,L"NtGdiAddRemoteMMInstanceToDC"
	,L"NtGdiAngleArc"
	,L"NtGdiAnyLinkedFonts"
	,L"NtGdiArcInternal"
	,L"NtGdiBRUSHOBJ_DeleteRbrush"
	,L"NtGdiBRUSHOBJ_hGetColorTransform"
	,L"NtGdiBRUSHOBJ_pvAllocRbrush"
	,L"NtGdiBRUSHOBJ_pvGetRbrush"
	,L"NtGdiBRUSHOBJ_ulGetBrushColor"
	,L"NtGdiBeginGdiRendering"
	,L"NtGdiCLIPOBJ_bEnum"
	,L"NtGdiCLIPOBJ_cEnumStart"
	,L"NtGdiCLIPOBJ_ppoGetPath"
	,L"NtGdiCancelDC"
	,L"NtGdiChangeGhostFont"
	,L"NtGdiCheckBitmapBits"
	,L"NtGdiClearBitmapAttributes"
	,L"NtGdiClearBrushAttributes"
	,L"NtGdiColorCorrectPalette"
	,L"NtGdiConfigureOPMProtectedOutput"
	,L"NtGdiConvertMetafileRect"
	,L"NtGdiCreateBitmapFromDxSurface"
	,L"NtGdiCreateColorTransform"
	,L"NtGdiCreateEllipticRgn"
	,L"NtGdiCreateHatchBrushInternal"
	,L"NtGdiCreateMetafileDC"
	,L"NtGdiCreateOPMProtectedOutputs"
	,L"NtGdiCreateRoundRectRgn"
	,L"NtGdiCreateServerMetaFile"
	,L"NtGdiD3dContextCreate"
	,L"NtGdiD3dContextDestroy"
	,L"NtGdiD3dContextDestroyAll"
	,L"NtGdiD3dValidateTextureStageState"
	,L"NtGdiDDCCIGetCapabilitiesString"
	,L"NtGdiDDCCIGetCapabilitiesStringLength"
	,L"NtGdiDDCCIGetTimingReport"
	,L"NtGdiDDCCIGetVCPFeature"
	,L"NtGdiDDCCISaveCurrentSettings"
	,L"NtGdiDDCCISetVCPFeature"
	,L"NtGdiDdAddAttachedSurface"
	,L"NtGdiDdAlphaBlt"
	,L"NtGdiDdAttachSurface"
	,L"NtGdiDdBeginMoCompFrame"
	,L"NtGdiDdCanCreateD3DBuffer"
	,L"NtGdiDdColorControl"
	,L"NtGdiDdCreateD3DBuffer"
	,L"NtGdiDdCreateDirectDrawObject"
	,L"NtGdiDdCreateFullscreenSprite"
	,L"NtGdiDdCreateMoComp"
	,L"NtGdiDdDDIAcquireKeyedMutex"
	,L"NtGdiDdDDICheckExclusiveOwnership"
	,L"NtGdiDdDDICheckMonitorPowerState"
	,L"NtGdiDdDDICheckOcclusion"
	,L"NtGdiDdDDICheckSharedResourceAccess"
	,L"NtGdiDdDDICheckVidPnExclusiveOwnership"
	,L"NtGdiDdDDICloseAdapter"
	,L"NtGdiDdDDIConfigureSharedResource"
	,L"NtGdiDdDDICreateAllocation"
	,L"NtGdiDdDDICreateContext"
	,L"NtGdiDdDDICreateDCFromMemory"
	,L"NtGdiDdDDICreateDevice"
	,L"NtGdiDdDDICreateKeyedMutex"
	,L"NtGdiDdDDICreateOverlay"
	,L"NtGdiDdDDICreateSynchronizationObject"
	,L"NtGdiDdDDIDestroyAllocation"
	,L"NtGdiDdDDIDestroyContext"
	,L"NtGdiDdDDIDestroyDCFromMemory"
	,L"NtGdiDdDDIDestroyDevice"
	,L"NtGdiDdDDIDestroyKeyedMutex"
	,L"NtGdiDdDDIDestroyOverlay"
	,L"NtGdiDdDDIDestroySynchronizationObject"
	,L"NtGdiDdDDIEscape"
	,L"NtGdiDdDDIFlipOverlay"
	,L"NtGdiDdDDIGetContextSchedulingPriority"
	,L"NtGdiDdDDIGetDeviceState"
	,L"NtGdiDdDDIGetDisplayModeList"
	,L"NtGdiDdDDIGetMultisampleMethodList"
	,L"NtGdiDdDDIGetOverlayState"
	,L"NtGdiDdDDIGetPresentHistory"
	,L"NtGdiDdDDIGetPresentQueueEvent"
	,L"NtGdiDdDDIGetProcessSchedulingPriorityClass"
	,L"NtGdiDdDDIGetRuntimeData"
	,L"NtGdiDdDDIGetScanLine"
	,L"NtGdiDdDDIGetSharedPrimaryHandle"
	,L"NtGdiDdDDIInvalidateActiveVidPn"
	,L"NtGdiDdDDILock"
	,L"NtGdiDdDDIOpenAdapterFromDeviceName"
	,L"NtGdiDdDDIOpenAdapterFromHdc"
	,L"NtGdiDdDDIOpenKeyedMutex"
	,L"NtGdiDdDDIOpenResource"
	,L"NtGdiDdDDIOpenSynchronizationObject"
	,L"NtGdiDdDDIPollDisplayChildren"
	,L"NtGdiDdDDIPresent"
	,L"NtGdiDdDDIQueryAdapterInfo"
	,L"NtGdiDdDDIQueryAllocationResidency"
	,L"NtGdiDdDDIQueryResourceInfo"
	,L"NtGdiDdDDIQueryStatistics"
	,L"NtGdiDdDDIReleaseKeyedMutex"
	,L"NtGdiDdDDIReleaseProcessVidPnSourceOwners"
	,L"NtGdiDdDDIRender"
	,L"NtGdiDdDDISetAllocationPriority"
	,L"NtGdiDdDDISetContextSchedulingPriority"
	,L"NtGdiDdDDISetDisplayMode"
	,L"NtGdiDdDDISetDisplayPrivateDriverFormat"
	,L"NtGdiDdDDISetGammaRamp"
	,L"NtGdiDdDDISetProcessSchedulingPriorityClass"
	,L"NtGdiDdDDISetQueuedLimit"
	,L"NtGdiDdDDISetVidPnSourceOwner"
	,L"NtGdiDdDDISharedPrimaryLockNotification"
	,L"NtGdiDdDDISharedPrimaryUnLockNotification"
	,L"NtGdiDdDDISignalSynchronizationObject"
	,L"NtGdiDdDDIUnlock"
	,L"NtGdiDdDDIUpdateOverlay"
	,L"NtGdiDdDDIWaitForIdle"
	,L"NtGdiDdDDIWaitForSynchronizationObject"
	,L"NtGdiDdDDIWaitForVerticalBlankEvent"
	,L"NtGdiDdDeleteDirectDrawObject"
	,L"NtGdiDdDestroyD3DBuffer"
	,L"NtGdiDdDestroyFullscreenSprite"
	,L"NtGdiDdDestroyMoComp"
	,L"NtGdiDdEndMoCompFrame"
	,L"NtGdiDdFlip"
	,L"NtGdiDdFlipToGDISurface"
	,L"NtGdiDdGetAvailDriverMemory"
	,L"NtGdiDdGetBltStatus"
	,L"NtGdiDdGetDC"
	,L"NtGdiDdGetDriverInfo"
	,L"NtGdiDdGetDriverState"
	,L"NtGdiDdGetDxHandle"
	,L"NtGdiDdGetFlipStatus"
	,L"NtGdiDdGetInternalMoCompInfo"
	,L"NtGdiDdGetMoCompBuffInfo"
	,L"NtGdiDdGetMoCompFormats"
	,L"NtGdiDdGetMoCompGuids"
	,L"NtGdiDdGetScanLine"
	,L"NtGdiDdLock"
	,L"NtGdiDdNotifyFullscreenSpriteUpdate"
	,L"NtGdiDdQueryDirectDrawObject"
	,L"NtGdiDdQueryMoCompStatus"
	,L"NtGdiDdQueryVisRgnUniqueness"
	,L"NtGdiDdReenableDirectDrawObject"
	,L"NtGdiDdReleaseDC"
	,L"NtGdiDdRenderMoComp"
	,L"NtGdiDdSetColorKey"
	,L"NtGdiDdSetExclusiveMode"
	,L"NtGdiDdSetGammaRamp"
	,L"NtGdiDdSetOverlayPosition"
	,L"NtGdiDdUnattachSurface"
	,L"NtGdiDdUnlock"
	,L"NtGdiDdUpdateOverlay"
	,L"NtGdiDdWaitForVerticalBlank"
	,L"NtGdiDeleteColorTransform"
	,L"NtGdiDescribePixelFormat"
	,L"NtGdiDestroyOPMProtectedOutput"
	,L"NtGdiDestroyPhysicalMonitor"
	,L"NtGdiDoBanding"
	,L"NtGdiDrawEscape"
	,L"NtGdiDvpAcquireNotification"
	,L"NtGdiDvpCanCreateVideoPort"
	,L"NtGdiDvpColorControl"
	,L"NtGdiDvpCreateVideoPort"
	,L"NtGdiDvpDestroyVideoPort"
	,L"NtGdiDvpFlipVideoPort"
	,L"NtGdiDvpGetVideoPortBandwidth"
	,L"NtGdiDvpGetVideoPortConnectInfo"
	,L"NtGdiDvpGetVideoPortField"
	,L"NtGdiDvpGetVideoPortFlipStatus"
	,L"NtGdiDvpGetVideoPortInputFormats"
	,L"NtGdiDvpGetVideoPortLine"
	,L"NtGdiDvpGetVideoPortOutputFormats"
	,L"NtGdiDvpGetVideoSignalStatus"
	,L"NtGdiDvpReleaseNotification"
	,L"NtGdiDvpUpdateVideoPort"
	,L"NtGdiDvpWaitForVideoPortSync"
	,L"NtGdiDxgGenericThunk"
	,L"NtGdiEllipse"
	,L"NtGdiEnableEudc"
	,L"NtGdiEndDoc"
	,L"NtGdiEndGdiRendering"
	,L"NtGdiEndPage"
	,L"NtGdiEngAlphaBlend"
	,L"NtGdiEngAssociateSurface"
	,L"NtGdiEngBitBlt"
	,L"NtGdiEngCheckAbort"
	,L"NtGdiEngComputeGlyphSet"
	,L"NtGdiEngCopyBits"
	,L"NtGdiEngCreateBitmap"
	,L"NtGdiEngCreateClip"
	,L"NtGdiEngCreateDeviceBitmap"
	,L"NtGdiEngCreateDeviceSurface"
	,L"NtGdiEngCreatePalette"
	,L"NtGdiEngDeleteClip"
	,L"NtGdiEngDeletePalette"
	,L"NtGdiEngDeletePath"
	,L"NtGdiEngDeleteSurface"
	,L"NtGdiEngEraseSurface"
	,L"NtGdiEngFillPath"
	,L"NtGdiEngGradientFill"
	,L"NtGdiEngLineTo"
	,L"NtGdiEngLockSurface"
	,L"NtGdiEngMarkBandingSurface"
	,L"NtGdiEngPaint"
	,L"NtGdiEngPlgBlt"
	,L"NtGdiEngStretchBlt"
	,L"NtGdiEngStretchBltROP"
	,L"NtGdiEngStrokeAndFillPath"
	,L"NtGdiEngStrokePath"
	,L"NtGdiEngTextOut"
	,L"NtGdiEngTransparentBlt"
	,L"NtGdiEngUnlockSurface"
	,L"NtGdiEnumFonts"
	,L"NtGdiEnumObjects"
	,L"NtGdiEudcLoadUnloadLink"
	,L"NtGdiExtFloodFill"
	,L"NtGdiFONTOBJ_cGetAllGlyphHandles"
	,L"NtGdiFONTOBJ_cGetGlyphs"
	,L"NtGdiFONTOBJ_pQueryGlyphAttrs"
	,L"NtGdiFONTOBJ_pfdg"
	,L"NtGdiFONTOBJ_pifi"
	,L"NtGdiFONTOBJ_pvTrueTypeFontFile"
	,L"NtGdiFONTOBJ_pxoGetXform"
	,L"NtGdiFONTOBJ_vGetInfo"
	,L"NtGdiFlattenPath"
	,L"NtGdiFontIsLinked"
	,L"NtGdiForceUFIMapping"
	,L"NtGdiFrameRgn"
	,L"NtGdiFullscreenControl"
	,L"NtGdiGetBoundsRect"
	,L"NtGdiGetCOPPCompatibleOPMInformation"
	,L"NtGdiGetCertificate"
	,L"NtGdiGetCertificateSize"
	,L"NtGdiGetCharABCWidthsW"
	,L"NtGdiGetCharacterPlacementW"
	,L"NtGdiGetColorAdjustment"
	,L"NtGdiGetColorSpaceforBitmap"
	,L"NtGdiGetDeviceCaps"
	,L"NtGdiGetDeviceCapsAll"
	,L"NtGdiGetDeviceGammaRamp"
	,L"NtGdiGetDeviceWidth"
	,L"NtGdiGetDhpdev"
	,L"NtGdiGetETM"
	,L"NtGdiGetEmbUFI"
	,L"NtGdiGetEmbedFonts"
	,L"NtGdiGetEudcTimeStampEx"
	,L"NtGdiGetFontFileData"
	,L"NtGdiGetFontFileInfo"
	,L"NtGdiGetFontResourceInfoInternalW"
	,L"NtGdiGetFontUnicodeRanges"
	,L"NtGdiGetGlyphIndicesW"
	,L"NtGdiGetGlyphIndicesWInternal"
	,L"NtGdiGetGlyphOutline"
	,L"NtGdiGetKerningPairs"
	,L"NtGdiGetLinkedUFIs"
	,L"NtGdiGetMiterLimit"
	,L"NtGdiGetMonitorID"
	,L"NtGdiGetNumberOfPhysicalMonitors"
	,L"NtGdiGetOPMInformation"
	,L"NtGdiGetOPMRandomNumber"
	,L"NtGdiGetObjectBitmapHandle"
	,L"NtGdiGetPath"
	,L"NtGdiGetPerBandInfo"
	,L"NtGdiGetPhysicalMonitorDescription"
	,L"NtGdiGetPhysicalMonitors"
	,L"NtGdiGetRealizationInfo"
	,L"NtGdiGetServerMetaFileBits"
	,L"DxgStubAlphaBlt"
	,L"NtGdiGetStats"
	,L"NtGdiGetStringBitmapW"
	,L"NtGdiGetSuggestedOPMProtectedOutputArraySize"
	,L"NtGdiGetTextExtentExW"
	,L"NtGdiGetUFI"
	,L"NtGdiGetUFIPathname"
	,L"NtGdiGradientFill"
	,L"NtGdiHLSurfGetInformation"
	,L"NtGdiHLSurfSetInformation"
	,L"NtGdiHT_Get8BPPFormatPalette"
	,L"NtGdiHT_Get8BPPMaskPalette"
	,L"NtGdiIcmBrushInfo"
	,L"EngRestoreFloatingPointState"
	,L"NtGdiInitSpool"
	,L"NtGdiMakeFontDir"
	,L"NtGdiMakeInfoDC"
	,L"NtGdiMakeObjectUnXferable"
	,L"NtGdiMakeObjectXferable"
	,L"NtGdiMirrorWindowOrg"
	,L"NtGdiMonoBitmap"
	,L"NtGdiMoveTo"
	,L"NtGdiOffsetClipRgn"
	,L"NtGdiPATHOBJ_bEnum"
	,L"NtGdiPATHOBJ_bEnumClipLines"
	,L"NtGdiPATHOBJ_vEnumStart"
	,L"NtGdiPATHOBJ_vEnumStartClipLines"
	,L"NtGdiPATHOBJ_vGetBounds"
	,L"NtGdiPathToRegion"
	,L"NtGdiPlgBlt"
	,L"NtGdiPolyDraw"
	,L"NtGdiPolyTextOutW"
	,L"NtGdiPtInRegion"
	,L"NtGdiPtVisible"
	,L"NtGdiQueryFonts"
	,L"NtGdiRemoveFontResourceW"
	,L"NtGdiRemoveMergeFont"
	,L"NtGdiResetDC"
	,L"NtGdiResizePalette"
	,L"NtGdiRoundRect"
	,L"NtGdiSTROBJ_bEnum"
	,L"NtGdiSTROBJ_bEnumPositionsOnly"
	,L"NtGdiSTROBJ_bGetAdvanceWidths"
	,L"NtGdiSTROBJ_dwGetCodePage"
	,L"NtGdiSTROBJ_vEnumStart"
	,L"NtGdiScaleViewportExtEx"
	,L"NtGdiScaleWindowExtEx"
	,L"NtGdiSelectBrush"
	,L"NtGdiSelectClipPath"
	,L"NtGdiSelectPen"
	,L"NtGdiSetBitmapAttributes"
	,L"NtGdiSetBrushAttributes"
	,L"NtGdiSetColorAdjustment"
	,L"NtGdiSetColorSpace"
	,L"NtGdiSetDeviceGammaRamp"
	,L"NtGdiSetFontXform"
	,L"NtGdiSetIcmMode"
	,L"NtGdiSetLinkedUFIs"
	,L"NtGdiSetMagicColors"
	,L"NtGdiSetOPMSigningKeyAndSequenceNumbers"
	,L"NtGdiSetPUMPDOBJ"
	,L"NtGdiSetPixelFormat"
	,L"NtGdiSetRectRgn"
	,L"NtGdiSetSizeDevice"
	,L"NtGdiSetSystemPaletteUse"
	,L"NtGdiSetTextJustification"
	,L"NtGdiSfmGetNotificationTokens"
	,L"NtGdiStartDoc"
	,L"NtGdiStartPage"
	,L"NtGdiStrokeAndFillPath"
	,L"NtGdiStrokePath"
	,L"NtGdiSwapBuffers"
	,L"NtGdiTransparentBlt"
	,L"NtGdiUMPDEngFreeUserMem"
	,L"DxgStubAlphaBlt"
	,L"EngRestoreFloatingPointState"
	,L"NtGdiUpdateColors"
	,L"NtGdiUpdateTransform"
	,L"NtGdiWidenPath"
	,L"NtGdiXFORMOBJ_bApplyXform"
	,L"NtGdiXFORMOBJ_iGetXform"
	,L"NtGdiXLATEOBJ_cGetPalette"
	,L"NtGdiXLATEOBJ_hGetColorTransform"
	,L"NtGdiXLATEOBJ_iXlate"
	,L"NtUserAddClipboardFormatListener"
	,L"NtUserAssociateInputContext"
	,L"NtUserBlockInput"
	,L"NtUserBuildHimcList"
	,L"NtUserBuildPropList"
	,L"NtUserCalculatePopupWindowPosition"
	,L"NtUserCallHwndOpt"
	,L"NtUserChangeDisplaySettings"
	,L"NtUserChangeWindowMessageFilterEx"
	,L"NtUserCheckAccessForIntegrityLevel"
	,L"NtUserCheckDesktopByThreadId"
	,L"NtUserCheckWindowThreadDesktop"
	,L"NtUserChildWindowFromPointEx"
	,L"NtUserClipCursor"
	,L"NtUserCreateDesktopEx"
	,L"NtUserCreateInputContext"
	,L"NtUserCreateWindowStation"
	,L"NtUserCtxDisplayIOCtl"
	,L"NtUserDestroyInputContext"
	,L"NtUserDisableThreadIme"
	,L"NtUserDisplayConfigGetDeviceInfo"
	,L"NtUserDisplayConfigSetDeviceInfo"
	,L"NtUserDoSoundConnect"
	,L"NtUserDoSoundDisconnect"
	,L"NtUserDragDetect"
	,L"NtUserDragObject"
	,L"NtUserDrawAnimatedRects"
	,L"NtUserDrawCaption"
	,L"NtUserDrawCaptionTemp"
	,L"NtUserDrawMenuBarTemp"
	,L"NtUserDwmStartRedirection"
	,L"NtUserDwmStopRedirection"
	,L"NtUserEndMenu"
	,L"NtUserEndTouchOperation"
	,L"NtUserEvent"
	,L"NtUserFlashWindowEx"
	,L"NtUserFrostCrashedWindow"
	,L"NtUserGetAppImeLevel"
	,L"NtUserGetCaretPos"
	,L"NtUserGetClipCursor"
	,L"NtUserGetClipboardViewer"
	,L"NtUserGetComboBoxInfo"
	,L"NtUserGetCursorInfo"
	,L"NtUserGetDisplayConfigBufferSizes"
	,L"NtUserGetGestureConfig"
	,L"NtUserGetGestureExtArgs"
	,L"NtUserGetGestureInfo"
	,L"NtUserGetGuiResources"
	,L"NtUserGetImeHotKey"
	,L"NtUserGetImeInfoEx"
	,L"NtUserGetInputLocaleInfo"
	,L"NtUserGetInternalWindowPos"
	,L"NtUserGetKeyNameText"
	,L"NtUserGetKeyboardLayoutName"
	,L"NtUserGetLayeredWindowAttributes"
	,L"NtUserGetListBoxInfo"
	,L"NtUserGetMenuIndex"
	,L"NtUserGetMenuItemRect"
	,L"NtUserGetMouseMovePointsEx"
	,L"NtUserGetPriorityClipboardFormat"
	,L"NtUserGetRawInputBuffer"
	,L"NtUserGetRawInputData"
	,L"NtUserGetRawInputDeviceInfo"
	,L"NtUserGetRawInputDeviceList"
	,L"NtUserGetRegisteredRawInputDevices"
	,L"NtUserGetTopLevelWindow"
	,L"NtUserGetTouchInputInfo"
	,L"NtUserGetUpdatedClipboardFormats"
	,L"NtUserGetWOWClass"
	,L"NtUserGetWindowCompositionAttribute"
	,L"NtUserGetWindowCompositionInfo"
	,L"NtUserGetWindowDisplayAffinity"
	,L"NtUserGetWindowMinimizeRect"
	,L"NtUserGetWindowRgnEx"
	,L"NtUserGhostWindowFromHungWindow"
	,L"NtUserHardErrorControl"
	,L"NtUserHiliteMenuItem"
	,L"NtUserHungWindowFromGhostWindow"
	,L"NtUserHwndQueryRedirectionInfo"
	,L"NtUserHwndSetRedirectionInfo"
	,L"NtUserImpersonateDdeClientWindow"
	,L"NtUserInitTask"
	,L"NtUserInitialize"
	,L"NtUserInitializeClientPfnArrays"
	,L"NtUserInjectGesture"
	,L"NtUserInternalGetWindowIcon"
	,L"NtUserIsTopLevelWindow"
	,L"NtUserIsTouchWindow"
	,L"NtUserLoadKeyboardLayoutEx"
	,L"NtUserLockWindowStation"
	,L"NtUserLockWorkStation"
	,L"NtUserLogicalToPhysicalPoint"
	,L"NtUserMNDragLeave"
	,L"NtUserMNDragOver"
	,L"NtUserMagControl"
	,L"NtUserMagGetContextInformation"
	,L"NtUserMagSetContextInformation"
	,L"NtUserManageGestureHandlerWindow"
	,L"NtUserMenuItemFromPoint"
	,L"NtUserMinMaximize"
	,L"NtUserModifyWindowTouchCapability"
	,L"NtUserNotifyIMEStatus"
	,L"NtUserOpenInputDesktop"
	,L"NtUserOpenThreadDesktop"
	,L"NtUserPaintMonitor"
	,L"NtUserPhysicalToLogicalPoint"
	,L"NtUserPrintWindow"
	,L"NtUserQueryDisplayConfig"
	,L"NtUserQueryInformationThread"
	,L"NtUserQueryInputContext"
	,L"NtUserQuerySendMessage"
	,L"NtUserRealChildWindowFromPoint"
	,L"NtUserRealWaitMessageEx"
	,L"NtUserRegisterErrorReportingDialog"
	,L"NtUserRegisterHotKey"
	,L"NtUserRegisterRawInputDevices"
	,L"NtUserRegisterServicesProcess"
	,L"NtUserRegisterSessionPort"
	,L"NtUserRegisterTasklist"
	,L"NtUserRegisterUserApiHook"
	,L"NtUserRemoteConnect"
	,L"NtUserRemoteRedrawRectangle"
	,L"NtUserRemoteRedrawScreen"
	,L"NtUserRemoteStopScreenUpdates"
	,L"NtUserRemoveClipboardFormatListener"
	,L"NtUserResolveDesktopForWOW"
	,L"NtUserSendTouchInput"
	,L"NtUserSetAppImeLevel"
	,L"NtUserSetChildWindowNoActivate"
	,L"NtUserSetClassWord"
	,L"NtUserSetCursorContents"
	,L"NtUserSetDisplayConfig"
	,L"NtUserSetGestureConfig"
	,L"NtUserSetImeHotKey"
	,L"NtUserSetImeInfoEx"
	,L"NtUserSetImeOwnerWindow"
	,L"NtUserSetInternalWindowPos"
	,L"NtUserSetLayeredWindowAttributes"
	,L"NtUserSetMenu"
	,L"NtUserSetMenuContextHelpId"
	,L"NtUserSetMenuFlagRtoL"
	,L"NtUserSetMirrorRendering"
	,L"NtUserSetObjectInformation"
	,L"NtUserSetProcessDPIAware"
	,L"NtUserSetShellWindowEx"
	,L"NtUserSetSysColors"
	,L"NtUserSetSystemCursor"
	,L"NtUserSetSystemTimer"
	,L"NtUserSetThreadLayoutHandles"
	,L"NtUserSetWindowCompositionAttribute"
	,L"NtUserSetWindowDisplayAffinity"
	,L"NtUserSetWindowRgnEx"
	,L"NtUserSetWindowStationUser"
	,L"NtUserSfmDestroyLogicalSurfaceBinding"
	,L"NtUserSfmDxBindSwapChain"
	,L"NtUserSfmDxGetSwapChainStats"
	,L"NtUserSfmDxOpenSwapChain"
	,L"NtUserSfmDxQuerySwapChainBindingStatus"
	,L"NtUserSfmDxReleaseSwapChain"
	,L"NtUserSfmDxReportPendingBindingsToDwm"
	,L"NtUserSfmDxSetSwapChainBindingStatus"
	,L"NtUserSfmDxSetSwapChainStats"
	,L"NtUserSfmGetLogicalSurfaceBinding"
	,L"NtUserShowSystemCursor"
	,L"NtUserSoundSentry"
	,L"NtUserSwitchDesktop"
	,L"NtUserTestForInteractiveUser"
	,L"NtUserTrackPopupMenuEx"
	,L"NtUserUnloadKeyboardLayout"
	,L"NtUserUnlockWindowStation"
	,L"NtUserUnregisterHotKey"
	,L"NtUserUnregisterSessionPort"
	,L"NtUserUnregisterUserApiHook"
	,L"NtUserUpdateInputContext"
	,L"NtUserUpdateInstance"
	,L"NtUserUpdateLayeredWindow"
	,L"NtUserUpdatePerUserSystemParameters"
	,L"NtUserUpdateWindowTransform"
	,L"NtUserUserHandleGrantAccess"
	,L"NtUserValidateHandleSecure"
	,L"NtUserWaitForInputIdle"
	,L"NtUserWaitForMsgAndEvent"
	,L"NtUserWindowFromPhysicalPoint"
	,L"NtUserYieldTask"
	,L"NtUserSetClassLongPtr"
	,L"NtUserSetWindowLongPtr"
};

