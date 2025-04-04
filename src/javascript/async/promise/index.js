// const promise = new Promise(function (res, rej) {
//   const data = fetch("https://api.github.com/users/pr4j3sh");
//   res(data);
// });
//
// promise
//   .then((res) => res.json())
//   .then((data) => console.log(data))
//   .catch((err) => console.error(err.message));

const users = ["pr4j3sh", "king-407", "ayush23719", "divyansh-nishad"];

const promises = users.map((user) =>
  fetch(`https://api.github.com/users/${user}`),
);

Promise.all(promises)
  .then((res) => Promise.all(res.map((r) => r.json())))
  .then((res) =>
    console.log(
      res.map((r) => {
        return { [r.login]: r.public_repos };
      }),
    ),
  );
