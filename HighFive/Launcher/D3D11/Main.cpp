// =================================================================================
// Includes 
// =================================================================================
#include "Includes.h"
#include "VIngameConsole.h"
#include "IRenderer.h"
#include "../Chat.h"
#include "../Globals.h"

// =================================================================================
// Globals 
// =================================================================================
IRenderer* g_pRenderer = NULL;

void D3DTextDraw(int x, int y, Color col, std::string text)
{
	g_pRenderer->DrawText(x, y, col, text);
}

// =================================================================================
// Render 
// =================================================================================
void VIngameConsole::Render()
{
	CChat::Get()->Render();
	
}