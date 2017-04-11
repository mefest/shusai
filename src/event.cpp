#include "../include/event.h"


QString Event::getName() const { return name; }
void Event::setName(const QString& Name) { name = Name; }

QString Event::getDescription() const { return description; }
void Event::setDescription(const QString& desc) { description = desc; }

QDateTime Event::getBeginTime() const { return beginTime; }
void Event::setBeginTime(const QDateTime& date) { beginTime = date; }

qint64 Event::getDuration() const { return duration; }
void Event::setDuration(const qint64& dur) { duration = dur; }

qint64 Event::getRepeatFreq() const { return repeatFreq; }
void Event::setRepeatFreq(const qint64& freq) { repeatFreq = freq; }

bool Event::getRepeat() const { return repeat; }
void Event::setRepeat(const bool& rep) { repeat = rep; }

bool Event::getNotify() const { return notify; }
void Event::setNotify(const bool& noti) { notify = noti; }
