/**
 * =============================================================
 * @file        Pachislot_DataGet.ino
 * @author      kinketsu patron (https://kinketsu-patron.com)
 * @brief       メインファイル
 * @version     1.0
 * @date        2024-06-08
 * =============================================================
 */

// =======================================================
// ヘッダインクルード
// =======================================================
#include "inc/Port.h"
#include "inc/Interrupt.h"
#include "inc/Serial_Com.h"
#include "inc/DataManager.h"

/**
 * =======================================================
 * @fn         setup
 * @brief      初期化を行う
 * @date        2024-06-08
 * =======================================================
 */
void    setup( void )
{
        Port_Init( );           // ポートを初期化する
        Intr_Init( );           // 割り込み機能を初期化する
        Serial_Init( );         // シリアル通信を初期化する
        Data_Init( );           // データ管理を初期化する
}

/**
 * =======================================================
 * @fn         loop
 * @brief      繰り返し処理を行う
 * @date        2024-06-08
 * =======================================================
 */
void    loop( void )
{
        // メインループでは何もしない
}