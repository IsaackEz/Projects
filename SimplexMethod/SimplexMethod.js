var Table = [
    [0, 15, 10, 120, 60, 300, 60, 1, 0, 0, 0, 1440],
    [0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 5],
    [0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 5],
    [0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 1, 132],
    [1, -4, -2, -7, -3, -2, -4, 0, 0, 0, 0, 0],
];

//  var MaxMin = window.prompt("Max o min: ");
//var variable = window.prompt("How many variables: ");
var radQuot = [];
var flag = 1;
while (flag != 0) {
    var valuePositiveRow = [];
    let positiveRow;
    var positionPositiveRows = [];
    var positionPositiveRow;
    var quotPivot;
    var fPivot;
    let lastRow = Table.slice(-1)[0];
    let min_FunZ = Math.min.apply(Math, lastRow);
    let cPivot = lastRow.indexOf(min_FunZ);
    if (min_FunZ < 0) {
        var xRows = Table.slice(0, -1);
        for (i = 0; i < xRows.length; i++) {
            positiveRow = xRows[i][cPivot] > 0;
            if (positiveRow == true) {
                valuePositiveRow.push(xRows[i][cPivot]);
            } else {
                valuePositiveRow.push(0);
            }
        }
        for (i = 0; i < valuePositiveRow.length; i++) {
            if (valuePositiveRow[i] > 0) {
                var tempElementPivot =
                    Table[valuePositiveRow.indexOf(valuePositiveRow[i])][
                        cPivot
                    ];
                console.log("valuePositiveRow", valuePositiveRow);
                positionPositiveRows.push(
                    valuePositiveRow.indexOf(valuePositiveRow[i])
                );
                console.log("positionPositiveRows", positionPositiveRows);
                radQuot.push(Table[i][lastRow.length - 1] / Table[i][cPivot]);
                console.log("radQuot", radQuot);
                quotPivot = Math.min.apply(Math, radQuot);
                console.log("quotPivot", quotPivot);
                positionPositiveRow = radQuot.indexOf(quotPivot);
                console.log("positionPositiveRow", positionPositiveRow);
                fPivot = positionPositiveRows[positionPositiveRow];
            }
        }
        for (i = 0; i < lastRow.length; i++) {
            Table[fPivot][i] = Table[fPivot][i] / Table[fPivot][cPivot];
        }
        console.log("Table[fPivot][i]", Table.slice(fPivot)[0]);
    }

    flag = 0;
}