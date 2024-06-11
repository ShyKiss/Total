#pragma once
#include <d3d11.h>

namespace DX11 {
    inline ID3D11ShaderResourceView*    KEY_TEX = NULL;
    inline ID3D11ShaderResourceView*    BOTTLE_TEX = NULL;
    inline ID3D11ShaderResourceView*    BRICK_TEX = NULL;
    inline ID3D11ShaderResourceView*    ANTIDOTE_TEX = NULL;
    inline ID3D11ShaderResourceView*    SKILLCHARGE_TEX = NULL;
    inline ID3D11ShaderResourceView*    BATTERY_TEX = NULL;
    inline ID3D11ShaderResourceView*    SMALL_BATTERY_TEX = NULL;
    inline ID3D11ShaderResourceView*    SMALL_HEAL_TEX = NULL;
    inline ID3D11ShaderResourceView*    HEAL_TEX = NULL;
    inline ID3D11ShaderResourceView*    BANDAGE_TEX = NULL;
    inline ID3D11ShaderResourceView*    HEART_TEX = NULL;
    inline ID3D11ShaderResourceView*    ADRENALINE_TEX = NULL;
    inline ID3D11ShaderResourceView*    TICKET_TEX = NULL;
    inline ID3D11ShaderResourceView*    LOCKPICK_TEX = NULL;

    inline ID3D11ShaderResourceView*    CANISTER_TEX = NULL;
    inline ID3D11ShaderResourceView*    ACID_BOTTLE_TEX = NULL;
    inline ID3D11ShaderResourceView*    ACID_BUCKET_TEX = NULL;
    inline ID3D11ShaderResourceView*    DIAPO_TEX = NULL;
    inline ID3D11ShaderResourceView*    KIDS_TEX = NULL;
    inline ID3D11ShaderResourceView*    MATERIAL_OBJECT_TEX = NULL;

    inline ID3D11ShaderResourceView*    ENEMY_TEX = NULL;
    inline ID3D11ShaderResourceView*    VALVE_TEX = NULL;
    inline ID3D11ShaderResourceView*    DOCUMENT_TEX = NULL;
    inline ID3D11ShaderResourceView*    EVIDENCE_TEX = NULL;
    inline ID3D11ShaderResourceView*    OBJECTIVE_TEX = NULL;



	void Hook(HWND hwnd);
	void Unhook( );
}
