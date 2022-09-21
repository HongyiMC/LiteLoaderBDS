/**
 * @file  MC/TickingAreaListBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TickingAreaListBase.
 *
 */
class TickingAreaListBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKINGAREALISTBASE
public:
    class TickingAreaListBase& operator=(class TickingAreaListBase const &) = delete;
    TickingAreaListBase(class TickingAreaListBase const &) = delete;
    TickingAreaListBase() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TickingAreaListBase();
    /**
     * @hash   -1351060417
     * @vftbl  1
     * @symbol ?removeDistantEntityAreasAndCheckForRemoved@TickingAreaListBase@@UEAA_NAEBV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@V?$function@$$A6AXAEBVITickingArea@@@Z@3@AEAVLevelStorage@@@Z
     */
    virtual bool removeDistantEntityAreasAndCheckForRemoved(std::vector<class Vec3> const &, class std::function<void (class ITickingArea const &)>, class LevelStorage &);
    /**
     * @hash   -811005342
     * @symbol ?add@TickingAreaListBase@@QEAAXV?$unique_ptr@VITickingArea@@U?$default_delete@VITickingArea@@@std@@@std@@@Z
     */
    MCAPI void add(std::unique_ptr<class ITickingArea>);
    /**
     * @hash   -1942414360
     * @symbol ?countEntityTickingAreas@TickingAreaListBase@@QEBAIXZ
     */
    MCAPI unsigned int countEntityTickingAreas() const;
    /**
     * @hash   -862673140
     * @symbol ?countStandaloneTickingAreas@TickingAreaListBase@@QEBAIXZ
     */
    MCAPI unsigned int countStandaloneTickingAreas() const;
    /**
     * @hash   1627123387
     * @symbol ?destroyAreas@TickingAreaListBase@@QEAAXXZ
     */
    MCAPI void destroyAreas();
    /**
     * @hash   1153583340
     * @symbol ?empty@TickingAreaListBase@@QEBA_NXZ
     */
    MCAPI bool empty() const;
    /**
     * @hash   673306276
     * @symbol ?findStandaloneAreasContaining@TickingAreaListBase@@QEAA?AV?$vector@V?$shared_ptr@VITickingArea@@@std@@V?$allocator@V?$shared_ptr@VITickingArea@@@std@@@2@@std@@AEBVBlockPos@@@Z
     */
    MCAPI std::vector<class std::shared_ptr<class ITickingArea>> findStandaloneAreasContaining(class BlockPos const &);
    /**
     * @hash   -147289768
     * @symbol ?findStandaloneAreasNamed@TickingAreaListBase@@QEBA?AV?$vector@V?$shared_ptr@VITickingArea@@@std@@V?$allocator@V?$shared_ptr@VITickingArea@@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI std::vector<class std::shared_ptr<class ITickingArea>> findStandaloneAreasNamed(std::string const &) const;
    /**
     * @hash   546598828
     * @symbol ?getAreaFor@TickingAreaListBase@@QEBA?AV?$shared_ptr@VITickingArea@@@std@@AEBUActorUniqueID@@@Z
     */
    MCAPI class std::shared_ptr<class ITickingArea> getAreaFor(struct ActorUniqueID const &) const;
    /**
     * @hash   -2041421977
     * @symbol ?getAreas@TickingAreaListBase@@QEBAAEBV?$vector@V?$shared_ptr@VITickingArea@@@std@@V?$allocator@V?$shared_ptr@VITickingArea@@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<class std::shared_ptr<class ITickingArea>> const & getAreas() const;
    /**
     * @hash   1564530066
     * @symbol ?getStandaloneTickingAreaDescriptions@TickingAreaListBase@@QEBA?AV?$vector@UTickingAreaDescription@@V?$allocator@UTickingAreaDescription@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct TickingAreaDescription> getStandaloneTickingAreaDescriptions() const;
    /**
     * @hash   1353760995
     * @symbol ?hasTickingAreaNamed@TickingAreaListBase@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool hasTickingAreaNamed(std::string const &) const;
    /**
     * @hash   -1763210596
     * @symbol ?isPreloadDone@TickingAreaListBase@@QEBA_NXZ
     */
    MCAPI bool isPreloadDone() const;
    /**
     * @hash   345071459
     * @symbol ?processRemoves@TickingAreaListBase@@QEAAXXZ
     */
    MCAPI void processRemoves();
    /**
     * @hash   873492415
     * @symbol ?processUpdates@TickingAreaListBase@@QEAAXAEAVLevelStorage@@UTick@@@Z
     */
    MCAPI void processUpdates(class LevelStorage &, struct Tick);
    /**
     * @hash   -1762730519
     * @symbol ?removeAllStandaloneAreas@TickingAreaListBase@@QEAA?AV?$vector@UTickingAreaDescription@@V?$allocator@UTickingAreaDescription@@@std@@@std@@AEAVLevelStorage@@@Z
     */
    MCAPI std::vector<struct TickingAreaDescription> removeAllStandaloneAreas(class LevelStorage &);
    /**
     * @hash   -1459113837
     * @symbol ?removeAreas@TickingAreaListBase@@QEAA?AV?$vector@UTickingAreaDescription@@V?$allocator@UTickingAreaDescription@@@std@@@std@@AEBV?$vector@V?$shared_ptr@VITickingArea@@@std@@V?$allocator@V?$shared_ptr@VITickingArea@@@std@@@2@@3@AEAVLevelStorage@@@Z
     */
    MCAPI std::vector<struct TickingAreaDescription> removeAreas(std::vector<class std::shared_ptr<class ITickingArea>> const &, class LevelStorage &);
    /**
     * @hash   251574622
     * @symbol ?tick@TickingAreaListBase@@QEAAXAEBUTick@@@Z
     */
    MCAPI void tick(struct Tick const &);
    /**
     * @hash   18605672
     * @symbol ?tickSeasons@TickingAreaListBase@@QEAAXAEAVRandom@@@Z
     */
    MCAPI void tickSeasons(class Random &);
    /**
     * @hash   -2031819842
     * @symbol ?updateBlockSourceCurrentTick@TickingAreaListBase@@QEAAXAEBUTick@@@Z
     */
    MCAPI void updateBlockSourceCurrentTick(struct Tick const &);

//protected:
    /**
     * @hash   -1676560837
     * @symbol ?_shouldRemoveArea@TickingAreaListBase@@IEBA_NIAEBV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@@Z
     */
    MCAPI bool _shouldRemoveArea(unsigned int, std::vector<class Vec3> const &) const;

protected:

};