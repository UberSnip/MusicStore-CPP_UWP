﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "MainPage.xaml.h"

void ::SellMusicApp::MainPage::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///MainPage.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::SellMusicApp::MainPage::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
        case 1:
            {
                this->image1 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 2:
            {
                this->listView = safe_cast<::Windows::UI::Xaml::Controls::ListView^>(__target);
            }
            break;
        case 3:
            {
                this->image = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 4:
            {
                this->image_Copy = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 5:
            {
                this->image_Copy1 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 6:
            {
                this->image_Copy2 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 7:
            {
                this->image_Copy3 = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
            }
            break;
        case 8:
            {
                this->mediaElement = safe_cast<::Windows::UI::Xaml::Controls::MediaElement^>(__target);
            }
            break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::SellMusicApp::MainPage::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}


