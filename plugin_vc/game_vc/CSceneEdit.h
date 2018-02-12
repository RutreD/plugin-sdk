/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_VC.h"
#include "CMovieData.h"
#include "CPed.h"
#include "CVehicle.h"

class CSceneEdit {
public:
    CMovieData m_aMovie[20];

    // static variables
    static bool &m_bActor2Selected;
    static bool &m_bActorSelected;
    static bool &m_bCameraFollowActor;
    static bool &m_bCommandActive;
    static bool &m_bDrawGotoArrow;
    static bool &m_bEditOn;
    static bool &m_bRecording;
    static bool &m_bVehicleSelected;
    static short &m_nActor;
    static short &m_nActor2;
    static unsigned short &m_nCurrentActor;
    static unsigned short &m_nCurrentCommand;
    static unsigned short &m_nCurrentMovieCommand;
    static unsigned short &m_nCurrentVehicle;
    static unsigned short &m_nNumActors;
    static unsigned short &m_nNumMovieCommands;
    static unsigned short &m_nNumVehicles;
    static unsigned int &m_nPedmodelId;
    static short &m_nVehicle;
    static short &m_nVehicle2;
    static unsigned int &m_nVehiclemodelId;
    static unsigned short &m_nWeaponType;
    static CVector *m_vecCamHeading;
    static CVector *m_vecCurrentPosition;
    static CVector *m_vecGotoPosition;
    static CPed *pActors;
    static CVehicle *pVehicles;
    static CMovieData *Movie;

    // static functions
    static bool SelectWeapon();
    static bool SelectVehicle();
    static bool SelectActor2();
    static bool SelectActor();
    static void PlayBack();
    static void ProcessCommand();
    static void Draw();
    static void Update();
    static void ReInitialise();
    static void InitPlayBack();
    static void Initialise();
};

VALIDATE_SIZE(CSceneEdit, 0x2D0);
