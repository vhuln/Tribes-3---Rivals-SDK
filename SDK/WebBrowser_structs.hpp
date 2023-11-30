#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct WebBrowser.WebJSCallbackBase
struct WebBrowser_WebJSCallbackBase
{
public:
	uint8                                        Pad_1CE2[0x20];                                    // Fixing Size Of Struct 
};

// 0x0 (0x20 - 0x20)
// ScriptStruct WebBrowser.WebJSFunction
struct WebBrowser_WebJSFunction : public WebBrowser_WebJSCallbackBase
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct WebBrowser.WebJSResponse
struct WebBrowser_WebJSResponse : public WebBrowser_WebJSCallbackBase
{
public:
};

}


