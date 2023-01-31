//
//  LisaEmulator.hpp
//  LisaSdlTool
//
//  Created by idz on 1/18/23.
//

#ifndef LisaEmulator_h
#define LisaEmulator_h

class LisaEmulator
{
public:
    LisaEmulator(): mbPowerOff(false) {}
    void Initialize();
    int Execute(int target);
    void *GetVideoRamBase();
    int GetScreenHeight() const { return 364; };
    int GetScreenWidth() const { return 720; }
    void OnMouseMotion(int x, int y, int button);
    void DeciSecondTimerClick();
    void SendKeycode(int keycode);
    void PressPowerKey();
    
    void OnPowerOff();
    
    bool IsPoweredOff() const {
        return mbPowerOff; }
    
    void InsertFloppy(const char *pDiskImagePath);
private:
    bool mbPowerOff;
};
#endif /* LisaEmulator_hpp */
