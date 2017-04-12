// Copyright (c) 2017 Timur Bairamukov (inagen57@gmail.com)
// Licensed under the GPLv3 license as published by Free Software Foundation.
// https://www.gnu.org/licenses/gpl-3.0-standalone.html

#include "../include/event.h"


QString Event::getName() const { return name; }
void Event::setName(const QString& nameArg) { name = nameArg; }

QString Event::getDescription() const { return description; }
void Event::setDescription(const QString& descArg) { description = descArg; }

QDateTime Event::getBeginTime() const { return beginTime; }
void Event::setBeginTime(const QDateTime& dateArg) { beginTime = dateArg; }

qint64 Event::getDuration() const { return duration; }
void Event::setDuration(const qint64& durationArg) { duration = durationArg; }

qint64 Event::getRepeatFreq() const { return repeatFreq; }
void Event::setRepeatFreq(const qint64& freqArg) { repeatFreq = freqArg; }

bool Event::getRepeat() const { return repeat; }
void Event::setRepeat(const bool& repArg) { repeat = repArg; }

bool Event::getNotify() const { return notify; }
void Event::setNotify(const bool& notifyArg) { notify = notifyArg; }
