//
// Created by paul on 6/13/22.
//

#ifndef CLAP_SAW_DEMO_LINUX_VSTGUI_ADAPTER_H
#define CLAP_SAW_DEMO_LINUX_VSTGUI_ADAPTER_H

namespace sst::clap_saw_demo
{
struct ClapSawDemo;
struct ClapSawDemoEditor;
void addLinuxVSTGUIPlugin(ClapSawDemo *);
void removeLinuxVSTGUIPlugin(ClapSawDemo *);
void exitLinuxVSTGUI();
} // namespace sst::clap_saw_demo
#endif // CLAP_SAW_DEMO_LINUX_VSTGUI_ADAPTER_H
