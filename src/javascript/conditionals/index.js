const dayStart = "07:30";
const dayEnd = "17:45";

function coerTime(time) {
  let [h, m] = time.split(":");

  return Number(h) * 60 + Number(m);
}

function scheduleMeeting(startTime, durationMinutes) {
  // ..TODO..
  const startMin = coerTime(startTime);
  const endMin = startMin + durationMinutes;
  const dStart = coerTime(dayStart);
  const dEnd = coerTime(dayEnd);

  console.log({ startMin, endMin, dStart, dEnd });

  if (dStart <= startMin && dEnd >= endMin) {
    console.log("true");
    return true;
  }
  console.log("false");
  return false;
}

scheduleMeeting("7:00", 15); // false
scheduleMeeting("7:30", 30); // true
scheduleMeeting("07:15", 30); // false
scheduleMeeting("11:30", 60); // true
scheduleMeeting("17:00", 45); // true
scheduleMeeting("17:30", 30); // false
scheduleMeeting("18:00", 15); // false
