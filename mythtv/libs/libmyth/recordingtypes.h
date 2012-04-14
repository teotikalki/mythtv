#ifndef RECORDINGTYPES_H_
#define RECORDINGTYPES_H_

#include <QString>

#include "mythexp.h"

typedef enum RecordingTypes
{
    kNotRecording = 0,
    kSingleRecord = 1,
    kTimeslotRecord,
    kChannelRecord,
    kAllRecord,
    kWeekslotRecord,
    kFindOneRecord,
    kOverrideRecord,
    kDontRecord,
    kFindDailyRecord,
    kFindWeeklyRecord
} RecordingType; // note stored in uint8_t in ProgramInfo
MPUBLIC QString toString(RecordingType);
MPUBLIC QString toRawString(RecordingType);
MPUBLIC QChar   toQChar( RecordingType);
MPUBLIC RecordingType recTypeFromString(const QString &);
MPUBLIC int RecTypePriority(RecordingType rectype);

typedef enum RecordingDupInTypes
{
    kDupsInRecorded     = 0x01,
    kDupsInOldRecorded  = 0x02,
    kDupsInAll          = 0x0F,
    kDupsNewEpi         = 0x10
} RecordingDupInType; // note stored in uint8_t in ProgramInfo
MPUBLIC QString toRawString(RecordingDupInType);
MPUBLIC RecordingDupInType dupInFromString(const QString &);

typedef enum RecordingDupMethodType
{
    kDupCheckNone     = 0x01,
    kDupCheckSub      = 0x02,
    kDupCheckDesc     = 0x04,
    kDupCheckSubDesc  = 0x06,
    kDupCheckSubThenDesc = 0x08
} RecordingDupMethodType; // note stored in uint8_t in ProgramInfo
MPUBLIC QString toRawString(RecordingDupMethodType);
MPUBLIC RecordingDupMethodType dupMethodFromString(const QString &);

typedef enum RecSearchTypes
{
    kNoSearch = 0,
    kPowerSearch,
    kTitleSearch,
    kKeywordSearch,
    kPeopleSearch,
    kManualSearch
} RecSearchType;
MPUBLIC QString toRawString(RecSearchType);
MPUBLIC RecSearchType searchTypeFromString(const QString &);

#endif

/*
 * vim:ts=4:sw=4:ai:et:si:sts=4
 */
